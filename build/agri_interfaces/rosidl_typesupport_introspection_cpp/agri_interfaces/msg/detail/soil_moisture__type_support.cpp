// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "agri_interfaces/msg/detail/soil_moisture__functions.h"
#include "agri_interfaces/msg/detail/soil_moisture__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agri_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SoilMoisture_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agri_interfaces::msg::SoilMoisture(_init);
}

void SoilMoisture_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agri_interfaces::msg::SoilMoisture *>(message_memory);
  typed_message->~SoilMoisture();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SoilMoisture_message_member_array[4] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces::msg::SoilMoisture, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "sensor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces::msg::SoilMoisture, sensor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "moisture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces::msg::SoilMoisture, moisture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agri_interfaces::msg::SoilMoisture, unit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SoilMoisture_message_members = {
  "agri_interfaces::msg",  // message namespace
  "SoilMoisture",  // message name
  4,  // number of fields
  sizeof(agri_interfaces::msg::SoilMoisture),
  false,  // has_any_key_member_
  SoilMoisture_message_member_array,  // message members
  SoilMoisture_init_function,  // function to initialize message memory (memory has to be allocated)
  SoilMoisture_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SoilMoisture_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SoilMoisture_message_members,
  get_message_typesupport_handle_function,
  &agri_interfaces__msg__SoilMoisture__get_type_hash,
  &agri_interfaces__msg__SoilMoisture__get_type_description,
  &agri_interfaces__msg__SoilMoisture__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace agri_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agri_interfaces::msg::SoilMoisture>()
{
  return &::agri_interfaces::msg::rosidl_typesupport_introspection_cpp::SoilMoisture_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agri_interfaces, msg, SoilMoisture)() {
  return &::agri_interfaces::msg::rosidl_typesupport_introspection_cpp::SoilMoisture_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
