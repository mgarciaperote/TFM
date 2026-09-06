// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

#ifndef AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "agri_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "agri_interfaces/msg/detail/soil_moisture__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace agri_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
cdr_serialize(
  const agri_interfaces::msg::SoilMoisture & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  agri_interfaces::msg::SoilMoisture & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
get_serialized_size(
  const agri_interfaces::msg::SoilMoisture & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
max_serialized_size_SoilMoisture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
cdr_serialize_key(
  const agri_interfaces::msg::SoilMoisture & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
get_serialized_size_key(
  const agri_interfaces::msg::SoilMoisture & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
max_serialized_size_key_SoilMoisture(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace agri_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agri_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agri_interfaces, msg, SoilMoisture)();

#ifdef __cplusplus
}
#endif

#endif  // AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
