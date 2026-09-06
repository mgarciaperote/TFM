// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/robot_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agri_interfaces/msg/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agri_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotCommand_angular_speed
{
public:
  explicit Init_RobotCommand_angular_speed(::agri_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  ::agri_interfaces::msg::RobotCommand angular_speed(::agri_interfaces::msg::RobotCommand::_angular_speed_type arg)
  {
    msg_.angular_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agri_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_linear_speed
{
public:
  explicit Init_RobotCommand_linear_speed(::agri_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_angular_speed linear_speed(::agri_interfaces::msg::RobotCommand::_linear_speed_type arg)
  {
    msg_.linear_speed = std::move(arg);
    return Init_RobotCommand_angular_speed(msg_);
  }

private:
  ::agri_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_command
{
public:
  explicit Init_RobotCommand_command(::agri_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_linear_speed command(::agri_interfaces::msg::RobotCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RobotCommand_linear_speed(msg_);
  }

private:
  ::agri_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_robot_id
{
public:
  explicit Init_RobotCommand_robot_id(::agri_interfaces::msg::RobotCommand & msg)
  : msg_(msg)
  {}
  Init_RobotCommand_command robot_id(::agri_interfaces::msg::RobotCommand::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotCommand_command(msg_);
  }

private:
  ::agri_interfaces::msg::RobotCommand msg_;
};

class Init_RobotCommand_timestamp
{
public:
  Init_RobotCommand_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommand_robot_id timestamp(::agri_interfaces::msg::RobotCommand::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RobotCommand_robot_id(msg_);
  }

private:
  ::agri_interfaces::msg::RobotCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::agri_interfaces::msg::RobotCommand>()
{
  return agri_interfaces::msg::builder::Init_RobotCommand_timestamp();
}

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__BUILDER_HPP_
