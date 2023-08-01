// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__TRAITS_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kobuki_ros_interfaces/msg/detail/version_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kobuki_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VersionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: hardware
  {
    out << "hardware: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware, out);
    out << ", ";
  }

  // member: firmware
  {
    out << "firmware: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware, out);
    out << ", ";
  }

  // member: software
  {
    out << "software: ";
    rosidl_generator_traits::value_to_yaml(msg.software, out);
    out << ", ";
  }

  // member: udid
  {
    if (msg.udid.size() == 0) {
      out << "udid: []";
    } else {
      out << "udid: [";
      size_t pending_items = msg.udid.size();
      for (auto item : msg.udid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: features
  {
    out << "features: ";
    rosidl_generator_traits::value_to_yaml(msg.features, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VersionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hardware
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware, out);
    out << "\n";
  }

  // member: firmware
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware, out);
    out << "\n";
  }

  // member: software
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software: ";
    rosidl_generator_traits::value_to_yaml(msg.software, out);
    out << "\n";
  }

  // member: udid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.udid.size() == 0) {
      out << "udid: []\n";
    } else {
      out << "udid:\n";
      for (auto item : msg.udid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "features: ";
    rosidl_generator_traits::value_to_yaml(msg.features, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VersionInfo & msg, bool use_flow_style = false)
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
  const kobuki_ros_interfaces::msg::VersionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  kobuki_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kobuki_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kobuki_ros_interfaces::msg::VersionInfo & msg)
{
  return kobuki_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kobuki_ros_interfaces::msg::VersionInfo>()
{
  return "kobuki_ros_interfaces::msg::VersionInfo";
}

template<>
inline const char * name<kobuki_ros_interfaces::msg::VersionInfo>()
{
  return "kobuki_ros_interfaces/msg/VersionInfo";
}

template<>
struct has_fixed_size<kobuki_ros_interfaces::msg::VersionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kobuki_ros_interfaces::msg::VersionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kobuki_ros_interfaces::msg::VersionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__VERSION_INFO__TRAITS_HPP_
