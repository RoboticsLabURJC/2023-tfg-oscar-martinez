// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/ScanAngle.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ScanAngle in the package kobuki_ros_interfaces.
typedef struct kobuki_ros_interfaces__msg__ScanAngle
{
  std_msgs__msg__Header header;
  double scan_angle;
} kobuki_ros_interfaces__msg__ScanAngle;

// Struct for a sequence of kobuki_ros_interfaces__msg__ScanAngle.
typedef struct kobuki_ros_interfaces__msg__ScanAngle__Sequence
{
  kobuki_ros_interfaces__msg__ScanAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__ScanAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SCAN_ANGLE__STRUCT_H_
