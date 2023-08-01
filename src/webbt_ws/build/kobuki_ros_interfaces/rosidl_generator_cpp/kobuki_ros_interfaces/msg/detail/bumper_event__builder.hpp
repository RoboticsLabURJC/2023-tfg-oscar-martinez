// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/BumperEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/bumper_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_BumperEvent_state
{
public:
  explicit Init_BumperEvent_state(::kobuki_ros_interfaces::msg::BumperEvent & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::BumperEvent state(::kobuki_ros_interfaces::msg::BumperEvent::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::BumperEvent msg_;
};

class Init_BumperEvent_bumper
{
public:
  Init_BumperEvent_bumper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BumperEvent_state bumper(::kobuki_ros_interfaces::msg::BumperEvent::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_BumperEvent_state(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::BumperEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::BumperEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_BumperEvent_bumper();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__BUILDER_HPP_
