// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agri_interfaces:msg/SoilMoisture.idl
// generated code does not contain a copyright notice
#include "agri_interfaces/msg/detail/soil_moisture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sensor_id`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"

bool
agri_interfaces__msg__SoilMoisture__init(agri_interfaces__msg__SoilMoisture * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    agri_interfaces__msg__SoilMoisture__fini(msg);
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__init(&msg->sensor_id)) {
    agri_interfaces__msg__SoilMoisture__fini(msg);
    return false;
  }
  // moisture
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    agri_interfaces__msg__SoilMoisture__fini(msg);
    return false;
  }
  return true;
}

void
agri_interfaces__msg__SoilMoisture__fini(agri_interfaces__msg__SoilMoisture * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // sensor_id
  rosidl_runtime_c__String__fini(&msg->sensor_id);
  // moisture
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
}

bool
agri_interfaces__msg__SoilMoisture__are_equal(const agri_interfaces__msg__SoilMoisture * lhs, const agri_interfaces__msg__SoilMoisture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  // moisture
  if (lhs->moisture != rhs->moisture) {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  return true;
}

bool
agri_interfaces__msg__SoilMoisture__copy(
  const agri_interfaces__msg__SoilMoisture * input,
  agri_interfaces__msg__SoilMoisture * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  // moisture
  output->moisture = input->moisture;
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  return true;
}

agri_interfaces__msg__SoilMoisture *
agri_interfaces__msg__SoilMoisture__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__SoilMoisture * msg = (agri_interfaces__msg__SoilMoisture *)allocator.allocate(sizeof(agri_interfaces__msg__SoilMoisture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agri_interfaces__msg__SoilMoisture));
  bool success = agri_interfaces__msg__SoilMoisture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agri_interfaces__msg__SoilMoisture__destroy(agri_interfaces__msg__SoilMoisture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agri_interfaces__msg__SoilMoisture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agri_interfaces__msg__SoilMoisture__Sequence__init(agri_interfaces__msg__SoilMoisture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__SoilMoisture * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(agri_interfaces__msg__SoilMoisture)) {
      return false;
    }
    data = (agri_interfaces__msg__SoilMoisture *)allocator.zero_allocate(size, sizeof(agri_interfaces__msg__SoilMoisture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agri_interfaces__msg__SoilMoisture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agri_interfaces__msg__SoilMoisture__fini(&data[i - 1]);
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
agri_interfaces__msg__SoilMoisture__Sequence__fini(agri_interfaces__msg__SoilMoisture__Sequence * array)
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
      agri_interfaces__msg__SoilMoisture__fini(&array->data[i]);
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

agri_interfaces__msg__SoilMoisture__Sequence *
agri_interfaces__msg__SoilMoisture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__SoilMoisture__Sequence * array = (agri_interfaces__msg__SoilMoisture__Sequence *)allocator.allocate(sizeof(agri_interfaces__msg__SoilMoisture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agri_interfaces__msg__SoilMoisture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agri_interfaces__msg__SoilMoisture__Sequence__destroy(agri_interfaces__msg__SoilMoisture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agri_interfaces__msg__SoilMoisture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agri_interfaces__msg__SoilMoisture__Sequence__are_equal(const agri_interfaces__msg__SoilMoisture__Sequence * lhs, const agri_interfaces__msg__SoilMoisture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agri_interfaces__msg__SoilMoisture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agri_interfaces__msg__SoilMoisture__Sequence__copy(
  const agri_interfaces__msg__SoilMoisture__Sequence * input,
  agri_interfaces__msg__SoilMoisture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(agri_interfaces__msg__SoilMoisture)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(agri_interfaces__msg__SoilMoisture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agri_interfaces__msg__SoilMoisture * data =
      (agri_interfaces__msg__SoilMoisture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agri_interfaces__msg__SoilMoisture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agri_interfaces__msg__SoilMoisture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agri_interfaces__msg__SoilMoisture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
