// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/DockInfraRed.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/dock_infra_red__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kobuki_ros_interfaces__msg__DockInfraRed__init(kobuki_ros_interfaces__msg__DockInfraRed * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kobuki_ros_interfaces__msg__DockInfraRed__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    kobuki_ros_interfaces__msg__DockInfraRed__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__msg__DockInfraRed__fini(kobuki_ros_interfaces__msg__DockInfraRed * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
kobuki_ros_interfaces__msg__DockInfraRed__are_equal(const kobuki_ros_interfaces__msg__DockInfraRed * lhs, const kobuki_ros_interfaces__msg__DockInfraRed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DockInfraRed__copy(
  const kobuki_ros_interfaces__msg__DockInfraRed * input,
  kobuki_ros_interfaces__msg__DockInfraRed * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__msg__DockInfraRed *
kobuki_ros_interfaces__msg__DockInfraRed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DockInfraRed * msg = (kobuki_ros_interfaces__msg__DockInfraRed *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DockInfraRed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__DockInfraRed));
  bool success = kobuki_ros_interfaces__msg__DockInfraRed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__DockInfraRed__destroy(kobuki_ros_interfaces__msg__DockInfraRed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__DockInfraRed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__init(kobuki_ros_interfaces__msg__DockInfraRed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DockInfraRed * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__DockInfraRed *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__DockInfraRed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__DockInfraRed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__DockInfraRed__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__fini(kobuki_ros_interfaces__msg__DockInfraRed__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kobuki_ros_interfaces__msg__DockInfraRed__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kobuki_ros_interfaces__msg__DockInfraRed__Sequence *
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DockInfraRed__Sequence * array = (kobuki_ros_interfaces__msg__DockInfraRed__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DockInfraRed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__DockInfraRed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__destroy(kobuki_ros_interfaces__msg__DockInfraRed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__DockInfraRed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__are_equal(const kobuki_ros_interfaces__msg__DockInfraRed__Sequence * lhs, const kobuki_ros_interfaces__msg__DockInfraRed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DockInfraRed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DockInfraRed__Sequence__copy(
  const kobuki_ros_interfaces__msg__DockInfraRed__Sequence * input,
  kobuki_ros_interfaces__msg__DockInfraRed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__DockInfraRed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__DockInfraRed * data =
      (kobuki_ros_interfaces__msg__DockInfraRed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__DockInfraRed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__DockInfraRed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DockInfraRed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
