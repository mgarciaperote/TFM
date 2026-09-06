// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_state.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__STRUCT_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sensor_timestamp'
// Member 'command_timestamp'
// Member 'state_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__agri_interfaces__msg__IrrigationState __attribute__((deprecated))
#else
# define DEPRECATED__agri_interfaces__msg__IrrigationState __declspec(deprecated)
#endif

namespace agri_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrrigationState_
{
  using Type = IrrigationState_<ContainerAllocator>;

  explicit IrrigationState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_timestamp(_init),
    command_timestamp(_init),
    state_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = "";
      this->active = false;
      this->state = "";
    }
  }

  explicit IrrigationState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_timestamp(_alloc, _init),
    command_timestamp(_alloc, _init),
    state_timestamp(_alloc, _init),
    actuator_id(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = "";
      this->active = false;
      this->state = "";
    }
  }

  // field types and members
  using _sensor_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _sensor_timestamp_type sensor_timestamp;
  using _command_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _command_timestamp_type command_timestamp;
  using _state_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _state_timestamp_type state_timestamp;
  using _actuator_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _actuator_id_type actuator_id;
  using _active_type =
    bool;
  _active_type active;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__sensor_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->sensor_timestamp = _arg;
    return *this;
  }
  Type & set__command_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->command_timestamp = _arg;
    return *this;
  }
  Type & set__state_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->state_timestamp = _arg;
    return *this;
  }
  Type & set__actuator_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->actuator_id = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agri_interfaces::msg::IrrigationState_<ContainerAllocator> *;
  using ConstRawPtr =
    const agri_interfaces::msg::IrrigationState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::IrrigationState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::IrrigationState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agri_interfaces__msg__IrrigationState
    std::shared_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agri_interfaces__msg__IrrigationState
    std::shared_ptr<agri_interfaces::msg::IrrigationState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrrigationState_ & other) const
  {
    if (this->sensor_timestamp != other.sensor_timestamp) {
      return false;
    }
    if (this->command_timestamp != other.command_timestamp) {
      return false;
    }
    if (this->state_timestamp != other.state_timestamp) {
      return false;
    }
    if (this->actuator_id != other.actuator_id) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrrigationState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrrigationState_

// alias to use template instance with default allocator
using IrrigationState =
  agri_interfaces::msg::IrrigationState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_STATE__STRUCT_HPP_
