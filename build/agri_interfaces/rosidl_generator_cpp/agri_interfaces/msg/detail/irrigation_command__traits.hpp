// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agri_interfaces:msg/IrrigationCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__TRAITS_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "agri_interfaces/msg/detail/irrigation_command__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sensor_timestamp'
// Member 'command_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace agri_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrrigationCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_timestamp
  {
    out << "sensor_timestamp: ";
    to_flow_style_yaml(msg.sensor_timestamp, out);
    out << ", ";
  }

  // member: command_timestamp
  {
    out << "command_timestamp: ";
    to_flow_style_yaml(msg.command_timestamp, out);
    out << ", ";
  }

  // member: actuator_id
  {
    out << "actuator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_id, out);
    out << ", ";
  }

  // member: activate
  {
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << ", ";
  }

  // member: moisture_value
  {
    out << "moisture_value: ";
    rosidl_generator_traits::value_to_yaml(msg.moisture_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IrrigationCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_timestamp:\n";
    to_block_style_yaml(msg.sensor_timestamp, out, indentation + 2);
  }

  // member: command_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_timestamp:\n";
    to_block_style_yaml(msg.command_timestamp, out, indentation + 2);
  }

  // member: actuator_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_id, out);
    out << "\n";
  }

  // member: activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << "\n";
  }

  // member: moisture_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moisture_value: ";
    rosidl_generator_traits::value_to_yaml(msg.moisture_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrrigationCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, agri_interfaces::msg::IrrigationCommand>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).sensor_timestamp,
    std::forward<T>(msg).command_timestamp,
    std::forward<T>(msg).actuator_id,
    std::forward<T>(msg).activate,
    std::forward<T>(msg).moisture_value);
}

}  // namespace msg

}  // namespace agri_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<agri_interfaces::msg::IrrigationCommand>()
{
  return "agri_interfaces::msg::IrrigationCommand";
}

template<>
constexpr const char * name<agri_interfaces::msg::IrrigationCommand>()
{
  return "agri_interfaces/msg/IrrigationCommand";
}

template<>
struct has_fixed_size<agri_interfaces::msg::IrrigationCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agri_interfaces::msg::IrrigationCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agri_interfaces::msg::IrrigationCommand>
  : std::true_type {};

template<>
struct MessageTraits<agri_interfaces::msg::IrrigationCommand>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "sensor_timestamp",
    "command_timestamp",
    "actuator_id",
    "activate",
    "moisture_value",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__TRAITS_HPP_
