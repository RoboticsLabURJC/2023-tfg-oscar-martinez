// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/KeyboardInput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__KeyboardInput __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__KeyboardInput __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyboardInput_
{
  using Type = KeyboardInput_<ContainerAllocator>;

  explicit KeyboardInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressed_key = 0;
    }
  }

  explicit KeyboardInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressed_key = 0;
    }
  }

  // field types and members
  using _pressed_key_type =
    uint8_t;
  _pressed_key_type pressed_key;

  // setters for named parameter idiom
  Type & set__pressed_key(
    const uint8_t & _arg)
  {
    this->pressed_key = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t KEYCODE_RIGHT =
    67u;
  static constexpr uint8_t KEYCODE_LEFT =
    68u;
  static constexpr uint8_t KEYCODE_UP =
    65u;
  static constexpr uint8_t KEYCODE_DOWN =
    66u;
  static constexpr uint8_t KEYCODE_SPACE =
    32u;
  static constexpr uint8_t KEYCODE_ENABLE =
    101u;
  static constexpr uint8_t KEYCODE_DISABLE =
    100u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__KeyboardInput
    std::shared_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__KeyboardInput
    std::shared_ptr<kobuki_ros_interfaces::msg::KeyboardInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyboardInput_ & other) const
  {
    if (this->pressed_key != other.pressed_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyboardInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyboardInput_

// alias to use template instance with default allocator
using KeyboardInput =
  kobuki_ros_interfaces::msg::KeyboardInput_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_UP;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_DOWN;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_SPACE;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_ENABLE;
template<typename ContainerAllocator>
constexpr uint8_t KeyboardInput_<ContainerAllocator>::KEYCODE_DISABLE;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__STRUCT_HPP_
