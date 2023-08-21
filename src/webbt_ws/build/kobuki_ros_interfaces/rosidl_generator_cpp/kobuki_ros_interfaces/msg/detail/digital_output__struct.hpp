// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__DigitalOutput __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__DigitalOutput __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DigitalOutput_
{
  using Type = DigitalOutput_<ContainerAllocator>;

  explicit DigitalOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->values.begin(), this->values.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->mask.begin(), this->mask.end(), false);
    }
  }

  explicit DigitalOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : values(_alloc),
    mask(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->values.begin(), this->values.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->mask.begin(), this->mask.end(), false);
    }
  }

  // field types and members
  using _values_type =
    std::array<bool, 4>;
  _values_type values;
  using _mask_type =
    std::array<bool, 4>;
  _mask_type mask;

  // setters for named parameter idiom
  Type & set__values(
    const std::array<bool, 4> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__mask(
    const std::array<bool, 4> & _arg)
  {
    this->mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__DigitalOutput
    std::shared_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__DigitalOutput
    std::shared_ptr<kobuki_ros_interfaces::msg::DigitalOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DigitalOutput_ & other) const
  {
    if (this->values != other.values) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const DigitalOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DigitalOutput_

// alias to use template instance with default allocator
using DigitalOutput =
  kobuki_ros_interfaces::msg::DigitalOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__STRUCT_HPP_
