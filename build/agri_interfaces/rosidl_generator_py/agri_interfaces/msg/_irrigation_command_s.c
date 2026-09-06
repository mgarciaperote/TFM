// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from agri_interfaces:msg/IrrigationCommand.idl
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
#include "agri_interfaces/msg/detail/irrigation_command__struct.h"
#include "agri_interfaces/msg/detail/irrigation_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool agri_interfaces__msg__irrigation_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("agri_interfaces.msg._irrigation_command", (char *)PyUnicode_1BYTE_DATA(module_attr), 39) == 0);
    assert(strncmp("IrrigationCommand", (char *)PyUnicode_1BYTE_DATA(name_attr), 17) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  agri_interfaces__msg__IrrigationCommand * ros_message = _ros_message;
  {  // sensor_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->sensor_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // command_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->command_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // actuator_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->actuator_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // activate
    PyObject * field = PyObject_GetAttrString(_pymsg, "activate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->activate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // moisture_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "moisture_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->moisture_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * agri_interfaces__msg__irrigation_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IrrigationCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("agri_interfaces.msg._irrigation_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IrrigationCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  agri_interfaces__msg__IrrigationCommand * ros_message = (agri_interfaces__msg__IrrigationCommand *)raw_ros_message;
  {  // sensor_timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->sensor_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->command_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->actuator_id.data,
      strlen(ros_message->actuator_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->activate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "activate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moisture_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->moisture_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moisture_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
