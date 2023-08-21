// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/ScanAngle.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/scan_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ScanAngle_scan_angle
{
public:
  explicit Init_ScanAngle_scan_angle(::kobuki_ros_interfaces::msg::ScanAngle & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::ScanAngle scan_angle(::kobuki_ros_interfaces::msg::ScanAngle::_scan_angle_type arg)
  {
    msg_.scan_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ScanAngle msg_;
};

class Init_ScanAngle_header
{
public:
  Init_ScanAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanAngle_scan_angle header(::kobuki_ros_interfaces::msg::ScanAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScanAngle_scan_angle(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ScanAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::ScanAngle>()
{
  return kobuki_ros_interfaces::msg::builder::Init_ScanAngle_header();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__BUILDER_HPP_
