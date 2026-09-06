import rclpy
from rclpy.node import Node

from agri_interfaces.msg import IrrigationCommand
from agri_interfaces.msg import IrrigationState


class IrrigationValveNode(Node):

    def __init__(self):
        super().__init__('irrigation_valve_node')

        self.subscription = self.create_subscription(
            IrrigationCommand,
            '/irrigation/command',
            self.command_callback,
            10
        )

        self.state_publisher = self.create_publisher(
            IrrigationState,
            '/irrigation/state',
            10
        )

        self.get_logger().info('Irrigation valve node started')

    def time_to_nanoseconds(self, timestamp):
        return (
            timestamp.sec * 1_000_000_000
            + timestamp.nanosec
        )

    def command_callback(self, msg):

        state_msg = IrrigationState()

        state_msg.sensor_timestamp = msg.sensor_timestamp
        state_msg.command_timestamp = msg.command_timestamp
        state_msg.state_timestamp = self.get_clock().now().to_msg()

        state_msg.actuator_id = msg.actuator_id
        state_msg.active = msg.activate

        if msg.activate:
            state_msg.state = 'OPEN'
        else:
            state_msg.state = 'CLOSED'

        # Convertimos los timestamps a nanosegundos
        sensor_time_ns = self.time_to_nanoseconds(
            state_msg.sensor_timestamp
        )

        command_time_ns = self.time_to_nanoseconds(
            state_msg.command_timestamp
        )

        state_time_ns = self.time_to_nanoseconds(
            state_msg.state_timestamp
        )

        # Calculamos las latencias en milisegundos
        sensor_to_orchestrator_ms = (
            command_time_ns - sensor_time_ns
        ) / 1_000_000.0

        orchestrator_to_valve_ms = (
            state_time_ns - command_time_ns
        ) / 1_000_000.0

        total_latency_ms = (
            state_time_ns - sensor_time_ns
        ) / 1_000_000.0

        self.state_publisher.publish(state_msg)

        self.get_logger().info(
            f'Valve {state_msg.actuator_id}: {state_msg.state} | '
            f'Sensor->Orchestrator: {sensor_to_orchestrator_ms:.3f} ms | '
            f'Orchestrator->Valve: {orchestrator_to_valve_ms:.3f} ms | '
            f'Total: {total_latency_ms:.3f} ms'
        )


def main(args=None):
    rclpy.init(args=args)

    node = IrrigationValveNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()