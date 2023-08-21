// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/CliffEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_H_

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
  * cliff sensor
 */
enum
{
  kobuki_ros_interfaces__msg__CliffEvent__LEFT = 0
};

/// Constant 'CENTER'.
enum
{
  kobuki_ros_interfaces__msg__CliffEvent__CENTER = 1
};

/// Constant 'RIGHT'.
enum
{
  kobuki_ros_interfaces__msg__CliffEvent__RIGHT = 2
};

/// Constant 'FLOOR'.
/**
  * cliff sensor state
 */
enum
{
  kobuki_ros_interfaces__msg__CliffEvent__FLOOR = 0
};

/// Constant 'CLIFF'.
enum
{
  kobuki_ros_interfaces__msg__CliffEvent__CLIFF = 1
};

/// Struct defined in msg/CliffEvent in the package kobuki_ros_interfaces.
/**
  * Provides a cliff sensor event.
  * This message is generated whenever a particular cliff sensor signals that the
  * robot approaches or moves away from a cliff.
  * Note that, despite cliff field on SensorState messages, state field is not a
  * bitmask, but the new state of a single sensor.
 */
typedef struct kobuki_ros_interfaces__msg__CliffEvent
{
  uint8_t sensor;
  uint8_t state;
  /// distance to floor when cliff was detected
  uint16_t bottom;
} kobuki_ros_interfaces__msg__CliffEvent;

// Struct for a sequence of kobuki_ros_interfaces__msg__CliffEvent.
typedef struct kobuki_ros_interfaces__msg__CliffEvent__Sequence
{
  kobuki_ros_interfaces__msg__CliffEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__CliffEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__CLIFF_EVENT__STRUCT_H_
