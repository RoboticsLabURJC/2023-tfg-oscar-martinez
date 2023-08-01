// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/DigitalOutput.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/digital_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kobuki_ros_interfaces__msg__DigitalOutput__init(kobuki_ros_interfaces__msg__DigitalOutput * msg)
{
  if (!msg) {
    return false;
  }
  // values
  // mask
  return true;
}

void
kobuki_ros_interfaces__msg__DigitalOutput__fini(kobuki_ros_interfaces__msg__DigitalOutput * msg)
{
  if (!msg) {
    return;
  }
  // values
  // mask
}

bool
kobuki_ros_interfaces__msg__DigitalOutput__are_equal(const kobuki_ros_interfaces__msg__DigitalOutput * lhs, const kobuki_ros_interfaces__msg__DigitalOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // values
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->values[i] != rhs->values[i]) {
      return false;
    }
  }
  // mask
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->mask[i] != rhs->mask[i]) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DigitalOutput__copy(
  const kobuki_ros_interfaces__msg__DigitalOutput * input,
  kobuki_ros_interfaces__msg__DigitalOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // values
  for (size_t i = 0; i < 4; ++i) {
    output->values[i] = input->values[i];
  }
  // mask
  for (size_t i = 0; i < 4; ++i) {
    output->mask[i] = input->mask[i];
  }
  return true;
}

kobuki_ros_interfaces__msg__DigitalOutput *
kobuki_ros_interfaces__msg__DigitalOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalOutput * msg = (kobuki_ros_interfaces__msg__DigitalOutput *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DigitalOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__DigitalOutput));
  bool success = kobuki_ros_interfaces__msg__DigitalOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__DigitalOutput__destroy(kobuki_ros_interfaces__msg__DigitalOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__DigitalOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__init(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalOutput * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__DigitalOutput *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__DigitalOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__DigitalOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__DigitalOutput__fini(&data[i - 1]);
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
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__fini(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array)
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
      kobuki_ros_interfaces__msg__DigitalOutput__fini(&array->data[i]);
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

kobuki_ros_interfaces__msg__DigitalOutput__Sequence *
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array = (kobuki_ros_interfaces__msg__DigitalOutput__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__DigitalOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__DigitalOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__destroy(kobuki_ros_interfaces__msg__DigitalOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__DigitalOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__are_equal(const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * lhs, const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DigitalOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__DigitalOutput__Sequence__copy(
  const kobuki_ros_interfaces__msg__DigitalOutput__Sequence * input,
  kobuki_ros_interfaces__msg__DigitalOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__DigitalOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__DigitalOutput * data =
      (kobuki_ros_interfaces__msg__DigitalOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__DigitalOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__DigitalOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__DigitalOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
