// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__TRAITS_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_rmp_ros2/msg/detail/segway_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'segway'
#include "segway_rmp_ros2/msg/detail/segway_status__traits.hpp"

namespace segway_rmp_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SegwayStatusStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: segway
  {
    out << "segway: ";
    to_flow_style_yaml(msg.segway, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegwayStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: segway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segway:\n";
    to_block_style_yaml(msg.segway, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegwayStatusStamped & msg, bool use_flow_style = false)
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
  const segway_rmp_ros2::msg::SegwayStatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_rmp_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_rmp_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_rmp_ros2::msg::SegwayStatusStamped & msg)
{
  return segway_rmp_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_rmp_ros2::msg::SegwayStatusStamped>()
{
  return "segway_rmp_ros2::msg::SegwayStatusStamped";
}

template<>
inline const char * name<segway_rmp_ros2::msg::SegwayStatusStamped>()
{
  return "segway_rmp_ros2/msg/SegwayStatusStamped";
}

template<>
struct has_fixed_size<segway_rmp_ros2::msg::SegwayStatusStamped>
  : std::integral_constant<bool, has_fixed_size<segway_rmp_ros2::msg::SegwayStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<segway_rmp_ros2::msg::SegwayStatusStamped>
  : std::integral_constant<bool, has_bounded_size<segway_rmp_ros2::msg::SegwayStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<segway_rmp_ros2::msg::SegwayStatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__TRAITS_HPP_
