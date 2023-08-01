// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__FUNCTIONS_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kobuki_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kobuki_ros_interfaces/msg/detail/digital_output__struct.h"

/// Initialize msg/DigitalOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__msg__DigitalOutput
 * )) before or use
 * kobuki_ros_interfaces__msg__DigitalOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__DigitalOutput__init(kobuki_ros_interfaces__msg__DigitalOutput * msg);

/// Finalize msg/DigitalOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__DigitalOutput__fini(kobuki_ros_interfaces__msg__DigitalOutput * msg);

/// Create msg/DigitalOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__msg__DigitalOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__DigitalOutput *
kobuki_ros_interfaces__msg__DigitalOutput__create();

/// Destroy msg/DigitalOutput message.
/**
 * It calls
 * kobuki_ros_interfaces__msg__DigitalOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__DigitalOutput__destroy(kobuki_ros_interfaces__msg__DigitalOutput * msg);

/// Check for msg/DigitalOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__DigitalOutput__are_equal(const kobuki_ros_interfaces__msg__DigitalOutput * lhs, const kobuki_ros_interfaces__msg__DigitalOutput * rhs);

/// Copy a msg/DigitalOutput message.
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
kobuki_ros_interfaces__msg__DigitalOutput__copy(
  const kobuki_ros_interfaces__msg__DigitalOutput * input,
  kobuki_ros_interfaces__msg__DigitalOutput * output);

/// Initialize array of msg/DigitalOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__msg__DigitalOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__init(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array, size_t size);

/// Finalize array of msg/DigitalOutput messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__DigitalOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__fini(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array);

/// Create array of msg/DigitalOutput messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__msg__DigitalOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__DigitalOutput__Sequence *
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__create(size_t size);

/// Destroy array of msg/DigitalOutput messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__DigitalOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__destroy(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array);

/// Check for msg/DigitalOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__are_equal(const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * lhs, const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * rhs);

/// Copy an array of msg/DigitalOutput messages.
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
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__copy(
  const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * input,
  kobuki_ros_interfaces__msg__DigitalOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__DIGITAL_OUTPUT__FUNCTIONS_H_
