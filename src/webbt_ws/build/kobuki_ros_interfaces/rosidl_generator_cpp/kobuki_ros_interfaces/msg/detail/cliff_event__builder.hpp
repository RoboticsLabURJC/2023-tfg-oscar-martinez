// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/CliffEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/cliff_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_CliffEvent_bottom
{
public:
  explicit Init_CliffEvent_bottom(::kobuki_ros_interfaces::msg::CliffEvent & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::CliffEvent bottom(::kobuki_ros_interfaces::msg::CliffEvent::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::CliffEvent msg_;
};

class Init_CliffEvent_state
{
public:
  explicit Init_CliffEvent_state(::kobuki_ros_interfaces::msg::CliffEvent & msg)
  : msg_(msg)
  {}
  Init_CliffEvent_bottom state(::kobuki_ros_interfaces::msg::CliffEvent::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CliffEvent_bottom(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::CliffEvent msg_;
};

class Init_CliffEvent_sensor
{
public:
  Init_CliffEvent_sensor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CliffEvent_state sensor(::kobuki_ros_interfaces::msg::CliffEvent::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return Init_CliffEvent_state(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::CliffEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::CliffEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_CliffEvent_sensor();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__BUILDER_HPP_
