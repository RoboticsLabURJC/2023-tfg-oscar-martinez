// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_DockInfraRed_data
{
public:
  explicit Init_DockInfraRed_data(::kobuki_ros_interfaces::msg::DockInfraRed & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::DockInfraRed data(::kobuki_ros_interfaces::msg::DockInfraRed::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::DockInfraRed msg_;
};

class Init_DockInfraRed_header
{
public:
  Init_DockInfraRed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockInfraRed_data header(::kobuki_ros_interfaces::msg::DockInfraRed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockInfraRed_data(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::DockInfraRed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::DockInfraRed>()
{
  return kobuki_ros_interfaces::msg::builder::Init_DockInfraRed_header();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__BUILDER_HPP_
