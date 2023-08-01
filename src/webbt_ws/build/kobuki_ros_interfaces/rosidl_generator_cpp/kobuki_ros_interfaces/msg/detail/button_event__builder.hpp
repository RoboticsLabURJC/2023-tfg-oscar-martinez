// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/button_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ButtonEvent_state
{
public:
  explicit Init_ButtonEvent_state(::kobuki_ros_interfaces::msg::ButtonEvent & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::ButtonEvent state(::kobuki_ros_interfaces::msg::ButtonEvent::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ButtonEvent msg_;
};

class Init_ButtonEvent_button
{
public:
  Init_ButtonEvent_button()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonEvent_state button(::kobuki_ros_interfaces::msg::ButtonEvent::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_ButtonEvent_state(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::ButtonEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::ButtonEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_ButtonEvent_button();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_
