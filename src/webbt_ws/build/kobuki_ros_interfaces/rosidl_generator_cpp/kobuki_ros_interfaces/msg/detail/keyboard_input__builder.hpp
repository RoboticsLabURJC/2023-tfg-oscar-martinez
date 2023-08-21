// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/KeyboardInput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/keyboard_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_KeyboardInput_pressed_key
{
public:
  Init_KeyboardInput_pressed_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kobuki_ros_interfaces::msg::KeyboardInput pressed_key(::kobuki_ros_interfaces::msg::KeyboardInput::_pressed_key_type arg)
  {
    msg_.pressed_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::KeyboardInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::KeyboardInput>()
{
  return kobuki_ros_interfaces::msg::builder::Init_KeyboardInput_pressed_key();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__BUILDER_HPP_
