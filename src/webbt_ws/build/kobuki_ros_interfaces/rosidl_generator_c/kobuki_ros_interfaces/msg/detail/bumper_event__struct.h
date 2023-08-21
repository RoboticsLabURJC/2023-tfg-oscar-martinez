// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/BumperEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LEFT'.
/**
  * bumper
 */
enum
{
  kobuki_ros_interfaces__msg__BumperEvent__LEFT = 0
};

/// Constant 'CENTER'.
enum
{
  kobuki_ros_interfaces__msg__BumperEvent__CENTER = 1
};

/// Constant 'RIGHT'.
enum
{
  kobuki_ros_interfaces__msg__BumperEvent__RIGHT = 2
};

/// Constant 'RELEASED'.
/**
  * state
 */
enum
{
  kobuki_ros_interfaces__msg__BumperEvent__RELEASED = 0
};

/// Constant 'PRESSED'.
enum
{
  kobuki_ros_interfaces__msg__BumperEvent__PRESSED = 1
};

/// Struct defined in msg/BumperEvent in the package kobuki_ros_interfaces.
/**
  * Provides a bumper event.
  * This message is generated whenever a particular bumper is pressed or released.
  * Note that, despite bumper field on SensorState messages, state field is not a
  * bitmask, but the new state of a single sensor.
 */
typedef struct kobuki_ros_interfaces__msg__BumperEvent
{
  uint8_t bumper;
  uint8_t state;
} kobuki_ros_interfaces__msg__BumperEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__BumperEvent.
typedef struct kobuki_ros_interfaces__msg__BumperEvent__Sequence
{
  kobuki_ros_interfaces__msg__BumperEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__BumperEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__STRUCT_H_
