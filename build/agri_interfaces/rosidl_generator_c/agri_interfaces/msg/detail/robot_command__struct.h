// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/robot_command.h"


#ifndef AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'robot_id'
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotCommand in the package agri_interfaces.
typedef struct agri_interfaces__msg__RobotCommand
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String command;
  float linear_speed;
  float angular_speed;
} agri_interfaces__msg__RobotCommand;

// Struct for a sequence of agri_interfaces__msg__RobotCommand.
typedef struct agri_interfaces__msg__RobotCommand__Sequence
{
  agri_interfaces__msg__RobotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agri_interfaces__msg__RobotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
