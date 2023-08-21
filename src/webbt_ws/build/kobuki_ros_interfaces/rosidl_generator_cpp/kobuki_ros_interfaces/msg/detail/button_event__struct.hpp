// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__ButtonEvent __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__ButtonEvent __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ButtonEvent_
{
  using Type = ButtonEvent_<ContainerAllocator>;

  explicit ButtonEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = 0;
      this->state = 0;
    }
  }

  explicit ButtonEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = 0;
      this->state = 0;
    }
  }

  // field types and members
  using _button_type =
    uint8_t;
  _button_type button;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__button(
    const uint8_t & _arg)
  {
    this->button = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BUTTON0 =
    0u;
  static constexpr uint8_t BUTTON1 =
    1u;
  static constexpr uint8_t BUTTON2 =
    2u;
  static constexpr uint8_t RELEASED =
    0u;
  static constexpr uint8_t PRESSED =
    1u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ButtonEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ButtonEvent
    std::shared_ptr<kobuki_ros_interfaces::msg::ButtonEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ButtonEvent_ & other) const
  {
    if (this->button != other.button) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ButtonEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ButtonEvent_

// alias to use template instance with default allocator
using ButtonEvent =
  kobuki_ros_interfaces::msg::ButtonEvent_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ButtonEvent_<ContainerAllocator>::BUTTON0;
template<typename ContainerAllocator>
constexpr uint8_t ButtonEvent_<ContainerAllocator>::BUTTON1;
template<typename ContainerAllocator>
constexpr uint8_t ButtonEvent_<ContainerAllocator>::BUTTON2;
template<typename ContainerAllocator>
constexpr uint8_t ButtonEvent_<ContainerAllocator>::RELEASED;
template<typename ContainerAllocator>
constexpr uint8_t ButtonEvent_<ContainerAllocator>::PRESSED;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_HPP_
