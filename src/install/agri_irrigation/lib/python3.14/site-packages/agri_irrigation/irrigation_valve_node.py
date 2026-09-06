import rclpy
from rclpy.node import Node

from std_msgs.msg import Bool
from std_msgs.msg import String


class IrrigationValveNode(Node):

    def __init__(self):
        super().__init__('irrigation_valve_node')

        self.subscription = self.create_subscription(
            Bool,
            '/irrigation/command',
            self.command_callback,
            10
        )

        self.state_publisher = self.create_publisher(
            String,
            '/irrigation/state',
            10
        )

        self.current_state = 'CLOSED'

        self.get_logger().info('Irrigation valve node started')

    def command_callback(self, msg):

        state_msg = String()

        if msg.data:
            self.current_state = 'OPEN'
        else:
            self.current_state = 'CLOSED'

        state_msg.data = self.current_state

        self.state_publisher.publish(state_msg)

        self.get_logger().info(
            f'Irrigation valve state: {self.current_state}'
        )


def main(args=None):
    rclpy.init(args=args)

    node = IrrigationValveNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()