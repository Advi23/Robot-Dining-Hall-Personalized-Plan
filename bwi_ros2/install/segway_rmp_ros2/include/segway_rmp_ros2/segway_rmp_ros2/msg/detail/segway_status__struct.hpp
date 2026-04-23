// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_rmp_ros2__msg__SegwayStatus __attribute__((deprecated))
#else
# define DEPRECATED__segway_rmp_ros2__msg__SegwayStatus __declspec(deprecated)
#endif

namespace segway_rmp_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SegwayStatus_
{
  using Type = SegwayStatus_<ContainerAllocator>;

  explicit SegwayStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch_angle = 0;
      this->pitch_rate = 0;
      this->roll_angle = 0.0f;
      this->roll_rate = 0.0f;
      this->left_wheel_velocity = 0.0f;
      this->right_wheel_velocity = 0.0f;
      this->yaw_rate = 0.0f;
      this->servo_frames = 0.0f;
      this->left_wheel_displacement = 0.0f;
      this->right_wheel_displacement = 0.0f;
      this->forward_displacement = 0.0f;
      this->yaw_displacement = 0.0f;
      this->left_motor_torque = 0.0f;
      this->right_motor_torque = 0.0f;
      this->operation_mode = 0;
      this->gain_schedule = 0;
      this->ui_battery = 0.0f;
      this->powerbase_battery = 0.0f;
      this->motors_enabled = false;
    }
  }

  explicit SegwayStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch_angle = 0;
      this->pitch_rate = 0;
      this->roll_angle = 0.0f;
      this->roll_rate = 0.0f;
      this->left_wheel_velocity = 0.0f;
      this->right_wheel_velocity = 0.0f;
      this->yaw_rate = 0.0f;
      this->servo_frames = 0.0f;
      this->left_wheel_displacement = 0.0f;
      this->right_wheel_displacement = 0.0f;
      this->forward_displacement = 0.0f;
      this->yaw_displacement = 0.0f;
      this->left_motor_torque = 0.0f;
      this->right_motor_torque = 0.0f;
      this->operation_mode = 0;
      this->gain_schedule = 0;
      this->ui_battery = 0.0f;
      this->powerbase_battery = 0.0f;
      this->motors_enabled = false;
    }
  }

  // field types and members
  using _pitch_angle_type =
    int8_t;
  _pitch_angle_type pitch_angle;
  using _pitch_rate_type =
    int8_t;
  _pitch_rate_type pitch_rate;
  using _roll_angle_type =
    float;
  _roll_angle_type roll_angle;
  using _roll_rate_type =
    float;
  _roll_rate_type roll_rate;
  using _left_wheel_velocity_type =
    float;
  _left_wheel_velocity_type left_wheel_velocity;
  using _right_wheel_velocity_type =
    float;
  _right_wheel_velocity_type right_wheel_velocity;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _servo_frames_type =
    float;
  _servo_frames_type servo_frames;
  using _left_wheel_displacement_type =
    float;
  _left_wheel_displacement_type left_wheel_displacement;
  using _right_wheel_displacement_type =
    float;
  _right_wheel_displacement_type right_wheel_displacement;
  using _forward_displacement_type =
    float;
  _forward_displacement_type forward_displacement;
  using _yaw_displacement_type =
    float;
  _yaw_displacement_type yaw_displacement;
  using _left_motor_torque_type =
    float;
  _left_motor_torque_type left_motor_torque;
  using _right_motor_torque_type =
    float;
  _right_motor_torque_type right_motor_torque;
  using _operation_mode_type =
    int8_t;
  _operation_mode_type operation_mode;
  using _gain_schedule_type =
    int8_t;
  _gain_schedule_type gain_schedule;
  using _ui_battery_type =
    float;
  _ui_battery_type ui_battery;
  using _powerbase_battery_type =
    float;
  _powerbase_battery_type powerbase_battery;
  using _motors_enabled_type =
    bool;
  _motors_enabled_type motors_enabled;

  // setters for named parameter idiom
  Type & set__pitch_angle(
    const int8_t & _arg)
  {
    this->pitch_angle = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const int8_t & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__roll_angle(
    const float & _arg)
  {
    this->roll_angle = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const float & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__left_wheel_velocity(
    const float & _arg)
  {
    this->left_wheel_velocity = _arg;
    return *this;
  }
  Type & set__right_wheel_velocity(
    const float & _arg)
  {
    this->right_wheel_velocity = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__servo_frames(
    const float & _arg)
  {
    this->servo_frames = _arg;
    return *this;
  }
  Type & set__left_wheel_displacement(
    const float & _arg)
  {
    this->left_wheel_displacement = _arg;
    return *this;
  }
  Type & set__right_wheel_displacement(
    const float & _arg)
  {
    this->right_wheel_displacement = _arg;
    return *this;
  }
  Type & set__forward_displacement(
    const float & _arg)
  {
    this->forward_displacement = _arg;
    return *this;
  }
  Type & set__yaw_displacement(
    const float & _arg)
  {
    this->yaw_displacement = _arg;
    return *this;
  }
  Type & set__left_motor_torque(
    const float & _arg)
  {
    this->left_motor_torque = _arg;
    return *this;
  }
  Type & set__right_motor_torque(
    const float & _arg)
  {
    this->right_motor_torque = _arg;
    return *this;
  }
  Type & set__operation_mode(
    const int8_t & _arg)
  {
    this->operation_mode = _arg;
    return *this;
  }
  Type & set__gain_schedule(
    const int8_t & _arg)
  {
    this->gain_schedule = _arg;
    return *this;
  }
  Type & set__ui_battery(
    const float & _arg)
  {
    this->ui_battery = _arg;
    return *this;
  }
  Type & set__powerbase_battery(
    const float & _arg)
  {
    this->powerbase_battery = _arg;
    return *this;
  }
  Type & set__motors_enabled(
    const bool & _arg)
  {
    this->motors_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_rmp_ros2__msg__SegwayStatus
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_rmp_ros2__msg__SegwayStatus
    std::shared_ptr<segway_rmp_ros2::msg::SegwayStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SegwayStatus_ & other) const
  {
    if (this->pitch_angle != other.pitch_angle) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->roll_angle != other.roll_angle) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->left_wheel_velocity != other.left_wheel_velocity) {
      return false;
    }
    if (this->right_wheel_velocity != other.right_wheel_velocity) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->servo_frames != other.servo_frames) {
      return false;
    }
    if (this->left_wheel_displacement != other.left_wheel_displacement) {
      return false;
    }
    if (this->right_wheel_displacement != other.right_wheel_displacement) {
      return false;
    }
    if (this->forward_displacement != other.forward_displacement) {
      return false;
    }
    if (this->yaw_displacement != other.yaw_displacement) {
      return false;
    }
    if (this->left_motor_torque != other.left_motor_torque) {
      return false;
    }
    if (this->right_motor_torque != other.right_motor_torque) {
      return false;
    }
    if (this->operation_mode != other.operation_mode) {
      return false;
    }
    if (this->gain_schedule != other.gain_schedule) {
      return false;
    }
    if (this->ui_battery != other.ui_battery) {
      return false;
    }
    if (this->powerbase_battery != other.powerbase_battery) {
      return false;
    }
    if (this->motors_enabled != other.motors_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const SegwayStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SegwayStatus_

// alias to use template instance with default allocator
using SegwayStatus =
  segway_rmp_ros2::msg::SegwayStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_rmp_ros2

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__STRUCT_HPP_
