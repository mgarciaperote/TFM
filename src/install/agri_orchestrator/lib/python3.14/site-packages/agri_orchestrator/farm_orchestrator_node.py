import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32
from std_msgs.msg import Bool


class FarmOrchestratorNode(Node):

    def __init__(self):
        super().__init__('farm_orchestrator_node')

        self.subscription = self.create_subscription(
            Float32,
            '/soil/moisture',
            self.moisture_callback,
            10
        )

        self.irrigation_publisher = self.create_publisher(
            Bool,
            '/irrigation/command',
            10
        )

        self.threshold = 30.0

        self.get_logger().info('Farm orchestrator started')

    def moisture_callback(self, msg):

        command = Bool()

        if msg.data < self.threshold:
            command.data = True

            self.get_logger().info(
                f'Low moisture ({msg.data:.1f}%). Irrigation ON'
            )

        else:
            command.data = False

            self.get_logger().info(
                f'Moisture OK ({msg.data:.1f}%). Irrigation OFF'
            )

        self.irrigation_publisher.publish(command)


def main(args=None):
    rclpy.init(args=args)

    node = FarmOrchestratorNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()