// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/robot_command.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

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
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__agri_interfaces__msg__RobotCommand __attribute__((deprecated))
#else
# define DEPRECATED__agri_interfaces__msg__RobotCommand __declspec(deprecated)
#endif

namespace agri_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_
{
  using Type = RobotCommand_<ContainerAllocator>;

  explicit RobotCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->command = "";
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
    }
  }

  explicit RobotCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    robot_id(_alloc),
    command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->command = "";
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _linear_speed_type =
    float;
  _linear_speed_type linear_speed;
  using _angular_speed_type =
    float;
  _angular_speed_type angular_speed;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__linear_speed(
    const float & _arg)
  {
    this->linear_speed = _arg;
    return *this;
  }
  Type & set__angular_speed(
    const float & _arg)
  {
    this->angular_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agri_interfaces::msg::RobotCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const agri_interfaces::msg::RobotCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::RobotCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::RobotCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agri_interfaces__msg__RobotCommand
    std::shared_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agri_interfaces__msg__RobotCommand
    std::shared_ptr<agri_interfaces::msg::RobotCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->linear_speed != other.linear_speed) {
      return false;
    }
    if (this->angular_speed != other.angular_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_

// alias to use template instance with default allocator
using RobotCommand =
  agri_interfaces::msg::RobotCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
