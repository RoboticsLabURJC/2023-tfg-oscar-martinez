// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/ExternalPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__ExternalPower __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__ExternalPower __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalPower_
{
  using Type = ExternalPower_<ContainerAllocator>;

  explicit ExternalPower_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
      this->state = 0;
    }
  }

  explicit ExternalPower_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
      this->state = 0;
    }
  }

  // field types and members
  using _source_type =
    uint8_t;
  _source_type source;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PWR_3_3V1A =
    0u;
  static constexpr uint8_t PWR_5V1A =
    1u;
  static constexpr uint8_t PWR_12V5A =
    2u;
  static constexpr uint8_t PWR_12V1_5A =
    3u;
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t ON =
    1u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ExternalPower
    std::shared_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ExternalPower
    std::shared_ptr<kobuki_ros_interfaces::msg::ExternalPower_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalPower_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalPower_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalPower_

// alias to use template instance with default allocator
using ExternalPower =
  kobuki_ros_interfaces::msg::ExternalPower_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::PWR_3_3V1A;
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::PWR_5V1A;
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::PWR_12V5A;
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::PWR_12V1_5A;
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t ExternalPower_<ContainerAllocator>::ON;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_HPP_
