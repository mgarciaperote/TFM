// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_state.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__BUILDER_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "agri_interfaces/msg/detail/irrigation_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace agri_interfaces
{

namespace msg
{

namespace builder
{

class Init_IrrigationState_state
{
public:
  explicit Init_IrrigationState_state(::agri_interfaces::msg::IrrigationState & msg)
  : msg_(msg)
  {}
  ::agri_interfaces::msg::IrrigationState state(::agri_interfaces::msg::IrrigationState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

class Init_IrrigationState_active
{
public:
  explicit Init_IrrigationState_active(::agri_interfaces::msg::IrrigationState & msg)
  : msg_(msg)
  {}
  Init_IrrigationState_state active(::agri_interfaces::msg::IrrigationState::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_IrrigationState_state(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

class Init_IrrigationState_actuator_id
{
public:
  explicit Init_IrrigationState_actuator_id(::agri_interfaces::msg::IrrigationState & msg)
  : msg_(msg)
  {}
  Init_IrrigationState_active actuator_id(::agri_interfaces::msg::IrrigationState::_actuator_id_type arg)
  {
    msg_.actuator_id = std::move(arg);
    return Init_IrrigationState_active(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

class Init_IrrigationState_state_timestamp
{
public:
  explicit Init_IrrigationState_state_timestamp(::agri_interfaces::msg::IrrigationState & msg)
  : msg_(msg)
  {}
  Init_IrrigationState_actuator_id state_timestamp(::agri_interfaces::msg::IrrigationState::_state_timestamp_type arg)
  {
    msg_.state_timestamp = std::move(arg);
    return Init_IrrigationState_actuator_id(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

class Init_IrrigationState_command_timestamp
{
public:
  explicit Init_IrrigationState_command_timestamp(::agri_interfaces::msg::IrrigationState & msg)
  : msg_(msg)
  {}
  Init_IrrigationState_state_timestamp command_timestamp(::agri_interfaces::msg::IrrigationState::_command_timestamp_type arg)
  {
    msg_.command_timestamp = std::move(arg);
    return Init_IrrigationState_state_timestamp(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

class Init_IrrigationState_sensor_timestamp
{
public:
  Init_IrrigationState_sensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrrigationState_command_timestamp sensor_timestamp(::agri_interfaces::msg::IrrigationState::_sensor_timestamp_type arg)
  {
    msg_.sensor_timestamp = std::move(arg);
    return Init_IrrigationState_command_timestamp(msg_);
  }

private:
  ::agri_interfaces::msg::IrrigationState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::agri_interfaces::msg::IrrigationState>()
{
  return agri_interfaces::msg::builder::Init_IrrigationState_sensor_timestamp();
}

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__BUILDER_HPP_
