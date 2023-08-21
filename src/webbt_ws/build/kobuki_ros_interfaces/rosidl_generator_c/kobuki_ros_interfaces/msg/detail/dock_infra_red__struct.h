// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NEAR_LEFT'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__NEAR_LEFT = 1
};

/// Constant 'NEAR_CENTER'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__NEAR_CENTER = 2
};

/// Constant 'NEAR_RIGHT'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__NEAR_RIGHT = 4
};

/// Constant 'FAR_LEFT'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__FAR_LEFT = 16
};

/// Constant 'FAR_CENTER'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__FAR_CENTER = 8
};

/// Constant 'FAR_RIGHT'.
enum
{
  kobuki_ros_interfaces__msg__DockInfraRed__FAR_RIGHT = 32
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DockInfraRed in the package kobuki_ros_interfaces.
/**
  * Docking base ir sensors messages.
  * Generated on the proximity of the docking base to assist the automatic docking.
 */
typedef struct kobuki_ros_interfaces__msg__DockInfraRed
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence data;
} kobuki_ros_interfaces__msg__DockInfraRed;

// Struct for a sequence of kobuki_ros_interfaces__msg__DockInfraRed.
typedef struct kobuki_ros_interfaces__msg__DockInfraRed__Sequence
{
  kobuki_ros_interfaces__msg__DockInfraRed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__DockInfraRed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DOCK_INFRA_RED__STRUCT_H_
