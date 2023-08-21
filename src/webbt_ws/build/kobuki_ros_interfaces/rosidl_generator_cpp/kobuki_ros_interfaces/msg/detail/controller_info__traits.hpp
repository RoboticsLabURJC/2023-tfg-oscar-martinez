// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kobuki_ros_interfaces/msg/detail/controller_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kobuki_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: p_gain
  {
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << ", ";
  }

  // member: i_gain
  {
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << ", ";
  }

  // member: d_gain
  {
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << "\n";
  }

  // member: i_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << "\n";
  }

  // member: d_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kobuki_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kobuki_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kobuki_ros_interfaces::msg::ControllerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  kobuki_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kobuki_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kobuki_ros_interfaces::msg::ControllerInfo & msg)
{
  return kobuki_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::ControllerInfo>()
{
  return "kobuki_ros_interfaces::msg::ControllerInfo";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::ControllerInfo>()
{
  return "kobuki_ros_interfaces/msg/ControllerInfo";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::ControllerInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::ControllerInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::ControllerInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_
