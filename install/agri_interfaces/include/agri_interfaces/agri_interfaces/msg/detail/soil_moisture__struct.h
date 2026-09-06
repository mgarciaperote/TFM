// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/soil_moisture.h"


#ifndef AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_H_
#define AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_H_

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
// Member 'sensor_id'
// Member 'unit'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SoilMoisture in the package agri_interfaces.
typedef struct agri_interfaces__msg__SoilMoisture
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String sensor_id;
  float moisture;
  rosidl_runtime_c__String unit;
} agri_interfaces__msg__SoilMoisture;

// Struct for a sequence of agri_interfaces__msg__SoilMoisture.
typedef struct agri_interfaces__msg__SoilMoisture__Sequence
{
  agri_interfaces__msg__SoilMoisture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agri_interfaces__msg__SoilMoisture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_H_
