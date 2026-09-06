// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "agri_interfaces/msg/soil_moisture.hpp"


#ifndef AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_HPP_
#define AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_HPP_

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
# define DEPRECATED__agri_interfaces__msg__SoilMoisture __attribute__((deprecated))
#else
# define DEPRECATED__agri_interfaces__msg__SoilMoisture __declspec(deprecated)
#endif

namespace agri_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoilMoisture_
{
  using Type = SoilMoisture_<ContainerAllocator>;

  explicit SoilMoisture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = "";
      this->moisture = 0.0f;
      this->unit = "";
    }
  }

  explicit SoilMoisture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    sensor_id(_alloc),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = "";
      this->moisture = 0.0f;
      this->unit = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;
  using _moisture_type =
    float;
  _moisture_type moisture;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__moisture(
    const float & _arg)
  {
    this->moisture = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    agri_interfaces::msg::SoilMoisture_<ContainerAllocator> *;
  using ConstRawPtr =
    const agri_interfaces::msg::SoilMoisture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::SoilMoisture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      agri_interfaces::msg::SoilMoisture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__agri_interfaces__msg__SoilMoisture
    std::shared_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__agri_interfaces__msg__SoilMoisture
    std::shared_ptr<agri_interfaces::msg::SoilMoisture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoilMoisture_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->moisture != other.moisture) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoilMoisture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoilMoisture_

// alias to use template instance with default allocator
using SoilMoisture =
  agri_interfaces::msg::SoilMoisture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace agri_interfaces

#endif  // AGRI_INTERFACES__MSG__DETAIL__SOIL_MOISTURE__STRUCT_HPP_
