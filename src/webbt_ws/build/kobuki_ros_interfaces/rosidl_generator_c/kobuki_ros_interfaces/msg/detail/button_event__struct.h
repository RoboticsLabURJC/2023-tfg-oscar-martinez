// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BUTTON0'.
enum
{
  kobuki_ros_interfaces__msg__ButtonEvent__BUTTON0 = 0
};

/// Constant 'BUTTON1'.
enum
{
  kobuki_ros_interfaces__msg__ButtonEvent__BUTTON1 = 1
};

/// Constant 'BUTTON2'.
enum
{
  kobuki_ros_interfaces__msg__ButtonEvent__BUTTON2 = 2
};

/// Constant 'RELEASED'.
enum
{
  kobuki_ros_interfaces__msg__ButtonEvent__RELEASED = 0
};

/// Constant 'PRESSED'.
enum
{
  kobuki_ros_interfaces__msg__ButtonEvent__PRESSED = 1
};

/// Struct defined in msg/ButtonEvent in the package kobuki_ros_interfaces.
/**
  * Provides a button event.
  * This message is generated whenever a particular button is pressed or released.
  * Note that, despite buttons field on SensorState messages, state field is not a
  * bitmask, but the new state of a single button.
 */
typedef struct kobuki_ros_interfaces__msg__ButtonEvent
{
  uint8_t button;
  uint8_t state;
} kobuki_ros_interfaces__msg__ButtonEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__ButtonEvent.
typedef struct kobuki_ros_interfaces__msg__ButtonEvent__Sequence
{
  kobuki_ros_interfaces__msg__ButtonEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__ButtonEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUTTON_EVENT__STRUCT_H_
