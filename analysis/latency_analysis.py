import sys
import statistics

import rclpy
from rclpy.serialization import deserialize_message

import rosbag2_py

from agri_interfaces.msg import IrrigationState
from agri_interfaces.msg import RobotCommand
from geometry_msgs.msg import Twist


def time_to_nanoseconds(timestamp):
    return (
        timestamp.sec * 1_000_000_000
        + timestamp.nanosec
    )


def calculate_statistics(values, name):

    if not values:
        print(f'\n{name}')
        print('  No hay datos disponibles.')
        return

    mean = statistics.mean(values)
    minimum = min(values)
    maximum = max(values)

    if len(values) > 1:
        stddev = statistics.stdev(values)

        jitter_values = [
            abs(values[i] - values[i - 1])
            for i in range(1, len(values))
        ]

        jitter = statistics.mean(jitter_values)

        sorted_values = sorted(values)

        p95_index = int(0.95 * (len(sorted_values) - 1))
        p99_index = int(0.99 * (len(sorted_values) - 1))

        p95 = sorted_values[p95_index]
        p99 = sorted_values[p99_index]

    else:
        stddev = 0.0
        jitter = 0.0
        p95 = values[0]
        p99 = values[0]

    print(f'\n{name}')
    print(f'  Muestras: {len(values)}')
    print(f'  Media: {mean:.3f} ms')
    print(f'  Mínimo: {minimum:.3f} ms')
    print(f'  Máximo: {maximum:.3f} ms')
    print(f'  Desviación estándar: {stddev:.3f} ms')
    print(f'  Jitter medio: {jitter:.3f} ms')
    print(f'  P95: {p95:.3f} ms')
    print(f'  P99: {p99:.3f} ms')


def main():

    if len(sys.argv) < 2:
        print(
            'Uso: python3 latency_analysis.py '
            '<ruta_del_rosbag>'
        )
        return

    bag_path = sys.argv[1]

    rclpy.init()

    storage_options = rosbag2_py.StorageOptions(
        uri=bag_path,
        storage_id='mcap'
    )

    converter_options = rosbag2_py.ConverterOptions(
        '',
        ''
    )

    reader = rosbag2_py.SequentialReader()

    reader.open(
        storage_options,
        converter_options
    )

    # --------------------------------------------------
    # Listas para análisis de riego
    # --------------------------------------------------

    sensor_to_orchestrator = []
    orchestrator_to_valve = []
    irrigation_total = []

    # --------------------------------------------------
    # Listas para análisis del robot
    # --------------------------------------------------

    robot_command_times = []
    cmd_vel_bag_times = []

    robot_command_to_cmd_vel = []

    robot_inspect_count = 0
    robot_stop_count = 0

    cmd_vel_moving_count = 0
    cmd_vel_stopped_count = 0

    # --------------------------------------------------
    # Lectura del rosbag
    # --------------------------------------------------

    while reader.has_next():

        topic, data, bag_timestamp = reader.read_next()

        # ==============================================
        # RIEGO
        # ==============================================

        if topic == '/irrigation/state':

            msg = deserialize_message(
                data,
                IrrigationState
            )

            sensor_time_ns = time_to_nanoseconds(
                msg.sensor_timestamp
            )

            command_time_ns = time_to_nanoseconds(
                msg.command_timestamp
            )

            state_time_ns = time_to_nanoseconds(
                msg.state_timestamp
            )

            sensor_to_orchestrator_ms = (
                command_time_ns - sensor_time_ns
            ) / 1_000_000.0

            orchestrator_to_valve_ms = (
                state_time_ns - command_time_ns
            ) / 1_000_000.0

            total_ms = (
                state_time_ns - sensor_time_ns
            ) / 1_000_000.0

            sensor_to_orchestrator.append(
                sensor_to_orchestrator_ms
            )

            orchestrator_to_valve.append(
                orchestrator_to_valve_ms
            )

            irrigation_total.append(
                total_ms
            )

        # ==============================================
        # COMANDO DEL ROBOT
        # ==============================================

        elif topic == '/robot/command':

            msg = deserialize_message(
                data,
                RobotCommand
            )

            command_time_ns = time_to_nanoseconds(
                msg.timestamp
            )

            robot_command_times.append(
                command_time_ns
            )

            if msg.command == 'INSPECT':
                robot_inspect_count += 1

            elif msg.command == 'STOP':
                robot_stop_count += 1

        # ==============================================
        # TWIST DEL CONTROLADOR
        # ==============================================

        elif topic == '/agri_robot/cmd_vel':

            msg = deserialize_message(
                data,
                Twist
            )

            cmd_vel_bag_times.append(
                bag_timestamp
            )

            if (
                abs(msg.linear.x) > 0.001
                or abs(msg.angular.z) > 0.001
            ):
                cmd_vel_moving_count += 1

            else:
                cmd_vel_stopped_count += 1

    # --------------------------------------------------
    # Emparejar RobotCommand con cmd_vel
    # --------------------------------------------------

    number_pairs = min(
        len(robot_command_times),
        len(cmd_vel_bag_times)
    )

    for i in range(number_pairs):

        latency_ms = (
            cmd_vel_bag_times[i]
            - robot_command_times[i]
        ) / 1_000_000.0

        # Ignoramos valores imposibles por si hubiera
        # mensajes desordenados o timestamps anómalos.
        if latency_ms >= 0:
            robot_command_to_cmd_vel.append(
                latency_ms
            )

    # --------------------------------------------------
    # RESULTADOS
    # --------------------------------------------------

    print('\n========================================')
    print('ANÁLISIS DEL EXPERIMENTO INTEGRADO')
    print('========================================')

    print('\n--- SISTEMA DE RIEGO ---')

    calculate_statistics(
        sensor_to_orchestrator,
        'Sensor -> Orquestador'
    )

    calculate_statistics(
        orchestrator_to_valve,
        'Orquestador -> Válvula'
    )

    calculate_statistics(
        irrigation_total,
        'Latencia total del riego'
    )

    print('\n--- SISTEMA ROBÓTICO ---')

    calculate_statistics(
        robot_command_to_cmd_vel,
        'Orquestador -> cmd_vel del robot'
    )

    print('\nComandos del robot:')
    print(f'  INSPECT: {robot_inspect_count}')
    print(f'  STOP: {robot_stop_count}')

    print('\nMensajes cmd_vel:')
    print(f'  Movimiento: {cmd_vel_moving_count}')
    print(f'  Parado: {cmd_vel_stopped_count}')

    print('\nCorrespondencia:')
    print(
        f'  RobotCommand recibidos: '
        f'{len(robot_command_times)}'
    )
    print(
        f'  cmd_vel recibidos: '
        f'{len(cmd_vel_bag_times)}'
    )
    print(
        f'  Pares analizados: '
        f'{number_pairs}'
    )

    rclpy.shutdown()


if __name__ == '__main__':
    main()