import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32


class SoilSensorNode(Node):

    def __init__(self):
        super().__init__('soil_sensor_node')

        self.publisher_ = self.create_publisher(
            Float32,
            '/soil/moisture',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_moisture
        )

        self.moisture = 50.0

        self.get_logger().info('Soil sensor node started')

    def publish_moisture(self):
        msg = Float32()

        self.moisture -= 2.0

        if self.moisture < 20.0:
            self.moisture = 50.0

        msg.data = self.moisture

        self.publisher_.publish(msg)

        self.get_logger().info(
            f'Published soil moisture: {msg.data:.1f}%'
        )


def main(args=None):
    rclpy.init(args=args)

    node = SoilSensorNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()