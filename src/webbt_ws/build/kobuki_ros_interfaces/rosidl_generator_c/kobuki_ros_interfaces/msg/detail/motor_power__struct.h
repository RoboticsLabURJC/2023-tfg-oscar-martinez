// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kobuki_ros_interfaces:msg/MotorPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__STRUCT_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
/**
  * State
 */
enum
{
  kobuki_ros_interfaces__msg__MotorPower__OFF = 0
};

/// Constant 'ON'.
enum
{
  kobuki_ros_interfaces__msg__MotorPower__ON = 1
};

/// Struct defined in msg/MotorPower in the package kobuki_ros_interfaces.
/**
  * Turn on/off Kobuki's motors
 */
typedef struct kobuki_ros_interfaces__msg__MotorPower
{
  uint8_t state;
} kobuki_ros_interfaces__msg__MotorPower;

// Struct for a sequence of kobuki_ros_interfaces__msg__MotorPower.
typedef struct kobuki_ros_interfaces__msg__MotorPower__Sequence
{
  kobuki_ros_interfaces__msg__MotorPower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kobuki_ros_interfaces__msg__MotorPower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__STRUCT_H_
