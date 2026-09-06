// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agri_interfaces:msg/IrrigationCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__BUILDER_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agri_interfaces/msg/detail/irrigation_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agri_interfaces
{

namespace msg
{

namespace builder
{

class Init_IrrigationCommand_moisture_value
{
public:
  explicit Init_IrrigationCommand_moisture_value(::agri_interfaces::msg::IrrigationCommand & msg)
  : msg_(msg)
  {}
  ::agri_interfaces::msg::IrrigationCommand moisture_value(::agri_interfaces::msg::IrrigationCommand::_moisture_value_type arg)
  {
    msg_.moisture_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationCommand msg_;
};

class Init_IrrigationCommand_activate
{
public:
  explicit Init_IrrigationCommand_activate(::agri_interfaces::msg::IrrigationCommand & msg)
  : msg_(msg)
  {}
  Init_IrrigationCommand_moisture_value activate(::agri_interfaces::msg::IrrigationCommand::_activate_type arg)
  {
    msg_.activate = std::move(arg);
    return Init_IrrigationCommand_moisture_value(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationCommand msg_;
};

class Init_IrrigationCommand_actuator_id
{
public:
  explicit Init_IrrigationCommand_actuator_id(::agri_interfaces::msg::IrrigationCommand & msg)
  : msg_(msg)
  {}
  Init_IrrigationCommand_activate actuator_id(::agri_interfaces::msg::IrrigationCommand::_actuator_id_type arg)
  {
    msg_.actuator_id = std::move(arg);
    return Init_IrrigationCommand_activate(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationCommand msg_;
};

class Init_IrrigationCommand_command_timestamp
{
public:
  explicit Init_IrrigationCommand_command_timestamp(::agri_interfaces::msg::IrrigationCommand & msg)
  : msg_(msg)
  {}
  Init_IrrigationCommand_actuator_id command_timestamp(::agri_interfaces::msg::IrrigationCommand::_command_timestamp_type arg)
  {
    msg_.command_timestamp = std::move(arg);
    return Init_IrrigationCommand_actuator_id(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationCommand msg_;
};

class Init_IrrigationCommand_sensor_timestamp
{
public:
  Init_IrrigationCommand_sensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrrigationCommand_command_timestamp sensor_timestamp(::agri_interfaces::msg::IrrigationCommand::_sensor_timestamp_type arg)
  {
    msg_.sensor_timestamp = std::move(arg);
    return Init_IrrigationCommand_command_timestamp(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::agri_interfaces::msg::IrrigationCommand>()
{
  return agri_interfaces::msg::builder::Init_IrrigationCommand_sensor_timestamp();
}

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__BUILDER_HPP_
