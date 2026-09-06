import rclpy
from rclpy.node import Node

from agri_interfaces.msg import SoilMoisture


class SoilSensorNode(Node):

    def __init__(self):
        super().__init__('soil_sensor_node')

        self.publisher_ = self.create_publisher(
            SoilMoisture,
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

        self.moisture -= 2.0

        if self.moisture < 20.0:
            self.moisture = 50.0

        msg = SoilMoisture()

        msg.timestamp = self.get_clock().now().to_msg()
        msg.sensor_id = 'soil_sensor_01'
        msg.moisture = self.moisture
        msg.unit = '%'

        self.publisher_.publish(msg)

        self.get_logger().info(
            f'Sensor {msg.sensor_id} - '
            f'Moisture: {msg.moisture:.1f}{msg.unit}'
        )


def main(args=None):
    rclpy.init(args=args)

    node = SoilSensorNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()