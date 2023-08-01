// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kobuki_ros_interfaces/msg/detail/power_system_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kobuki_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerSystemEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerSystemEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerSystemEvent & msg, bool use_flow_style = false)
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
  const kobuki_ros_interfaces::msg::PowerSystemEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  kobuki_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kobuki_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kobuki_ros_interfaces::msg::PowerSystemEvent & msg)
{
  return kobuki_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::PowerSystemEvent>()
{
  return "kobuki_ros_interfaces::msg::PowerSystemEvent";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::PowerSystemEvent>()
{
  return "kobuki_ros_interfaces/msg/PowerSystemEvent";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::PowerSystemEvent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::PowerSystemEvent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::PowerSystemEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__POWER_SYSTEM_EVENT__TRAITS_HPP_
