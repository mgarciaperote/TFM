// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/soil_moisture.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__BUILDER_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agri_interfaces/msg/detail/soil_moisture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agri_interfaces
{

namespace msg
{

namespace builder
{

class Init_SoilMoisture_unit
{
public:
  explicit Init_SoilMoisture_unit(::agri_interfaces::msg::SoilMoisture & msg)
  : msg_(msg)
  {}
  ::agri_interfaces::msg::SoilMoisture unit(::agri_interfaces::msg::SoilMoisture::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agri_interfaces::msg::SoilMoisture msg_;
};

class Init_SoilMoisture_moisture
{
public:
  explicit Init_SoilMoisture_moisture(::agri_interfaces::msg::SoilMoisture & msg)
  : msg_(msg)
  {}
  Init_SoilMoisture_unit moisture(::agri_interfaces::msg::SoilMoisture::_moisture_type arg)
  {
    msg_.moisture = std::move(arg);
    return Init_SoilMoisture_unit(msg_);
  }

private:
  ::agri_interfaces::msg::SoilMoisture msg_;
};

class Init_SoilMoisture_sensor_id
{
public:
  explicit Init_SoilMoisture_sensor_id(::agri_interfaces::msg::SoilMoisture & msg)
  : msg_(msg)
  {}
  Init_SoilMoisture_moisture sensor_id(::agri_interfaces::msg::SoilMoisture::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SoilMoisture_moisture(msg_);
  }

private:
  ::agri_interfaces::msg::SoilMoisture msg_;
};

class Init_SoilMoisture_timestamp
{
public:
  Init_SoilMoisture_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoilMoisture_sensor_id timestamp(::agri_interfaces::msg::SoilMoisture::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SoilMoisture_sensor_id(msg_);
  }

private:
  ::agri_interfaces::msg::SoilMoisture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::agri_interfaces::msg::SoilMoisture>()
{
  return agri_interfaces::msg::builder::Init_SoilMoisture_timestamp();
}

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__BUILDER_HPP_
