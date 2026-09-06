// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agri_interfaces:msg/IrrigationCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_command.h"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_H_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sensor_timestamp'
// Member 'command_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'actuator_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IrrigationCommand in the package agri_interfaces.
typedef struct agri_interfaces__msg__IrrigationCommand
{
  builtin_interfaces__msg__Time sensor_timestamp;
  builtin_interfaces__msg__Time command_timestamp;
  rosidl_runtime_c__String actuator_id;
  bool activate;
  float moisture_value;
} agri_interfaces__msg__IrrigationCommand;

// Struct for a sequence of agri_interfaces__msg__IrrigationCommand.
typedef struct agri_interfaces__msg__IrrigationCommand__Sequence
{
  agri_interfaces__msg__IrrigationCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agri_interfaces__msg__IrrigationCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_H_
