// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/digital_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_DigitalOutput_mask
{
public:
  explicit Init_DigitalOutput_mask(::kobuki_ros_interfaces::msg::DigitalOutput & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::DigitalOutput mask(::kobuki_ros_interfaces::msg::DigitalOutput::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::DigitalOutput msg_;
};

class Init_DigitalOutput_values
{
public:
  Init_DigitalOutput_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DigitalOutput_mask values(::kobuki_ros_interfaces::msg::DigitalOutput::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_DigitalOutput_mask(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::DigitalOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::DigitalOutput>()
{
  return kobuki_ros_interfaces::msg::builder::Init_DigitalOutput_values();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__BUILDER_HPP_
