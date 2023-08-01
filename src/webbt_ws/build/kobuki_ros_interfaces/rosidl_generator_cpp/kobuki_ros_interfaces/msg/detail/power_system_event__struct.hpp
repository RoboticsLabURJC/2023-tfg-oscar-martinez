// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__PowerSystemEvent __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__PowerSystemEvent __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerSystemEvent_
{
  using Type = PowerSystemEvent_<ContainerAllocator>;

  explicit PowerSystemEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
    }
  }

  explicit PowerSystemEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
    }
  }

  // field types and members
  using _event_type =
    uint8_t;
  _event_type event;

  // setters for named parameter idiom
  Type & set__event(
    const uint8_t & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNPLUGGED =
    0u;
  static constexpr uint8_t PLUGGED_TO_ADAPTER =
    1u;
  static constexpr uint8_t PLUGGED_TO_DOCKBASE =
    2u;
  static constexpr uint8_t CHARGE_COMPLETED =
    3u;
  static constexpr uint8_t BATTERY_LOW =
    4u;
  static constexpr uint8_t BATTERY_CRITICAL =
    5u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__PowerSystemEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__PowerSystemEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::PowerSystemEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerSystemEvent_ & other) const
  {
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerSystemEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerSystemEvent_

// alias to use template instance with default allocator
using PowerSystemEvent =
  kobuki_ros_interfaces::msg::PowerSystemEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::UNPLUGGED;
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::PLUGGED_TO_ADAPTER;
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::PLUGGED_TO_DOCKBASE;
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::CHARGE_COMPLETED;
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::BATTERY_LOW;
template<typename ContainerAllocator>
constexpr uint8_t PowerSystemEvent_<ContainerAllocator>::BATTERY_CRITICAL;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__STRUCT_HPP_
