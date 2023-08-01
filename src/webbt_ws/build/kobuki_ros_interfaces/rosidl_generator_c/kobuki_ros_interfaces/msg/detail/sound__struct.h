// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ON'.
enum
{
  kobuki_ros_interfaces__msg__Sound__ON = 0
};

/// Constant 'OFF'.
enum
{
  kobuki_ros_interfaces__msg__Sound__OFF = 1
};

/// Constant 'RECHARGE'.
enum
{
  kobuki_ros_interfaces__msg__Sound__RECHARGE = 2
};

/// Constant 'BUTTON'.
enum
{
  kobuki_ros_interfaces__msg__Sound__BUTTON = 3
};

/// Constant 'ERROR'.
enum
{
  kobuki_ros_interfaces__msg__Sound__ERROR = 4
};

/// Constant 'CLEANINGSTART'.
enum
{
  kobuki_ros_interfaces__msg__Sound__CLEANINGSTART = 5
};

/// Constant 'CLEANINGEND'.
enum
{
  kobuki_ros_interfaces__msg__Sound__CLEANINGEND = 6
};

/// Struct defined in msg/Sound in the package kobuki_ros_interfaces.
/**
  * Sends a command for playing sounds.
  * The available sound sequences:
  * 0 - turn on
  * 1 - turn off
  * 2 - recharge start
  * 3 - press button,
  * 4 - error sound
  * 5 - start cleaning
  * 6 - cleaning end
 */
typedef struct kobuki_ros_interfaces__msg__Sound
{
  uint8_t value;
} kobuki_ros_interfaces__msg__Sound;

// Struct for a sequence of kobuki_ros_interfaces__msg__Sound.
typedef struct kobuki_ros_interfaces__msg__Sound__Sequence
{
  kobuki_ros_interfaces__msg__Sound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__Sound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SOUND__STRUCT_H_
