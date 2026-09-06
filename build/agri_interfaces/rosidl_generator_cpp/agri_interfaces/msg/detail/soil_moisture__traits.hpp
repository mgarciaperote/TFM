// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/soil_moisture.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__TRAITS_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "agri_interfaces/msg/detail/soil_moisture__struct.hpp"
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
  const SoilMoisture & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: moisture
  {
    out << "moisture: ";
    rosidl_generator_traits::value_to_yaml(msg.moisture, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SoilMoisture & msg,
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

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: moisture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moisture: ";
    rosidl_generator_traits::value_to_yaml(msg.moisture, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SoilMoisture & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, agri_interfaces::msg::SoilMoisture>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).timestamp,
    std::forward<T>(msg).sensor_id,
    std::forward<T>(msg).moisture,
    std::forward<T>(msg).unit);
}

}  // namespace msg

}  // namespace agri_interfaces

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<agri_interfaces::msg::SoilMoisture>()
{
  return "agri_interfaces::msg::SoilMoisture";
}

template<>
constexpr const char * name<agri_interfaces::msg::SoilMoisture>()
{
  return "agri_interfaces/msg/SoilMoisture";
}

template<>
struct has_fixed_size<agri_interfaces::msg::SoilMoisture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<agri_interfaces::msg::SoilMoisture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<agri_interfaces::msg::SoilMoisture>
  : std::true_type {};

template<>
struct MessageTraits<agri_interfaces::msg::SoilMoisture>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "timestamp",
    "sensor_id",
    "moisture",
    "unit",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__TRAITS_HPP_
