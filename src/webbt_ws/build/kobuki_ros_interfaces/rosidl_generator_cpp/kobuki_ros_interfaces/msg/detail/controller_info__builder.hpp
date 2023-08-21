// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/controller_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControllerInfo_d_gain
{
public:
  explicit Init_ControllerInfo_d_gain(::kobuki_ros_interfaces::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::ControllerInfo d_gain(::kobuki_ros_interfaces::msg::ControllerInfo::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_i_gain
{
public:
  explicit Init_ControllerInfo_i_gain(::kobuki_ros_interfaces::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  Init_ControllerInfo_d_gain i_gain(::kobuki_ros_interfaces::msg::ControllerInfo::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_ControllerInfo_d_gain(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_p_gain
{
public:
  explicit Init_ControllerInfo_p_gain(::kobuki_ros_interfaces::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  Init_ControllerInfo_i_gain p_gain(::kobuki_ros_interfaces::msg::ControllerInfo::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_ControllerInfo_i_gain(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_type
{
public:
  Init_ControllerInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerInfo_p_gain type(::kobuki_ros_interfaces::msg::ControllerInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ControllerInfo_p_gain(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ControllerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::ControllerInfo>()
{
  return kobuki_ros_interfaces::msg::builder::Init_ControllerInfo_type();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_
