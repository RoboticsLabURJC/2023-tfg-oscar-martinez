// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kobuki_ros_interfaces/msg/detail/digital_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kobuki_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DigitalOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mask
  {
    if (msg.mask.size() == 0) {
      out << "mask: []";
    } else {
      out << "mask: [";
      size_t pending_items = msg.mask.size();
      for (auto item : msg.mask) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DigitalOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mask.size() == 0) {
      out << "mask: []\n";
    } else {
      out << "mask:\n";
      for (auto item : msg.mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DigitalOutput & msg, bool use_flow_style = false)
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
  const kobuki_ros_interfaces::msg::DigitalOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  kobuki_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kobuki_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kobuki_ros_interfaces::msg::DigitalOutput & msg)
{
  return kobuki_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::DigitalOutput>()
{
  return "kobuki_ros_interfaces::msg::DigitalOutput";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::DigitalOutput>()
{
  return "kobuki_ros_interfaces/msg/DigitalOutput";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::DigitalOutput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::DigitalOutput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::DigitalOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__TRAITS_HPP_
