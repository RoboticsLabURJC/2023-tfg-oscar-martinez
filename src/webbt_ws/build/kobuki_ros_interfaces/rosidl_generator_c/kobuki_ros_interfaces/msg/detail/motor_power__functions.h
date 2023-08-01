// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kobuki_ros_interfaces:msg/MotorPower.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__FUNCTIONS_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kobuki_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kobuki_ros_interfaces/msg/detail/motor_power__struct.h"

/// Initialize msg/MotorPower message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__msg__MotorPower
 * )) before or use
 * kobuki_ros_interfaces__msg__MotorPower__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__init(kobuki_ros_interfaces__msg__MotorPower * msg);

/// Finalize msg/MotorPower message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__MotorPower__fini(kobuki_ros_interfaces__msg__MotorPower * msg);

/// Create msg/MotorPower message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__msg__MotorPower__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__MotorPower *
kobuki_ros_interfaces__msg__MotorPower__create();

/// Destroy msg/MotorPower message.
/**
 * It calls
 * kobuki_ros_interfaces__msg__MotorPower__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__MotorPower__destroy(kobuki_ros_interfaces__msg__MotorPower * msg);

/// Check for msg/MotorPower message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__are_equal(const kobuki_ros_interfaces__msg__MotorPower * lhs, const kobuki_ros_interfaces__msg__MotorPower * rhs);

/// Copy a msg/MotorPower message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__copy(
  const kobuki_ros_interfaces__msg__MotorPower * input,
  kobuki_ros_interfaces__msg__MotorPower * output);

/// Initialize array of msg/MotorPower messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__msg__MotorPower__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__Sequence__init(kobuki_ros_interfaces__msg__MotorPower__Sequence * array, size_t size);

/// Finalize array of msg/MotorPower messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__MotorPower__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__MotorPower__Sequence__fini(kobuki_ros_interfaces__msg__MotorPower__Sequence * array);

/// Create array of msg/MotorPower messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__msg__MotorPower__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__MotorPower__Sequence *
kobuki_ros_interfaces__msg__MotorPower__Sequence__create(size_t size);

/// Destroy array of msg/MotorPower messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__MotorPower__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__MotorPower__Sequence__destroy(kobuki_ros_interfaces__msg__MotorPower__Sequence * array);

/// Check for msg/MotorPower message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__Sequence__are_equal(const kobuki_ros_interfaces__msg__MotorPower__Sequence * lhs, const kobuki_ros_interfaces__msg__MotorPower__Sequence * rhs);

/// Copy an array of msg/MotorPower messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__MotorPower__Sequence__copy(
  const kobuki_ros_interfaces__msg__MotorPower__Sequence * input,
  kobuki_ros_interfaces__msg__MotorPower__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__MOTOR_POWER__FUNCTIONS_H_
