// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice
#include "segway_rmp_ros2/msg/detail/segway_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_rmp_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_rmp_ros2/msg/detail/segway_status__struct.h"
#include "segway_rmp_ros2/msg/detail/segway_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SegwayStatus__ros_msg_type = segway_rmp_ros2__msg__SegwayStatus;

static bool _SegwayStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SegwayStatus__ros_msg_type * ros_message = static_cast<const _SegwayStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_angle
  {
    cdr << ros_message->pitch_angle;
  }

  // Field name: pitch_rate
  {
    cdr << ros_message->pitch_rate;
  }

  // Field name: roll_angle
  {
    cdr << ros_message->roll_angle;
  }

  // Field name: roll_rate
  {
    cdr << ros_message->roll_rate;
  }

  // Field name: left_wheel_velocity
  {
    cdr << ros_message->left_wheel_velocity;
  }

  // Field name: right_wheel_velocity
  {
    cdr << ros_message->right_wheel_velocity;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: servo_frames
  {
    cdr << ros_message->servo_frames;
  }

  // Field name: left_wheel_displacement
  {
    cdr << ros_message->left_wheel_displacement;
  }

  // Field name: right_wheel_displacement
  {
    cdr << ros_message->right_wheel_displacement;
  }

  // Field name: forward_displacement
  {
    cdr << ros_message->forward_displacement;
  }

  // Field name: yaw_displacement
  {
    cdr << ros_message->yaw_displacement;
  }

  // Field name: left_motor_torque
  {
    cdr << ros_message->left_motor_torque;
  }

  // Field name: right_motor_torque
  {
    cdr << ros_message->right_motor_torque;
  }

  // Field name: operation_mode
  {
    cdr << ros_message->operation_mode;
  }

  // Field name: gain_schedule
  {
    cdr << ros_message->gain_schedule;
  }

  // Field name: ui_battery
  {
    cdr << ros_message->ui_battery;
  }

  // Field name: powerbase_battery
  {
    cdr << ros_message->powerbase_battery;
  }

  // Field name: motors_enabled
  {
    cdr << (ros_message->motors_enabled ? true : false);
  }

  return true;
}

static bool _SegwayStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SegwayStatus__ros_msg_type * ros_message = static_cast<_SegwayStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: pitch_angle
  {
    cdr >> ros_message->pitch_angle;
  }

  // Field name: pitch_rate
  {
    cdr >> ros_message->pitch_rate;
  }

  // Field name: roll_angle
  {
    cdr >> ros_message->roll_angle;
  }

  // Field name: roll_rate
  {
    cdr >> ros_message->roll_rate;
  }

  // Field name: left_wheel_velocity
  {
    cdr >> ros_message->left_wheel_velocity;
  }

  // Field name: right_wheel_velocity
  {
    cdr >> ros_message->right_wheel_velocity;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: servo_frames
  {
    cdr >> ros_message->servo_frames;
  }

  // Field name: left_wheel_displacement
  {
    cdr >> ros_message->left_wheel_displacement;
  }

  // Field name: right_wheel_displacement
  {
    cdr >> ros_message->right_wheel_displacement;
  }

  // Field name: forward_displacement
  {
    cdr >> ros_message->forward_displacement;
  }

  // Field name: yaw_displacement
  {
    cdr >> ros_message->yaw_displacement;
  }

  // Field name: left_motor_torque
  {
    cdr >> ros_message->left_motor_torque;
  }

  // Field name: right_motor_torque
  {
    cdr >> ros_message->right_motor_torque;
  }

  // Field name: operation_mode
  {
    cdr >> ros_message->operation_mode;
  }

  // Field name: gain_schedule
  {
    cdr >> ros_message->gain_schedule;
  }

  // Field name: ui_battery
  {
    cdr >> ros_message->ui_battery;
  }

  // Field name: powerbase_battery
  {
    cdr >> ros_message->powerbase_battery;
  }

  // Field name: motors_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motors_enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_rmp_ros2
size_t get_serialized_size_segway_rmp_ros2__msg__SegwayStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SegwayStatus__ros_msg_type * ros_message = static_cast<const _SegwayStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pitch_angle
  {
    size_t item_size = sizeof(ros_message->pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_rate
  {
    size_t item_size = sizeof(ros_message->pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_angle
  {
    size_t item_size = sizeof(ros_message->roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_rate
  {
    size_t item_size = sizeof(ros_message->roll_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->left_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_velocity
  {
    size_t item_size = sizeof(ros_message->right_wheel_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_frames
  {
    size_t item_size = sizeof(ros_message->servo_frames);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_displacement
  {
    size_t item_size = sizeof(ros_message->left_wheel_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_displacement
  {
    size_t item_size = sizeof(ros_message->right_wheel_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forward_displacement
  {
    size_t item_size = sizeof(ros_message->forward_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_displacement
  {
    size_t item_size = sizeof(ros_message->yaw_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_motor_torque
  {
    size_t item_size = sizeof(ros_message->left_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_motor_torque
  {
    size_t item_size = sizeof(ros_message->right_motor_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operation_mode
  {
    size_t item_size = sizeof(ros_message->operation_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gain_schedule
  {
    size_t item_size = sizeof(ros_message->gain_schedule);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ui_battery
  {
    size_t item_size = sizeof(ros_message->ui_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name powerbase_battery
  {
    size_t item_size = sizeof(ros_message->powerbase_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motors_enabled
  {
    size_t item_size = sizeof(ros_message->motors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SegwayStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_rmp_ros2__msg__SegwayStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_rmp_ros2
size_t max_serialized_size_segway_rmp_ros2__msg__SegwayStatus(
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

  // member: pitch_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pitch_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roll_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_wheel_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_frames
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_wheel_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_wheel_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: forward_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_displacement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_motor_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: operation_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gain_schedule
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ui_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: powerbase_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motors_enabled
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
    using DataType = segway_rmp_ros2__msg__SegwayStatus;
    is_plain =
      (
      offsetof(DataType, motors_enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SegwayStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_rmp_ros2__msg__SegwayStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SegwayStatus = {
  "segway_rmp_ros2::msg",
  "SegwayStatus",
  _SegwayStatus__cdr_serialize,
  _SegwayStatus__cdr_deserialize,
  _SegwayStatus__get_serialized_size,
  _SegwayStatus__max_serialized_size
};

static rosidl_message_type_support_t _SegwayStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SegwayStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_rmp_ros2, msg, SegwayStatus)() {
  return &_SegwayStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
