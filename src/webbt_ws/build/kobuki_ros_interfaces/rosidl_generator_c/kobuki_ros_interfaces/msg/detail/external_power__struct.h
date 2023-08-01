// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/ExternalPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PWR_3_3V1A'.
/**
  * Power sources
  * DB25 connector only
 */
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__PWR_3_3V1A = 0
};

/// Constant 'PWR_5V1A'.
/**
  * DB25 connector and Micro Molex connector
 */
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__PWR_5V1A = 1
};

/// Constant 'PWR_12V5A'.
/**
  * Micro Molex connector only
 */
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__PWR_12V5A = 2
};

/// Constant 'PWR_12V1_5A'.
/**
  * Micro Molex connector only
 */
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__PWR_12V1_5A = 3
};

/// Constant 'OFF'.
/**
  * State
 */
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__OFF = 0
};

/// Constant 'ON'.
enum
{
  kobuki_ros_interfaces__msg__ExternalPower__ON = 1
};

/// Struct defined in msg/ExternalPower in the package kobuki_ros_interfaces.
/**
  * Turn on/off Kobuki's external power sources
 */
typedef struct kobuki_ros_interfaces__msg__ExternalPower
{
  uint8_t source;
  uint8_t state;
} kobuki_ros_interfaces__msg__ExternalPower;

// Struct for a sequence of kobuki_ros_interfaces__msg__ExternalPower.
typedef struct kobuki_ros_interfaces__msg__ExternalPower__Sequence
{
  kobuki_ros_interfaces__msg__ExternalPower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__ExternalPower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__EXTERNAL_POWER__STRUCT_H_
