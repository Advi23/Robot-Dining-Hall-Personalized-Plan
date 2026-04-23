// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__FUNCTIONS_H_
#define SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "segway_rmp_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "segway_rmp_ros2/msg/detail/segway_status__struct.h"

/// Initialize msg/SegwayStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * segway_rmp_ros2__msg__SegwayStatus
 * )) before or use
 * segway_rmp_ros2__msg__SegwayStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__init(segway_rmp_ros2__msg__SegwayStatus * msg);

/// Finalize msg/SegwayStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
void
segway_rmp_ros2__msg__SegwayStatus__fini(segway_rmp_ros2__msg__SegwayStatus * msg);

/// Create msg/SegwayStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * segway_rmp_ros2__msg__SegwayStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
segway_rmp_ros2__msg__SegwayStatus *
segway_rmp_ros2__msg__SegwayStatus__create();

/// Destroy msg/SegwayStatus message.
/**
 * It calls
 * segway_rmp_ros2__msg__SegwayStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
void
segway_rmp_ros2__msg__SegwayStatus__destroy(segway_rmp_ros2__msg__SegwayStatus * msg);

/// Check for msg/SegwayStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__are_equal(const segway_rmp_ros2__msg__SegwayStatus * lhs, const segway_rmp_ros2__msg__SegwayStatus * rhs);

/// Copy a msg/SegwayStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__copy(
  const segway_rmp_ros2__msg__SegwayStatus * input,
  segway_rmp_ros2__msg__SegwayStatus * output);

/// Initialize array of msg/SegwayStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * segway_rmp_ros2__msg__SegwayStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__init(segway_rmp_ros2__msg__SegwayStatus__Sequence * array, size_t size);

/// Finalize array of msg/SegwayStatus messages.
/**
 * It calls
 * segway_rmp_ros2__msg__SegwayStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
void
segway_rmp_ros2__msg__SegwayStatus__Sequence__fini(segway_rmp_ros2__msg__SegwayStatus__Sequence * array);

/// Create array of msg/SegwayStatus messages.
/**
 * It allocates the memory for the array and calls
 * segway_rmp_ros2__msg__SegwayStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
segway_rmp_ros2__msg__SegwayStatus__Sequence *
segway_rmp_ros2__msg__SegwayStatus__Sequence__create(size_t size);

/// Destroy array of msg/SegwayStatus messages.
/**
 * It calls
 * segway_rmp_ros2__msg__SegwayStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
void
segway_rmp_ros2__msg__SegwayStatus__Sequence__destroy(segway_rmp_ros2__msg__SegwayStatus__Sequence * array);

/// Check for msg/SegwayStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__are_equal(const segway_rmp_ros2__msg__SegwayStatus__Sequence * lhs, const segway_rmp_ros2__msg__SegwayStatus__Sequence * rhs);

/// Copy an array of msg/SegwayStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_rmp_ros2
bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__copy(
  const segway_rmp_ros2__msg__SegwayStatus__Sequence * input,
  segway_rmp_ros2__msg__SegwayStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_RMP_ROS2__MSG__DETAIL__SEGWAY_STATUS__FUNCTIONS_H_
