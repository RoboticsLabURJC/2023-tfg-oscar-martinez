// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__VersionInfo __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__VersionInfo __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VersionInfo_
{
  using Type = VersionInfo_<ContainerAllocator>;

  explicit VersionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hardware = "";
      this->firmware = "";
      this->software = "";
      this->features = 0ull;
    }
  }

  explicit VersionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hardware(_alloc),
    firmware(_alloc),
    software(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hardware = "";
      this->firmware = "";
      this->software = "";
      this->features = 0ull;
    }
  }

  // field types and members
  using _hardware_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_type hardware;
  using _firmware_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_type firmware;
  using _software_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _software_type software;
  using _udid_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _udid_type udid;
  using _features_type =
    uint64_t;
  _features_type features;

  // setters for named parameter idiom
  Type & set__hardware(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware = _arg;
    return *this;
  }
  Type & set__firmware(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware = _arg;
    return *this;
  }
  Type & set__software(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->software = _arg;
    return *this;
  }
  Type & set__udid(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->udid = _arg;
    return *this;
  }
  Type & set__features(
    const uint64_t & _arg)
  {
    this->features = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint64_t SMOOTH_MOVE_START =
    1u;
  static constexpr uint64_t GYROSCOPE_3D_DATA =
    2u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__VersionInfo
    std::shared_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__VersionInfo
    std::shared_ptr<kobuki_ros_interfaces::msg::VersionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VersionInfo_ & other) const
  {
    if (this->hardware != other.hardware) {
      return false;
    }
    if (this->firmware != other.firmware) {
      return false;
    }
    if (this->software != other.software) {
      return false;
    }
    if (this->udid != other.udid) {
      return false;
    }
    if (this->features != other.features) {
      return false;
    }
    return true;
  }
  bool operator!=(const VersionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VersionInfo_

// alias to use template instance with default allocator
using VersionInfo =
  kobuki_ros_interfaces::msg::VersionInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint64_t VersionInfo_<ContainerAllocator>::SMOOTH_MOVE_START;
template<typename ContainerAllocator>
constexpr uint64_t VersionInfo_<ContainerAllocator>::GYROSCOPE_3D_DATA;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__STRUCT_HPP_
