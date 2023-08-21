// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/ScanAngle.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__ScanAngle __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__ScanAngle __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanAngle_
{
  using Type = ScanAngle_<ContainerAllocator>;

  explicit ScanAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_angle = 0.0;
    }
  }

  explicit ScanAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_angle = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _scan_angle_type =
    double;
  _scan_angle_type scan_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__scan_angle(
    const double & _arg)
  {
    this->scan_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ScanAngle
    std::shared_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__ScanAngle
    std::shared_ptr<kobuki_ros_interfaces::msg::ScanAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanAngle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->scan_angle != other.scan_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanAngle_

// alias to use template instance with default allocator
using ScanAngle =
  kobuki_ros_interfaces::msg::ScanAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_HPP_
