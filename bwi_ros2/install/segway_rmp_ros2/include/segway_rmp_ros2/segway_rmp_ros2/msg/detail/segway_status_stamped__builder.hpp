// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__BUILDER_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_rmp_ros2/msg/detail/segway_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_rmp_ros2
{

namespace msg
{

namespace builder
{

class Init_SegwayStatusStamped_segway
{
public:
  explicit Init_SegwayStatusStamped_segway(::segway_rmp_ros2::msg::SegwayStatusStamped & msg)
  : msg_(msg)
  {}
  ::segway_rmp_ros2::msg::SegwayStatusStamped segway(::segway_rmp_ros2::msg::SegwayStatusStamped::_segway_type arg)
  {
    msg_.segway = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatusStamped msg_;
};

class Init_SegwayStatusStamped_header
{
public:
  Init_SegwayStatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegwayStatusStamped_segway header(::segway_rmp_ros2::msg::SegwayStatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SegwayStatusStamped_segway(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_rmp_ros2::msg::SegwayStatusStamped>()
{
  return segway_rmp_ros2::msg::builder::Init_SegwayStatusStamped_header();
}

}  // namespace segway_rmp_ros2

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__BUILDER_HPP_
