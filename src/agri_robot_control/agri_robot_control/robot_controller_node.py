import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from agri_interfaces.msg import RobotCommand


class RobotControllerNode(Node):

    def __init__(self):
        super().__init__('robot_controller_node')

        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            '/agri_robot/cmd_vel',
            10
        )

        self.subscription = self.create_subscription(
            RobotCommand,
            '/robot/command',
            self.command_callback,
            10
        )

        self.get_logger().info(
            'Robot controller node started'
        )

    def command_callback(self, msg):

        twist = Twist()

        twist.linear.x = float(msg.linear_speed)
        twist.angular.z = float(msg.angular_speed)

        self.cmd_vel_publisher.publish(twist)

        self.get_logger().info(
            f'Robot {msg.robot_id} | '
            f'Command: {msg.command} | '
            f'Linear: {msg.linear_speed:.2f} m/s | '
            f'Angular: {msg.angular_speed:.2f} rad/s'
        )


def main(args=None):

    rclpy.init(args=args)

    node = RobotControllerNode()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()