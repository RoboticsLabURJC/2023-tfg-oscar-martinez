// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/KeyboardInput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kobuki_ros_interfaces/msg/detail/keyboard_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kobuki_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyboardInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: pressed_key
  {
    out << "pressed_key: ";
    rosidl_generator_traits::value_to_yaml(msg.pressed_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyboardInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pressed_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressed_key: ";
    rosidl_generator_traits::value_to_yaml(msg.pressed_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyboardInput & msg, bool use_flow_style = false)
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
  const kobuki_ros_interfaces::msg::KeyboardInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  kobuki_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kobuki_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kobuki_ros_interfaces::msg::KeyboardInput & msg)
{
  return kobuki_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::KeyboardInput>()
{
  return "kobuki_ros_interfaces::msg::KeyboardInput";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::KeyboardInput>()
{
  return "kobuki_ros_interfaces/msg/KeyboardInput";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::KeyboardInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::KeyboardInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::KeyboardInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__KEYBOARD_INPUT__TRAITS_HPP_
