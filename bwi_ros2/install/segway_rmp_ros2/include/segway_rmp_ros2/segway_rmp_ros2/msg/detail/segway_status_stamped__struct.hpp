// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'segway'
#include "segway_rmp_ros2/msg/detail/segway_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_rmp_ros2__msg__SegwayStatusStamped __attribute__((deprecated))
#else
# define DEPRECATED__segway_rmp_ros2__msg__SegwayStatusStamped __declspec(deprecated)
#endif

namespace segway_rmp_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SegwayStatusStamped_
{
  using Type = SegwayStatusStamped_<ContainerAllocator>;

  explicit SegwayStatusStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    segway(_init)
  {
    (void)_init;
  }

  explicit SegwayStatusStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    segway(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _segway_type =
    segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>;
  _segway_type segway;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__segway(
    const segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> & _arg)
  {
    this->segway = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_rmp_ros2__msg__SegwayStatusStamped
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_rmp_ros2__msg__SegwayStatusStamped
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatusStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SegwayStatusStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->segway != other.segway) {
      return false;
    }
    return true;
  }
  bool operator!=(const SegwayStatusStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SegwayStatusStamped_

// alias to use template instance with default allocator
using SegwayStatusStamped =
  segway_rmp_ros2::msg::SegwayStatusStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_rmp_ros2

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_HPP_
