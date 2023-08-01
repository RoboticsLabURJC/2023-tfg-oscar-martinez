// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/CliffEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__CliffEvent __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__CliffEvent __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CliffEvent_
{
  using Type = CliffEvent_<ContainerAllocator>;

  explicit CliffEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor = 0;
      this->state = 0;
      this->bottom = 0;
    }
  }

  explicit CliffEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor = 0;
      this->state = 0;
      this->bottom = 0;
    }
  }

  // field types and members
  using _sensor_type =
    uint8_t;
  _sensor_type sensor;
  using _state_type =
    uint8_t;
  _state_type state;
  using _bottom_type =
    uint16_t;
  _bottom_type bottom;

  // setters for named parameter idiom
  Type & set__sensor(
    const uint8_t & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__bottom(
    const uint16_t & _arg)
  {
    this->bottom = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t CENTER =
    1u;
  static constexpr uint8_t RIGHT =
    2u;
  static constexpr uint8_t FLOOR =
    0u;
  static constexpr uint8_t CLIFF =
    1u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__CliffEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__CliffEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::CliffEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CliffEvent_ & other) const
  {
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->bottom != other.bottom) {
      return false;
    }
    return true;
  }
  bool operator!=(const CliffEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CliffEvent_

// alias to use template instance with default allocator
using CliffEvent =
  kobuki_ros_interfaces::msg::CliffEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CliffEvent_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t CliffEvent_<ContainerAllocator>::CENTER;
template<typename ContainerAllocator>
constexpr uint8_t CliffEvent_<ContainerAllocator>::RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t CliffEvent_<ContainerAllocator>::FLOOR;
template<typename ContainerAllocator>
constexpr uint8_t CliffEvent_<ContainerAllocator>::CLIFF;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_HPP_
