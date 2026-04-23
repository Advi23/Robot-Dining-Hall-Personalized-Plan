// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__TRAITS_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_rmp_ros2/msg/detail/segway_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_rmp_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SegwayStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: pitch_angle
  {
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: roll_angle
  {
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << ", ";
  }

  // member: left_wheel_velocity
  {
    out << "left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_velocity, out);
    out << ", ";
  }

  // member: right_wheel_velocity
  {
    out << "right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_velocity, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: servo_frames
  {
    out << "servo_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_frames, out);
    out << ", ";
  }

  // member: left_wheel_displacement
  {
    out << "left_wheel_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_displacement, out);
    out << ", ";
  }

  // member: right_wheel_displacement
  {
    out << "right_wheel_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_displacement, out);
    out << ", ";
  }

  // member: forward_displacement
  {
    out << "forward_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_displacement, out);
    out << ", ";
  }

  // member: yaw_displacement
  {
    out << "yaw_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_displacement, out);
    out << ", ";
  }

  // member: left_motor_torque
  {
    out << "left_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_torque, out);
    out << ", ";
  }

  // member: right_motor_torque
  {
    out << "right_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_torque, out);
    out << ", ";
  }

  // member: operation_mode
  {
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << ", ";
  }

  // member: gain_schedule
  {
    out << "gain_schedule: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_schedule, out);
    out << ", ";
  }

  // member: ui_battery
  {
    out << "ui_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.ui_battery, out);
    out << ", ";
  }

  // member: powerbase_battery
  {
    out << "powerbase_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.powerbase_battery, out);
    out << ", ";
  }

  // member: motors_enabled
  {
    out << "motors_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegwayStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pitch_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: roll_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
    out << "\n";
  }

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }

  // member: left_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_velocity, out);
    out << "\n";
  }

  // member: right_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_velocity, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: servo_frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_frames, out);
    out << "\n";
  }

  // member: left_wheel_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_displacement, out);
    out << "\n";
  }

  // member: right_wheel_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_displacement, out);
    out << "\n";
  }

  // member: forward_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_displacement, out);
    out << "\n";
  }

  // member: yaw_displacement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_displacement: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_displacement, out);
    out << "\n";
  }

  // member: left_motor_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_torque, out);
    out << "\n";
  }

  // member: right_motor_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_torque, out);
    out << "\n";
  }

  // member: operation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << "\n";
  }

  // member: gain_schedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_schedule: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_schedule, out);
    out << "\n";
  }

  // member: ui_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ui_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.ui_battery, out);
    out << "\n";
  }

  // member: powerbase_battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "powerbase_battery: ";
    rosidl_generator_traits::value_to_yaml(msg.powerbase_battery, out);
    out << "\n";
  }

  // member: motors_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motors_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegwayStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace segway_rmp_ros2

namespace rosidl_generator_traits
{

[[deprecated("use segway_rmp_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_rmp_ros2::msg::SegwayStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_rmp_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_rmp_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_rmp_ros2::msg::SegwayStatus & msg)
{
  return segway_rmp_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_rmp_ros2::msg::SegwayStatus>()
{
  return "segway_rmp_ros2::msg::SegwayStatus";
}

template<>
inline const char * name<segway_rmp_ros2::msg::SegwayStatus>()
{
  return "segway_rmp_ros2/msg/SegwayStatus";
}

template<>
struct has_fixed_size<segway_rmp_ros2::msg::SegwayStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_rmp_ros2::msg::SegwayStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_rmp_ros2::msg::SegwayStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__TRAITS_HPP_
