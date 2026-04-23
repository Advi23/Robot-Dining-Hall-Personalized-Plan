// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_rmp_ros2:msg/SegwayStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "segway_rmp_ros2/msg/detail/segway_status__struct.h"
#include "segway_rmp_ros2/msg/detail/segway_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool segway_rmp_ros2__msg__segway_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("segway_rmp_ros2.msg._segway_status.SegwayStatus", full_classname_dest, 47) == 0);
  }
  segway_rmp_ros2__msg__SegwayStatus * ros_message = _ros_message;
  {  // pitch_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pitch_angle = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pitch_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pitch_rate = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roll_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_wheel_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_wheel_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_frames
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_frames");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_frames = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_wheel_displacement
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel_displacement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_wheel_displacement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_wheel_displacement
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel_displacement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_wheel_displacement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // forward_displacement
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_displacement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forward_displacement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_displacement
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_displacement");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_displacement = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_motor_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_motor_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_motor_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_motor_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_motor_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_motor_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // operation_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operation_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operation_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gain_schedule
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain_schedule");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gain_schedule = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ui_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "ui_battery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ui_battery = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // powerbase_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "powerbase_battery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->powerbase_battery = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motors_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "motors_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motors_enabled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_rmp_ros2__msg__segway_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SegwayStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_rmp_ros2.msg._segway_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SegwayStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_rmp_ros2__msg__SegwayStatus * ros_message = (segway_rmp_ros2__msg__SegwayStatus *)raw_ros_message;
  {  // pitch_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pitch_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pitch_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_frames
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_frames);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_frames", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_wheel_displacement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_wheel_displacement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel_displacement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel_displacement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_wheel_displacement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel_displacement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_displacement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forward_displacement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_displacement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_displacement
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_displacement);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_displacement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_motor_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_motor_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_motor_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_motor_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_motor_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_motor_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operation_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->operation_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operation_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain_schedule
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gain_schedule);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain_schedule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ui_battery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ui_battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ui_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // powerbase_battery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->powerbase_battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "powerbase_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motors_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motors_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motors_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
