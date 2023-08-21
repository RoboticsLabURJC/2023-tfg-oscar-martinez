// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/ExternalPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/external_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExternalPower_state
{
public:
  explicit Init_ExternalPower_state(::kobuki_ros_interfaces::msg::ExternalPower & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::ExternalPower state(::kobuki_ros_interfaces::msg::ExternalPower::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ExternalPower msg_;
};

class Init_ExternalPower_source
{
public:
  Init_ExternalPower_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalPower_state source(::kobuki_ros_interfaces::msg::ExternalPower::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_ExternalPower_state(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ExternalPower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::ExternalPower>()
{
  return kobuki_ros_interfaces::msg::builder::Init_ExternalPower_source();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__BUILDER_HPP_
