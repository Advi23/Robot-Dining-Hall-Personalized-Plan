// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice
#include "segway_rmp_ros2/msg/detail/segway_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "segway_rmp_ros2/msg/detail/segway_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace segway_rmp_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_rmp_ros2
cdr_serialize(
  const segway_rmp_ros2::msg::SegwayStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pitch_angle
  cdr << ros_message.pitch_angle;
  // Member: pitch_rate
  cdr << ros_message.pitch_rate;
  // Member: roll_angle
  cdr << ros_message.roll_angle;
  // Member: roll_rate
  cdr << ros_message.roll_rate;
  // Member: left_wheel_velocity
  cdr << ros_message.left_wheel_velocity;
  // Member: right_wheel_velocity
  cdr << ros_message.right_wheel_velocity;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: servo_frames
  cdr << ros_message.servo_frames;
  // Member: left_wheel_displacement
  cdr << ros_message.left_wheel_displacement;
  // Member: right_wheel_displacement
  cdr << ros_message.right_wheel_displacement;
  // Member: forward_displacement
  cdr << ros_message.forward_displacement;
  // Member: yaw_displacement
  cdr << ros_message.yaw_displacement;
  // Member: left_motor_torque
  cdr << ros_message.left_motor_torque;
  // Member: right_motor_torque
  cdr << ros_message.right_motor_torque;
  // Member: operation_mode
  cdr << ros_message.operation_mode;
  // Member: gain_schedule
  cdr << ros_message.gain_schedule;
  // Member: ui_battery
  cdr << ros_message.ui_battery;
  // Member: powerbase_battery
  cdr << ros_message.powerbase_battery;
  // Member: motors_enabled
  cdr << (ros_message.motors_enabled ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_rmp_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  segway_rmp_ros2::msg::SegwayStatus & ros_message)
{
  // Member: pitch_angle
  cdr >> ros_message.pitch_angle;

  // Member: pitch_rate
  cdr >> ros_message.pitch_rate;

  // Member: roll_angle
  cdr >> ros_message.roll_angle;

  // Member: roll_rate
  cdr >> ros_message.roll_rate;

  // Member: left_wheel_velocity
  cdr >> ros_message.left_wheel_velocity;

  // Member: right_wheel_velocity
  cdr >> ros_message.right_wheel_velocity;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: servo_frames
  cdr >> ros_message.servo_frames;

  // Member: left_wheel_displacement
  cdr >> ros_message.left_wheel_displacement;

  // Member: right_wheel_displacement
  cdr >> ros_message.right_wheel_displacement;

  // Member: forward_displacement
  cdr >> ros_message.forward_displacement;

  // Member: yaw_displacement
  cdr >> ros_message.yaw_displacement;

  // Member: left_motor_torque
  cdr >> ros_message.left_motor_torque;

  // Member: right_motor_torque
  cdr >> ros_message.right_motor_torque;

  // Member: operation_mode
  cdr >> ros_message.operation_mode;

  // Member: gain_schedule
  cdr >> ros_message.gain_schedule;

  // Member: ui_battery
  cdr >> ros_message.ui_battery;

  // Member: powerbase_battery
  cdr >> ros_message.powerbase_battery;

  // Member: motors_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motors_enabled = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_rmp_ros2
get_serialized_size(
  const segway_rmp_ros2::msg::SegwayStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pitch_angle
  {
    size_t item_size = sizeof(ros_message.pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_rate
  {
    size_t item_size = sizeof(ros_message.pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_angle
  {
    size_t item_size = sizeof(ros_message.roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_rate
  {
    size_t item_size = sizeof(ros_message.roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message.left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message.right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_frames
  {
    size_t item_size = sizeof(ros_message.servo_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_wheel_displacement
  {
    size_t item_size = sizeof(ros_message.left_wheel_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_wheel_displacement
  {
    size_t item_size = sizeof(ros_message.right_wheel_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forward_displacement
  {
    size_t item_size = sizeof(ros_message.forward_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_displacement
  {
    size_t item_size = sizeof(ros_message.yaw_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_motor_torque
  {
    size_t item_size = sizeof(ros_message.left_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_motor_torque
  {
    size_t item_size = sizeof(ros_message.right_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operation_mode
  {
    size_t item_size = sizeof(ros_message.operation_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain_schedule
  {
    size_t item_size = sizeof(ros_message.gain_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ui_battery
  {
    size_t item_size = sizeof(ros_message.ui_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: powerbase_battery
  {
    size_t item_size = sizeof(ros_message.powerbase_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motors_enabled
  {
    size_t item_size = sizeof(ros_message.motors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_rmp_ros2
max_serialized_size_SegwayStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: pitch_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pitch_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: roll_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_frames
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_wheel_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_wheel_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: forward_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: operation_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gain_schedule
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ui_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: powerbase_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motors_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_rmp_ros2::msg::SegwayStatus;
    is_plain =
      (
      offsetof(DataType, motors_enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SegwayStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const segway_rmp_ros2::msg::SegwayStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SegwayStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<segway_rmp_ros2::msg::SegwayStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SegwayStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const segway_rmp_ros2::msg::SegwayStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SegwayStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SegwayStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SegwayStatus__callbacks = {
  "segway_rmp_ros2::msg",
  "SegwayStatus",
  _SegwayStatus__cdr_serialize,
  _SegwayStatus__cdr_deserialize,
  _SegwayStatus__get_serialized_size,
  _SegwayStatus__max_serialized_size
};

static rosidl_message_type_support_t _SegwayStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SegwayStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace segway_rmp_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_rmp_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_rmp_ros2::msg::SegwayStatus>()
{
  return &segway_rmp_ros2::msg::typesupport_fastrtps_cpp::_SegwayStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_rmp_ros2, msg, SegwayStatus)() {
  return &segway_rmp_ros2::msg::typesupport_fastrtps_cpp::_SegwayStatus__handle;
}

#ifdef __cplusplus
}
#endif
