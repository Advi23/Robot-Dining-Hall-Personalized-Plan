// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_H_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SegwayStatus in the package segway_rmp_ros2.
/**
  * SegwayStatus.msg
  * This is the message definition for the Segway Status struct.
 */
typedef struct segway_rmp_ros2__msg__SegwayStatus
{
  /// Gain Schedule Constants
  /// LIGHT = 1
  /// TALL = 2
  /// HEAVY = 3
  /// Operation Mode Constants
  /// BALANCE = 1
  /// TRACTOR = 2
  /// POWER_DOWN = 3
  /// radians
  int8_t pitch_angle;
  /// radians/s
  int8_t pitch_rate;
  /// radians
  float roll_angle;
  /// radians/s
  float roll_rate;
  /// meters/s
  float left_wheel_velocity;
  /// meters/s
  float right_wheel_velocity;
  /// radians/s
  float yaw_rate;
  /// frames/second
  float servo_frames;
  /// meters
  float left_wheel_displacement;
  /// meters
  float right_wheel_displacement;
  /// meters
  float forward_displacement;
  /// revolutions
  float yaw_displacement;
  /// Newton-meters
  float left_motor_torque;
  /// Newton-meters
  float right_motor_torque;
  /// Balance, Tractor, or Powered Down
  int8_t operation_mode;
  /// Light, Tall, or Heavy
  int8_t gain_schedule;
  /// Volts
  float ui_battery;
  /// Volts
  float powerbase_battery;
  /// Enabled (true) or E-Stopped (false)
  bool motors_enabled;
} segway_rmp_ros2__msg__SegwayStatus;

// Struct for a sequence of segway_rmp_ros2__msg__SegwayStatus.
typedef struct segway_rmp_ros2__msg__SegwayStatus__Sequence
{
  segway_rmp_ros2__msg__SegwayStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_rmp_ros2__msg__SegwayStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_H_
