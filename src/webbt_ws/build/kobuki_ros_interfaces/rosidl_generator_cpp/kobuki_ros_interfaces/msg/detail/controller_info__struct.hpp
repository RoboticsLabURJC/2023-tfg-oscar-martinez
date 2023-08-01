// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__ControllerInfo __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__ControllerInfo __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerInfo_
{
  using Type = ControllerInfo_<ContainerAllocator>;

  explicit ControllerInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->p_gain = 0.0;
      this->i_gain = 0.0;
      this->d_gain = 0.0;
    }
  }

  explicit ControllerInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->p_gain = 0.0;
      this->i_gain = 0.0;
      this->d_gain = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _p_gain_type =
    double;
  _p_gain_type p_gain;
  using _i_gain_type =
    double;
  _i_gain_type i_gain;
  using _d_gain_type =
    double;
  _d_gain_type d_gain;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__p_gain(
    const double & _arg)
  {
    this->p_gain = _arg;
    return *this;
  }
  Type & set__i_gain(
    const double & _arg)
  {
    this->i_gain = _arg;
    return *this;
  }
  Type & set__d_gain(
    const double & _arg)
  {
    this->d_gain = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DEFAULT =
    0u;
  static constexpr uint8_t USER_CONFIGURED =
    1u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ControllerInfo
    std::shared_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ControllerInfo
    std::shared_ptr<kobuki_ros_interfaces::msg::ControllerInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerInfo_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->p_gain != other.p_gain) {
      return false;
    }
    if (this->i_gain != other.i_gain) {
      return false;
    }
    if (this->d_gain != other.d_gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerInfo_

// alias to use template instance with default allocator
using ControllerInfo =
  kobuki_ros_interfaces::msg::ControllerInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::DEFAULT;
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::USER_CONFIGURED;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
