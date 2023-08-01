// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/Led.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLACK'.
enum
{
  kobuki_ros_interfaces__msg__Led__BLACK = 0
};

/// Constant 'GREEN'.
enum
{
  kobuki_ros_interfaces__msg__Led__GREEN = 1
};

/// Constant 'ORANGE'.
enum
{
  kobuki_ros_interfaces__msg__Led__ORANGE = 2
};

/// Constant 'RED'.
enum
{
  kobuki_ros_interfaces__msg__Led__RED = 3
};

/// Struct defined in msg/Led in the package kobuki_ros_interfaces.
/**
  * Sends a command for controlling the a LED.
  *
  * Typically the first LED is always reserved to denote
  * the state - the remainder will be controllable. 
 */
typedef struct kobuki_ros_interfaces__msg__Led
{
  /// For kobuki there are only two controllable LED's.
  uint8_t value;
} kobuki_ros_interfaces__msg__Led;

// Struct for a sequence of kobuki_ros_interfaces__msg__Led.
typedef struct kobuki_ros_interfaces__msg__Led__Sequence
{
  kobuki_ros_interfaces__msg__Led * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__Led__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__LED__STRUCT_H_
