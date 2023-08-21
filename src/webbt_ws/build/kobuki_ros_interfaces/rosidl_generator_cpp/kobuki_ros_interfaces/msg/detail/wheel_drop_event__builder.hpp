// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/WheelDropEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/wheel_drop_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelDropEvent_state
{
public:
  explicit Init_WheelDropEvent_state(::kobuki_ros_interfaces::msg::WheelDropEvent & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::WheelDropEvent state(::kobuki_ros_interfaces::msg::WheelDropEvent::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::WheelDropEvent msg_;
};

class Init_WheelDropEvent_wheel
{
public:
  Init_WheelDropEvent_wheel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelDropEvent_state wheel(::kobuki_ros_interfaces::msg::WheelDropEvent::_wheel_type arg)
  {
    msg_.wheel = std::move(arg);
    return Init_WheelDropEvent_state(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::WheelDropEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::WheelDropEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_WheelDropEvent_wheel();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__WHEEL_DROP_EVENT__BUILDER_HPP_
