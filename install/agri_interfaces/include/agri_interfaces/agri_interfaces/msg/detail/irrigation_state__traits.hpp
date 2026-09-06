// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_state.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__TRAITS_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "agri_interfaces/msg/detail/irrigation_state__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sensor_timestamp'
// Member 'command_timestamp'
// Member 'state_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace agri_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrrigationState & msg,
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

  // member: state_timestamp
  {
    out << "state_timestamp: ";
    to_flow_style_yaml(msg.state_timestamp, out);
    out << ", ";
  }

  // member: actuator_id
  {
    out << "actuator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_id, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IrrigationState & msg,
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

  // member: state_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_timestamp:\n";
    to_block_style_yaml(msg.state_timestamp, out, indentation + 2);
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

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrrigationState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, agri_interfaces::msg::IrrigationState>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).sensor_timestamp,
    std::forward<T>(msg).command_timestamp,
    std::forward<T>(msg).state_timestamp,
    std::forward<T>(msg).actuator_id,
    std::forward<T>(msg).active,
    std::forward<T>(msg).state);
}

}  // namespace msg

}  // namespace agri_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<agri_interfaces::msg::IrrigationState>()
{
  return "agri_interfaces::msg::IrrigationState";
}

template<>
constexpr const char * name<agri_interfaces::msg::IrrigationState>()
{
  return "agri_interfaces/msg/IrrigationState";
}

template<>
struct has_fixed_size<agri_interfaces::msg::IrrigationState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agri_interfaces::msg::IrrigationState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agri_interfaces::msg::IrrigationState>
  : std::true_type {};

template<>
struct MessageTraits<agri_interfaces::msg::IrrigationState>
{
  static constexpr std::size_t member_count = 6;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "sensor_timestamp",
    "command_timestamp",
    "state_timestamp",
    "actuator_id",
    "active",
    "state",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__TRAITS_HPP_
