// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/version_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_VersionInfo_features
{
public:
  explicit Init_VersionInfo_features(::kobuki_ros_interfaces::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::VersionInfo features(::kobuki_ros_interfaces::msg::VersionInfo::_features_type arg)
  {
    msg_.features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::VersionInfo msg_;
};

class Init_VersionInfo_udid
{
public:
  explicit Init_VersionInfo_udid(::kobuki_ros_interfaces::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  Init_VersionInfo_features udid(::kobuki_ros_interfaces::msg::VersionInfo::_udid_type arg)
  {
    msg_.udid = std::move(arg);
    return Init_VersionInfo_features(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::VersionInfo msg_;
};

class Init_VersionInfo_software
{
public:
  explicit Init_VersionInfo_software(::kobuki_ros_interfaces::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  Init_VersionInfo_udid software(::kobuki_ros_interfaces::msg::VersionInfo::_software_type arg)
  {
    msg_.software = std::move(arg);
    return Init_VersionInfo_udid(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::VersionInfo msg_;
};

class Init_VersionInfo_firmware
{
public:
  explicit Init_VersionInfo_firmware(::kobuki_ros_interfaces::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  Init_VersionInfo_software firmware(::kobuki_ros_interfaces::msg::VersionInfo::_firmware_type arg)
  {
    msg_.firmware = std::move(arg);
    return Init_VersionInfo_software(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::VersionInfo msg_;
};

class Init_VersionInfo_hardware
{
public:
  Init_VersionInfo_hardware()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VersionInfo_firmware hardware(::kobuki_ros_interfaces::msg::VersionInfo::_hardware_type arg)
  {
    msg_.hardware = std::move(arg);
    return Init_VersionInfo_firmware(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::VersionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::VersionInfo>()
{
  return kobuki_ros_interfaces::msg::builder::Init_VersionInfo_hardware();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
