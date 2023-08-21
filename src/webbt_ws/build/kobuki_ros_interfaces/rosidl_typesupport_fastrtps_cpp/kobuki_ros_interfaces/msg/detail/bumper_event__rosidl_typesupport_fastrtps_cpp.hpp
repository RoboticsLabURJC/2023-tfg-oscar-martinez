// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from kobuki_ros_interfaces:msg/BumperEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/bumper_event__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace kobuki_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_serialize(
  const kobuki_ros_interfaces::msg::BumperEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kobuki_ros_interfaces::msg::BumperEvent & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
get_serialized_size(
  const kobuki_ros_interfaces::msg::BumperEvent & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
max_serialized_size_BumperEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kobuki_ros_interfaces, msg, BumperEvent)();

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
