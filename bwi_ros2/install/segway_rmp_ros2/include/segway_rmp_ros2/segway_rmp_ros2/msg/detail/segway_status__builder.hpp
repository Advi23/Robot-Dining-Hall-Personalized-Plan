// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__BUILDER_HPP_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_rmp_ros2/msg/detail/segway_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_rmp_ros2
{

namespace msg
{

namespace builder
{

class Init_SegwayStatus_motors_enabled
{
public:
  explicit Init_SegwayStatus_motors_enabled(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  ::segway_rmp_ros2::msg::SegwayStatus motors_enabled(::segway_rmp_ros2::msg::SegwayStatus::_motors_enabled_type arg)
  {
    msg_.motors_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_powerbase_battery
{
public:
  explicit Init_SegwayStatus_powerbase_battery(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_motors_enabled powerbase_battery(::segway_rmp_ros2::msg::SegwayStatus::_powerbase_battery_type arg)
  {
    msg_.powerbase_battery = std::move(arg);
    return Init_SegwayStatus_motors_enabled(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_ui_battery
{
public:
  explicit Init_SegwayStatus_ui_battery(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_powerbase_battery ui_battery(::segway_rmp_ros2::msg::SegwayStatus::_ui_battery_type arg)
  {
    msg_.ui_battery = std::move(arg);
    return Init_SegwayStatus_powerbase_battery(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_gain_schedule
{
public:
  explicit Init_SegwayStatus_gain_schedule(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_ui_battery gain_schedule(::segway_rmp_ros2::msg::SegwayStatus::_gain_schedule_type arg)
  {
    msg_.gain_schedule = std::move(arg);
    return Init_SegwayStatus_ui_battery(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_operation_mode
{
public:
  explicit Init_SegwayStatus_operation_mode(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_gain_schedule operation_mode(::segway_rmp_ros2::msg::SegwayStatus::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_SegwayStatus_gain_schedule(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_right_motor_torque
{
public:
  explicit Init_SegwayStatus_right_motor_torque(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_operation_mode right_motor_torque(::segway_rmp_ros2::msg::SegwayStatus::_right_motor_torque_type arg)
  {
    msg_.right_motor_torque = std::move(arg);
    return Init_SegwayStatus_operation_mode(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_left_motor_torque
{
public:
  explicit Init_SegwayStatus_left_motor_torque(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_right_motor_torque left_motor_torque(::segway_rmp_ros2::msg::SegwayStatus::_left_motor_torque_type arg)
  {
    msg_.left_motor_torque = std::move(arg);
    return Init_SegwayStatus_right_motor_torque(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_yaw_displacement
{
public:
  explicit Init_SegwayStatus_yaw_displacement(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_left_motor_torque yaw_displacement(::segway_rmp_ros2::msg::SegwayStatus::_yaw_displacement_type arg)
  {
    msg_.yaw_displacement = std::move(arg);
    return Init_SegwayStatus_left_motor_torque(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_forward_displacement
{
public:
  explicit Init_SegwayStatus_forward_displacement(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_yaw_displacement forward_displacement(::segway_rmp_ros2::msg::SegwayStatus::_forward_displacement_type arg)
  {
    msg_.forward_displacement = std::move(arg);
    return Init_SegwayStatus_yaw_displacement(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_right_wheel_displacement
{
public:
  explicit Init_SegwayStatus_right_wheel_displacement(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_forward_displacement right_wheel_displacement(::segway_rmp_ros2::msg::SegwayStatus::_right_wheel_displacement_type arg)
  {
    msg_.right_wheel_displacement = std::move(arg);
    return Init_SegwayStatus_forward_displacement(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_left_wheel_displacement
{
public:
  explicit Init_SegwayStatus_left_wheel_displacement(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_right_wheel_displacement left_wheel_displacement(::segway_rmp_ros2::msg::SegwayStatus::_left_wheel_displacement_type arg)
  {
    msg_.left_wheel_displacement = std::move(arg);
    return Init_SegwayStatus_right_wheel_displacement(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_servo_frames
{
public:
  explicit Init_SegwayStatus_servo_frames(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_left_wheel_displacement servo_frames(::segway_rmp_ros2::msg::SegwayStatus::_servo_frames_type arg)
  {
    msg_.servo_frames = std::move(arg);
    return Init_SegwayStatus_left_wheel_displacement(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_yaw_rate
{
public:
  explicit Init_SegwayStatus_yaw_rate(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_servo_frames yaw_rate(::segway_rmp_ros2::msg::SegwayStatus::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_SegwayStatus_servo_frames(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_right_wheel_velocity
{
public:
  explicit Init_SegwayStatus_right_wheel_velocity(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_yaw_rate right_wheel_velocity(::segway_rmp_ros2::msg::SegwayStatus::_right_wheel_velocity_type arg)
  {
    msg_.right_wheel_velocity = std::move(arg);
    return Init_SegwayStatus_yaw_rate(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_left_wheel_velocity
{
public:
  explicit Init_SegwayStatus_left_wheel_velocity(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_right_wheel_velocity left_wheel_velocity(::segway_rmp_ros2::msg::SegwayStatus::_left_wheel_velocity_type arg)
  {
    msg_.left_wheel_velocity = std::move(arg);
    return Init_SegwayStatus_right_wheel_velocity(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_roll_rate
{
public:
  explicit Init_SegwayStatus_roll_rate(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_left_wheel_velocity roll_rate(::segway_rmp_ros2::msg::SegwayStatus::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_SegwayStatus_left_wheel_velocity(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_roll_angle
{
public:
  explicit Init_SegwayStatus_roll_angle(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_roll_rate roll_angle(::segway_rmp_ros2::msg::SegwayStatus::_roll_angle_type arg)
  {
    msg_.roll_angle = std::move(arg);
    return Init_SegwayStatus_roll_rate(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_pitch_rate
{
public:
  explicit Init_SegwayStatus_pitch_rate(::segway_rmp_ros2::msg::SegwayStatus & msg)
  : msg_(msg)
  {}
  Init_SegwayStatus_roll_angle pitch_rate(::segway_rmp_ros2::msg::SegwayStatus::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_SegwayStatus_roll_angle(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

class Init_SegwayStatus_pitch_angle
{
public:
  Init_SegwayStatus_pitch_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SegwayStatus_pitch_rate pitch_angle(::segway_rmp_ros2::msg::SegwayStatus::_pitch_angle_type arg)
  {
    msg_.pitch_angle = std::move(arg);
    return Init_SegwayStatus_pitch_rate(msg_);
  }

private:
  ::segway_rmp_ros2::msg::SegwayStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_rmp_ros2::msg::SegwayStatus>()
{
  return segway_rmp_ros2::msg::builder::Init_SegwayStatus_pitch_angle();
}

}  // namespace segway_rmp_ros2

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__BUILDER_HPP_
