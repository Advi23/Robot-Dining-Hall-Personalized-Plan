// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_rmp_ros2:msg/SegwayStatusStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_rmp_ros2/msg/detail/segway_status_stamped__rosidl_typesupport_introspection_c.h"
#include "segway_rmp_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_rmp_ros2/msg/detail/segway_status_stamped__functions.h"
#include "segway_rmp_ros2/msg/detail/segway_status_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `segway`
#include "segway_rmp_ros2/msg/segway_status.h"
// Member `segway`
#include "segway_rmp_ros2/msg/detail/segway_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_rmp_ros2__msg__SegwayStatusStamped__init(message_memory);
}

void segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_fini_function(void * message_memory)
{
  segway_rmp_ros2__msg__SegwayStatusStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_rmp_ros2__msg__SegwayStatusStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segway",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_rmp_ros2__msg__SegwayStatusStamped, segway),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_members = {
  "segway_rmp_ros2__msg",  // message namespace
  "SegwayStatusStamped",  // message name
  2,  // number of fields
  sizeof(segway_rmp_ros2__msg__SegwayStatusStamped),
  segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_member_array,  // message members
  segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_type_support_handle = {
  0,
  &segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_rmp_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_rmp_ros2, msg, SegwayStatusStamped)() {
  segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_rmp_ros2, msg, SegwayStatus)();
  if (!segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_type_support_handle.typesupport_identifier) {
    segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_rmp_ros2__msg__SegwayStatusStamped__rosidl_typesupport_introspection_c__SegwayStatusStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
