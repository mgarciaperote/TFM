// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice
#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "agri_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "agri_interfaces/msg/detail/irrigation_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
bool cdr_serialize_agri_interfaces__msg__IrrigationState(
  const agri_interfaces__msg__IrrigationState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
bool cdr_deserialize_agri_interfaces__msg__IrrigationState(
  eprosima::fastcdr::Cdr &,
  agri_interfaces__msg__IrrigationState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
size_t get_serialized_size_agri_interfaces__msg__IrrigationState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
size_t max_serialized_size_agri_interfaces__msg__IrrigationState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
bool cdr_serialize_key_agri_interfaces__msg__IrrigationState(
  const agri_interfaces__msg__IrrigationState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
size_t get_serialized_size_key_agri_interfaces__msg__IrrigationState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
size_t max_serialized_size_key_agri_interfaces__msg__IrrigationState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agri_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, agri_interfaces, msg, IrrigationState)();

#ifdef __cplusplus
}
#endif

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
