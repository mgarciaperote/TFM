// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agri_interfaces:msg/IrrigationCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/irrigation_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_HPP_

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
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__agri_interfaces__msg__IrrigationCommand __attribute__((deprecated))
#else
# define DEPRECATED__agri_interfaces__msg__IrrigationCommand __declspec(deprecated)
#endif

namespace agri_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrrigationCommand_
{
  using Type = IrrigationCommand_<ContainerAllocator>;

  explicit IrrigationCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_timestamp(_init),
    command_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = "";
      this->activate = false;
      this->moisture_value = 0.0f;
    }
  }

  explicit IrrigationCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_timestamp(_alloc, _init),
    command_timestamp(_alloc, _init),
    actuator_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_id = "";
      this->activate = false;
      this->moisture_value = 0.0f;
    }
  }

  // field types and members
  using _sensor_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _sensor_timestamp_type sensor_timestamp;
  using _command_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _command_timestamp_type command_timestamp;
  using _actuator_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _actuator_id_type actuator_id;
  using _activate_type =
    bool;
  _activate_type activate;
  using _moisture_value_type =
    float;
  _moisture_value_type moisture_value;

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
  Type & set__actuator_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->actuator_id = _arg;
    return *this;
  }
  Type & set__activate(
    const bool & _arg)
  {
    this->activate = _arg;
    return *this;
  }
  Type & set__moisture_value(
    const float & _arg)
  {
    this->moisture_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agri_interfaces__msg__IrrigationCommand
    std::shared_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agri_interfaces__msg__IrrigationCommand
    std::shared_ptr<agri_interfaces::msg::IrrigationCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrrigationCommand_ & other) const
  {
    if (this->sensor_timestamp != other.sensor_timestamp) {
      return false;
    }
    if (this->command_timestamp != other.command_timestamp) {
      return false;
    }
    if (this->actuator_id != other.actuator_id) {
      return false;
    }
    if (this->activate != other.activate) {
      return false;
    }
    if (this->moisture_value != other.moisture_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrrigationCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrrigationCommand_

// alias to use template instance with default allocator
using IrrigationCommand =
  agri_interfaces::msg::IrrigationCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__IRRIGATION_COMMAND__STRUCT_HPP_
