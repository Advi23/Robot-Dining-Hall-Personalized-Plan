#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import math

class LaserScanFilter(Node):
    def __init__(self):
        super().__init__('laser_scan_filter')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10
        )
        self.publisher = self.create_publisher(LaserScan, '/scan_filtered', 10)
        self.get_logger().info("Laser scan filter node started.")

    def scan_callback(self, msg: LaserScan):
        # Create a new LaserScan message to publish filtered data.
        filtered_scan = LaserScan()
        filtered_scan.header = msg.header
        filtered_scan.angle_min = msg.angle_min
        filtered_scan.angle_max = msg.angle_max
        filtered_scan.angle_increment = msg.angle_increment
        filtered_scan.time_increment = msg.time_increment
        filtered_scan.scan_time = msg.scan_time
        filtered_scan.range_min = msg.range_min
        filtered_scan.range_max = msg.range_max

        # Filter the ranges: if range is below 0.3, set it to infinity.
        filtered_ranges = []
        for r in msg.ranges:
            if r < 0.3:
                filtered_ranges.append(float('inf'))
            else:
                filtered_ranges.append(r)
        filtered_scan.ranges = filtered_ranges

        # Optionally copy intensities if available.
        if msg.intensities:
            filtered_scan.intensities = msg.intensities

        self.publisher.publish(filtered_scan)

def main(args=None):
    rclpy.init(args=args)
    node = LaserScanFilter()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down laser_scan_filter node.")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
