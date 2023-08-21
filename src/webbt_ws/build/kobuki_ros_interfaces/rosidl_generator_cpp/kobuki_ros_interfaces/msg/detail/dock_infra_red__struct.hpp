// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_HPP_

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
# define DEPRECATED__kobuki_ros_interfaces__msg__DockInfraRed __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__DockInfraRed __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockInfraRed_
{
  using Type = DockInfraRed_<ContainerAllocator>;

  explicit DockInfraRed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DockInfraRed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NEAR_LEFT =
    1u;
  static constexpr uint8_t NEAR_CENTER =
    2u;
  static constexpr uint8_t NEAR_RIGHT =
    4u;
  static constexpr uint8_t FAR_LEFT =
    16u;
  static constexpr uint8_t FAR_CENTER =
    8u;
  static constexpr uint8_t FAR_RIGHT =
    32u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__DockInfraRed
    std::shared_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__DockInfraRed
    std::shared_ptr<kobuki_ros_interfaces::msg::DockInfraRed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockInfraRed_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockInfraRed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockInfraRed_

// alias to use template instance with default allocator
using DockInfraRed =
  kobuki_ros_interfaces::msg::DockInfraRed_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::NEAR_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::NEAR_CENTER;
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::NEAR_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::FAR_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::FAR_CENTER;
template<typename ContainerAllocator>
constexpr uint8_t DockInfraRed_<ContainerAllocator>::FAR_RIGHT;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_HPP_
