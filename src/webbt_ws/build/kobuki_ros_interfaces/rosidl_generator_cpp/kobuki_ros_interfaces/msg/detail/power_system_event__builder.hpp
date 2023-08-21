// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/power_system_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_PowerSystemEvent_event
{
public:
  Init_PowerSystemEvent_event()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kobuki_ros_interfaces::msg::PowerSystemEvent event(::kobuki_ros_interfaces::msg::PowerSystemEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::PowerSystemEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::PowerSystemEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_PowerSystemEvent_event();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__BUILDER_HPP_
