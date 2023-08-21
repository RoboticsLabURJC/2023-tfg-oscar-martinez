// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__Sound __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__Sound __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sound_
{
  using Type = Sound_<ContainerAllocator>;

  explicit Sound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit Sound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t ON =
    0u;
  static constexpr uint8_t OFF =
    1u;
  static constexpr uint8_t RECHARGE =
    2u;
  static constexpr uint8_t BUTTON =
    3u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    4u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr uint8_t CLEANINGSTART =
    5u;
  static constexpr uint8_t CLEANINGEND =
    6u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__Sound
    std::shared_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__Sound
    std::shared_ptr<kobuki_ros_interfaces::msg::Sound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sound_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sound_

// alias to use template instance with default allocator
using Sound =
  kobuki_ros_interfaces::msg::Sound_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::ON;
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::OFF;
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::RECHARGE;
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::BUTTON;
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::CLEANINGSTART;
template<typename ContainerAllocator>
constexpr uint8_t Sound_<ContainerAllocator>::CLEANINGEND;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_HPP_
