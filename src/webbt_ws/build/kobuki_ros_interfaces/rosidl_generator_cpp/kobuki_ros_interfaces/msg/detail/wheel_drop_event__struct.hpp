// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/WheelDropEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__WheelDropEvent __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__WheelDropEvent __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelDropEvent_
{
  using Type = WheelDropEvent_<ContainerAllocator>;

  explicit WheelDropEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel = 0;
      this->state = 0;
    }
  }

  explicit WheelDropEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel = 0;
      this->state = 0;
    }
  }

  // field types and members
  using _wheel_type =
    uint8_t;
  _wheel_type wheel;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__wheel(
    const uint8_t & _arg)
  {
    this->wheel = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t RIGHT =
    1u;
  static constexpr uint8_t RAISED =
    0u;
  static constexpr uint8_t DROPPED =
    1u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__WheelDropEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__WheelDropEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::WheelDropEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelDropEvent_ & other) const
  {
    if (this->wheel != other.wheel) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelDropEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelDropEvent_

// alias to use template instance with default allocator
using WheelDropEvent =
  kobuki_ros_interfaces::msg::WheelDropEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t WheelDropEvent_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t WheelDropEvent_<ContainerAllocator>::RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t WheelDropEvent_<ContainerAllocator>::RAISED;
template<typename ContainerAllocator>
constexpr uint8_t WheelDropEvent_<ContainerAllocator>::DROPPED;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__STRUCT_HPP_
