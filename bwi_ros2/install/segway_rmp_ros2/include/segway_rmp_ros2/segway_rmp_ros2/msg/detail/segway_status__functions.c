// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice
#include "segway_rmp_ros2/msg/detail/segway_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_rmp_ros2__msg__SegwayStatus__init(segway_rmp_ros2__msg__SegwayStatus * msg)
{
  if (!msg) {
    return false;
  }
  // pitch_angle
  // pitch_rate
  // roll_angle
  // roll_rate
  // left_wheel_velocity
  // right_wheel_velocity
  // yaw_rate
  // servo_frames
  // left_wheel_displacement
  // right_wheel_displacement
  // forward_displacement
  // yaw_displacement
  // left_motor_torque
  // right_motor_torque
  // operation_mode
  // gain_schedule
  // ui_battery
  // powerbase_battery
  // motors_enabled
  return true;
}

void
segway_rmp_ros2__msg__SegwayStatus__fini(segway_rmp_ros2__msg__SegwayStatus * msg)
{
  if (!msg) {
    return;
  }
  // pitch_angle
  // pitch_rate
  // roll_angle
  // roll_rate
  // left_wheel_velocity
  // right_wheel_velocity
  // yaw_rate
  // servo_frames
  // left_wheel_displacement
  // right_wheel_displacement
  // forward_displacement
  // yaw_displacement
  // left_motor_torque
  // right_motor_torque
  // operation_mode
  // gain_schedule
  // ui_battery
  // powerbase_battery
  // motors_enabled
}

bool
segway_rmp_ros2__msg__SegwayStatus__are_equal(const segway_rmp_ros2__msg__SegwayStatus * lhs, const segway_rmp_ros2__msg__SegwayStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pitch_angle
  if (lhs->pitch_angle != rhs->pitch_angle) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // roll_angle
  if (lhs->roll_angle != rhs->roll_angle) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  // left_wheel_velocity
  if (lhs->left_wheel_velocity != rhs->left_wheel_velocity) {
    return false;
  }
  // right_wheel_velocity
  if (lhs->right_wheel_velocity != rhs->right_wheel_velocity) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // servo_frames
  if (lhs->servo_frames != rhs->servo_frames) {
    return false;
  }
  // left_wheel_displacement
  if (lhs->left_wheel_displacement != rhs->left_wheel_displacement) {
    return false;
  }
  // right_wheel_displacement
  if (lhs->right_wheel_displacement != rhs->right_wheel_displacement) {
    return false;
  }
  // forward_displacement
  if (lhs->forward_displacement != rhs->forward_displacement) {
    return false;
  }
  // yaw_displacement
  if (lhs->yaw_displacement != rhs->yaw_displacement) {
    return false;
  }
  // left_motor_torque
  if (lhs->left_motor_torque != rhs->left_motor_torque) {
    return false;
  }
  // right_motor_torque
  if (lhs->right_motor_torque != rhs->right_motor_torque) {
    return false;
  }
  // operation_mode
  if (lhs->operation_mode != rhs->operation_mode) {
    return false;
  }
  // gain_schedule
  if (lhs->gain_schedule != rhs->gain_schedule) {
    return false;
  }
  // ui_battery
  if (lhs->ui_battery != rhs->ui_battery) {
    return false;
  }
  // powerbase_battery
  if (lhs->powerbase_battery != rhs->powerbase_battery) {
    return false;
  }
  // motors_enabled
  if (lhs->motors_enabled != rhs->motors_enabled) {
    return false;
  }
  return true;
}

bool
segway_rmp_ros2__msg__SegwayStatus__copy(
  const segway_rmp_ros2__msg__SegwayStatus * input,
  segway_rmp_ros2__msg__SegwayStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // pitch_angle
  output->pitch_angle = input->pitch_angle;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // roll_angle
  output->roll_angle = input->roll_angle;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // left_wheel_velocity
  output->left_wheel_velocity = input->left_wheel_velocity;
  // right_wheel_velocity
  output->right_wheel_velocity = input->right_wheel_velocity;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // servo_frames
  output->servo_frames = input->servo_frames;
  // left_wheel_displacement
  output->left_wheel_displacement = input->left_wheel_displacement;
  // right_wheel_displacement
  output->right_wheel_displacement = input->right_wheel_displacement;
  // forward_displacement
  output->forward_displacement = input->forward_displacement;
  // yaw_displacement
  output->yaw_displacement = input->yaw_displacement;
  // left_motor_torque
  output->left_motor_torque = input->left_motor_torque;
  // right_motor_torque
  output->right_motor_torque = input->right_motor_torque;
  // operation_mode
  output->operation_mode = input->operation_mode;
  // gain_schedule
  output->gain_schedule = input->gain_schedule;
  // ui_battery
  output->ui_battery = input->ui_battery;
  // powerbase_battery
  output->powerbase_battery = input->powerbase_battery;
  // motors_enabled
  output->motors_enabled = input->motors_enabled;
  return true;
}

segway_rmp_ros2__msg__SegwayStatus *
segway_rmp_ros2__msg__SegwayStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_rmp_ros2__msg__SegwayStatus * msg = (segway_rmp_ros2__msg__SegwayStatus *)allocator.allocate(sizeof(segway_rmp_ros2__msg__SegwayStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_rmp_ros2__msg__SegwayStatus));
  bool success = segway_rmp_ros2__msg__SegwayStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_rmp_ros2__msg__SegwayStatus__destroy(segway_rmp_ros2__msg__SegwayStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_rmp_ros2__msg__SegwayStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__init(segway_rmp_ros2__msg__SegwayStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_rmp_ros2__msg__SegwayStatus * data = NULL;

  if (size) {
    data = (segway_rmp_ros2__msg__SegwayStatus *)allocator.zero_allocate(size, sizeof(segway_rmp_ros2__msg__SegwayStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_rmp_ros2__msg__SegwayStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_rmp_ros2__msg__SegwayStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
segway_rmp_ros2__msg__SegwayStatus__Sequence__fini(segway_rmp_ros2__msg__SegwayStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      segway_rmp_ros2__msg__SegwayStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

segway_rmp_ros2__msg__SegwayStatus__Sequence *
segway_rmp_ros2__msg__SegwayStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_rmp_ros2__msg__SegwayStatus__Sequence * array = (segway_rmp_ros2__msg__SegwayStatus__Sequence *)allocator.allocate(sizeof(segway_rmp_ros2__msg__SegwayStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_rmp_ros2__msg__SegwayStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_rmp_ros2__msg__SegwayStatus__Sequence__destroy(segway_rmp_ros2__msg__SegwayStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_rmp_ros2__msg__SegwayStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__are_equal(const segway_rmp_ros2__msg__SegwayStatus__Sequence * lhs, const segway_rmp_ros2__msg__SegwayStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_rmp_ros2__msg__SegwayStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_rmp_ros2__msg__SegwayStatus__Sequence__copy(
  const segway_rmp_ros2__msg__SegwayStatus__Sequence * input,
  segway_rmp_ros2__msg__SegwayStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_rmp_ros2__msg__SegwayStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_rmp_ros2__msg__SegwayStatus * data =
      (segway_rmp_ros2__msg__SegwayStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_rmp_ros2__msg__SegwayStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_rmp_ros2__msg__SegwayStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_rmp_ros2__msg__SegwayStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
