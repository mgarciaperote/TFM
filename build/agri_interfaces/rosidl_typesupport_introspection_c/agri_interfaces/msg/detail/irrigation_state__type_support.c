// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "agri_interfaces/msg/detail/irrigation_state__rosidl_typesupport_introspection_c.h"
#include "agri_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "agri_interfaces/msg/detail/irrigation_state__functions.h"
#include "agri_interfaces/msg/detail/irrigation_state__struct.h"


// Include directives for member types
// Member `sensor_timestamp`
// Member `command_timestamp`
// Member `state_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `sensor_timestamp`
// Member `command_timestamp`
// Member `state_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `actuator_id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  agri_interfaces__msg__IrrigationState__init(message_memory);
}

void agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_fini_function(void * message_memory)
{
  agri_interfaces__msg__IrrigationState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_member_array[6] = {
  {
    "sensor_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, sensor_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "command_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, command_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "state_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, state_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "actuator_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, actuator_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces__msg__IrrigationState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_members = {
  "agri_interfaces__msg",  // message namespace
  "IrrigationState",  // message name
  6,  // number of fields
  sizeof(agri_interfaces__msg__IrrigationState),
  false,  // has_any_key_member_
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_member_array,  // message members
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_init_function,  // function to initialize message memory (memory has to be allocated)
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_type_support_handle = {
  0,
  &agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_members,
  get_message_typesupport_handle_function,
  &agri_interfaces__msg__IrrigationState__get_type_hash,
  &agri_interfaces__msg__IrrigationState__get_type_description,
  &agri_interfaces__msg__IrrigationState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agri_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agri_interfaces, msg, IrrigationState)() {
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_type_support_handle.typesupport_identifier) {
    agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &agri_interfaces__msg__IrrigationState__rosidl_typesupport_introspection_c__IrrigationState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
