// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/digital_input_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_DigitalInputEvent_values
{
public:
  Init_DigitalInputEvent_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kobuki_ros_interfaces::msg::DigitalInputEvent values(::kobuki_ros_interfaces::msg::DigitalInputEvent::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::DigitalInputEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::DigitalInputEvent>()
{
  return kobuki_ros_interfaces::msg::builder::Init_DigitalInputEvent_values();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__BUILDER_HPP_
