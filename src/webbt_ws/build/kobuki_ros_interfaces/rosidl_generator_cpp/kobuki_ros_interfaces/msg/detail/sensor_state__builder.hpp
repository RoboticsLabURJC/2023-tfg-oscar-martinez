// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorState_analog_input
{
public:
  explicit Init_SensorState_analog_input(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::msg::SensorState analog_input(::kobuki_ros_interfaces::msg::SensorState::_analog_input_type arg)
  {
    msg_.analog_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_digital_input
{
public:
  explicit Init_SensorState_digital_input(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_analog_input digital_input(::kobuki_ros_interfaces::msg::SensorState::_digital_input_type arg)
  {
    msg_.digital_input = std::move(arg);
    return Init_SensorState_analog_input(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_over_current
{
public:
  explicit Init_SensorState_over_current(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_digital_input over_current(::kobuki_ros_interfaces::msg::SensorState::_over_current_type arg)
  {
    msg_.over_current = std::move(arg);
    return Init_SensorState_digital_input(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_current
{
public:
  explicit Init_SensorState_current(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_over_current current(::kobuki_ros_interfaces::msg::SensorState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_SensorState_over_current(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_bottom
{
public:
  explicit Init_SensorState_bottom(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_current bottom(::kobuki_ros_interfaces::msg::SensorState::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_SensorState_current(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_battery
{
public:
  explicit Init_SensorState_battery(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_bottom battery(::kobuki_ros_interfaces::msg::SensorState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_SensorState_bottom(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_charger
{
public:
  explicit Init_SensorState_charger(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_battery charger(::kobuki_ros_interfaces::msg::SensorState::_charger_type arg)
  {
    msg_.charger = std::move(arg);
    return Init_SensorState_battery(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_buttons
{
public:
  explicit Init_SensorState_buttons(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_charger buttons(::kobuki_ros_interfaces::msg::SensorState::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_SensorState_charger(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_right_pwm
{
public:
  explicit Init_SensorState_right_pwm(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_buttons right_pwm(::kobuki_ros_interfaces::msg::SensorState::_right_pwm_type arg)
  {
    msg_.right_pwm = std::move(arg);
    return Init_SensorState_buttons(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_left_pwm
{
public:
  explicit Init_SensorState_left_pwm(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_right_pwm left_pwm(::kobuki_ros_interfaces::msg::SensorState::_left_pwm_type arg)
  {
    msg_.left_pwm = std::move(arg);
    return Init_SensorState_right_pwm(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_right_encoder
{
public:
  explicit Init_SensorState_right_encoder(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_left_pwm right_encoder(::kobuki_ros_interfaces::msg::SensorState::_right_encoder_type arg)
  {
    msg_.right_encoder = std::move(arg);
    return Init_SensorState_left_pwm(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_left_encoder
{
public:
  explicit Init_SensorState_left_encoder(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_right_encoder left_encoder(::kobuki_ros_interfaces::msg::SensorState::_left_encoder_type arg)
  {
    msg_.left_encoder = std::move(arg);
    return Init_SensorState_right_encoder(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_cliff
{
public:
  explicit Init_SensorState_cliff(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_left_encoder cliff(::kobuki_ros_interfaces::msg::SensorState::_cliff_type arg)
  {
    msg_.cliff = std::move(arg);
    return Init_SensorState_left_encoder(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_wheel_drop
{
public:
  explicit Init_SensorState_wheel_drop(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_cliff wheel_drop(::kobuki_ros_interfaces::msg::SensorState::_wheel_drop_type arg)
  {
    msg_.wheel_drop = std::move(arg);
    return Init_SensorState_cliff(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_bumper
{
public:
  explicit Init_SensorState_bumper(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_wheel_drop bumper(::kobuki_ros_interfaces::msg::SensorState::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_SensorState_wheel_drop(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_time_stamp
{
public:
  explicit Init_SensorState_time_stamp(::kobuki_ros_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_bumper time_stamp(::kobuki_ros_interfaces::msg::SensorState::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SensorState_bumper(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

class Init_SensorState_header
{
public:
  Init_SensorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorState_time_stamp header(::kobuki_ros_interfaces::msg::SensorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorState_time_stamp(msg_);
  }

private:
  ::kobuki_ros_interfaces::msg::SensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::msg::SensorState>()
{
  return kobuki_ros_interfaces::msg::builder::Init_SensorState_header();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
