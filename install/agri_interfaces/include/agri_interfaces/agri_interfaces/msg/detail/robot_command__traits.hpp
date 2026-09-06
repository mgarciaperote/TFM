// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/robot_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "agri_interfaces/msg/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace agri_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: linear_speed
  {
    out << "linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_speed, out);
    out << ", ";
  }

  // member: angular_speed
  {
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: linear_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_speed, out);
    out << "\n";
  }

  // member: angular_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, agri_interfaces::msg::RobotCommand>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).timestamp,
    std::forward<T>(msg).robot_id,
    std::forward<T>(msg).command,
    std::forward<T>(msg).linear_speed,
    std::forward<T>(msg).angular_speed);
}

}  // namespace msg

}  // namespace agri_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<agri_interfaces::msg::RobotCommand>()
{
  return "agri_interfaces::msg::RobotCommand";
}

template<>
constexpr const char * name<agri_interfaces::msg::RobotCommand>()
{
  return "agri_interfaces/msg/RobotCommand";
}

template<>
struct has_fixed_size<agri_interfaces::msg::RobotCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agri_interfaces::msg::RobotCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agri_interfaces::msg::RobotCommand>
  : std::true_type {};

template<>
struct MessageTraits<agri_interfaces::msg::RobotCommand>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "timestamp",
    "robot_id",
    "command",
    "linear_speed",
    "angular_speed",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
