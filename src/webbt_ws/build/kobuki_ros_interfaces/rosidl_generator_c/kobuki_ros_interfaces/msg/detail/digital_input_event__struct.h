// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DigitalInputEvent in the package kobuki_ros_interfaces.
/**
  * This message is generated whenever the value of one or more digital input pins changes.
 */
typedef struct kobuki_ros_interfaces__msg__DigitalInputEvent
{
  /// Array of values; indices represent pins 0-3 respectively.
  bool values[4];
} kobuki_ros_interfaces__msg__DigitalInputEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__DigitalInputEvent.
typedef struct kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence
{
  kobuki_ros_interfaces__msg__DigitalInputEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__DigitalInputEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_INPUT_EVENT__STRUCT_H_
