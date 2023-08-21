// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__Led __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__Led __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Led_
{
  using Type = Led_<ContainerAllocator>;

  explicit Led_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit Led_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BLACK =
    0u;
  static constexpr uint8_t GREEN =
    1u;
  static constexpr uint8_t ORANGE =
    2u;
  static constexpr uint8_t RED =
    3u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::Led_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::Led_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::Led_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::Led_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__Led
    std::shared_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__Led
    std::shared_ptr<kobuki_ros_interfaces::msg::Led_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Led_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Led_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Led_

// alias to use template instance with default allocator
using Led =
  kobuki_ros_interfaces::msg::Led_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::BLACK;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::GREEN;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::ORANGE;
template<typename ContainerAllocator>
constexpr uint8_t Led_<ContainerAllocator>::RED;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_HPP_
