// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_rmp_ros2:msg/SegwayStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_H_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'segway'
#include "segway_rmp_ros2/msg/detail/segway_status__struct.h"

/// Struct defined in msg/SegwayStatusStamped in the package segway_rmp_ros2.
/**
  * SegwayStatusStamped.msg
  * This message contains a header and the Segway status information.
 */
typedef struct segway_rmp_ros2__msg__SegwayStatusStamped
{
  /// Header for timestamp, sequence number, and frame id
  std_msgs__msg__Header header;
  /// Segway Status information
  segway_rmp_ros2__msg__SegwayStatus segway;
} segway_rmp_ros2__msg__SegwayStatusStamped;

// Struct for a sequence of segway_rmp_ros2__msg__SegwayStatusStamped.
typedef struct segway_rmp_ros2__msg__SegwayStatusStamped__Sequence
{
  segway_rmp_ros2__msg__SegwayStatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_rmp_ros2__msg__SegwayStatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS_STAMPED__STRUCT_H_
