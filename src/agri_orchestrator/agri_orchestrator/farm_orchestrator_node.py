import rclpy
from rclpy.node import Node

from agri_interfaces.msg import (
    SoilMoisture,
    IrrigationCommand,
    RobotCommand
)


class FarmOrchestratorNode(Node):

    def __init__(self):
        super().__init__('farm_orchestrator_node')

        self.subscription = self.create_subscription(
            SoilMoisture,
            '/soil/moisture',
            self.moisture_callback,
            10
        )

        self.irrigation_publisher = self.create_publisher(
            IrrigationCommand,
            '/irrigation/command',
            10
        )

        self.robot_publisher = self.create_publisher(
            RobotCommand,
            '/robot/command',
            10
        )

        self.threshold = 30.0

        self.get_logger().info('Farm orchestrator started')

    def moisture_callback(self, msg):

        now = self.get_clock().now().to_msg()

        irrigation = IrrigationCommand()
        irrigation.sensor_timestamp = msg.timestamp
        irrigation.command_timestamp = now
        irrigation.actuator_id = 'irrigation_valve_01'
        irrigation.moisture_value = msg.moisture

        robot = RobotCommand()
        robot.timestamp = now
        robot.robot_id = 'agri_robot_01'

        if msg.moisture < self.threshold:

            irrigation.activate = True

            robot.command = 'INSPECT'
            robot.linear_speed = 0.25
            robot.angular_speed = 0.0

            self.get_logger().info(
                f'Low moisture ({msg.moisture:.1f}%). '
                'Irrigation ON | Robot INSPECT'
            )

        else:

            irrigation.activate = False

            robot.command = 'STOP'
            robot.linear_speed = 0.0
            robot.angular_speed = 0.0

            self.get_logger().info(
                f'Moisture OK ({msg.moisture:.1f}%). '
                'Irrigation OFF | Robot STOP'
            )

        self.irrigation_publisher.publish(irrigation)
        self.robot_publisher.publish(robot)


def main(args=None):

    rclpy.init(args=args)

    node = FarmOrchestratorNode()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()