// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice
#include "agri_interfaces/msg/detail/irrigation_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_timestamp`
// Member `command_timestamp`
// Member `state_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `actuator_id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
agri_interfaces__msg__IrrigationState__init(agri_interfaces__msg__IrrigationState * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->sensor_timestamp)) {
    agri_interfaces__msg__IrrigationState__fini(msg);
    return false;
  }
  // command_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->command_timestamp)) {
    agri_interfaces__msg__IrrigationState__fini(msg);
    return false;
  }
  // state_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->state_timestamp)) {
    agri_interfaces__msg__IrrigationState__fini(msg);
    return false;
  }
  // actuator_id
  if (!rosidl_runtime_c__String__init(&msg->actuator_id)) {
    agri_interfaces__msg__IrrigationState__fini(msg);
    return false;
  }
  // active
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    agri_interfaces__msg__IrrigationState__fini(msg);
    return false;
  }
  return true;
}

void
agri_interfaces__msg__IrrigationState__fini(agri_interfaces__msg__IrrigationState * msg)
{
  if (!msg) {
    return;
  }
  // sensor_timestamp
  builtin_interfaces__msg__Time__fini(&msg->sensor_timestamp);
  // command_timestamp
  builtin_interfaces__msg__Time__fini(&msg->command_timestamp);
  // state_timestamp
  builtin_interfaces__msg__Time__fini(&msg->state_timestamp);
  // actuator_id
  rosidl_runtime_c__String__fini(&msg->actuator_id);
  // active
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
agri_interfaces__msg__IrrigationState__are_equal(const agri_interfaces__msg__IrrigationState * lhs, const agri_interfaces__msg__IrrigationState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->sensor_timestamp), &(rhs->sensor_timestamp)))
  {
    return false;
  }
  // command_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->command_timestamp), &(rhs->command_timestamp)))
  {
    return false;
  }
  // state_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->state_timestamp), &(rhs->state_timestamp)))
  {
    return false;
  }
  // actuator_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->actuator_id), &(rhs->actuator_id)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
agri_interfaces__msg__IrrigationState__copy(
  const agri_interfaces__msg__IrrigationState * input,
  agri_interfaces__msg__IrrigationState * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->sensor_timestamp), &(output->sensor_timestamp)))
  {
    return false;
  }
  // command_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->command_timestamp), &(output->command_timestamp)))
  {
    return false;
  }
  // state_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->state_timestamp), &(output->state_timestamp)))
  {
    return false;
  }
  // actuator_id
  if (!rosidl_runtime_c__String__copy(
      &(input->actuator_id), &(output->actuator_id)))
  {
    return false;
  }
  // active
  output->active = input->active;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

agri_interfaces__msg__IrrigationState *
agri_interfaces__msg__IrrigationState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__IrrigationState * msg = (agri_interfaces__msg__IrrigationState *)allocator.allocate(sizeof(agri_interfaces__msg__IrrigationState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agri_interfaces__msg__IrrigationState));
  bool success = agri_interfaces__msg__IrrigationState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agri_interfaces__msg__IrrigationState__destroy(agri_interfaces__msg__IrrigationState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agri_interfaces__msg__IrrigationState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agri_interfaces__msg__IrrigationState__Sequence__init(agri_interfaces__msg__IrrigationState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__IrrigationState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(agri_interfaces__msg__IrrigationState)) {
      return false;
    }
    data = (agri_interfaces__msg__IrrigationState *)allocator.zero_allocate(size, sizeof(agri_interfaces__msg__IrrigationState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agri_interfaces__msg__IrrigationState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agri_interfaces__msg__IrrigationState__fini(&data[i - 1]);
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
agri_interfaces__msg__IrrigationState__Sequence__fini(agri_interfaces__msg__IrrigationState__Sequence * array)
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
      agri_interfaces__msg__IrrigationState__fini(&array->data[i]);
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

agri_interfaces__msg__IrrigationState__Sequence *
agri_interfaces__msg__IrrigationState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__IrrigationState__Sequence * array = (agri_interfaces__msg__IrrigationState__Sequence *)allocator.allocate(sizeof(agri_interfaces__msg__IrrigationState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agri_interfaces__msg__IrrigationState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agri_interfaces__msg__IrrigationState__Sequence__destroy(agri_interfaces__msg__IrrigationState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agri_interfaces__msg__IrrigationState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agri_interfaces__msg__IrrigationState__Sequence__are_equal(const agri_interfaces__msg__IrrigationState__Sequence * lhs, const agri_interfaces__msg__IrrigationState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agri_interfaces__msg__IrrigationState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agri_interfaces__msg__IrrigationState__Sequence__copy(
  const agri_interfaces__msg__IrrigationState__Sequence * input,
  agri_interfaces__msg__IrrigationState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(agri_interfaces__msg__IrrigationState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(agri_interfaces__msg__IrrigationState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agri_interfaces__msg__IrrigationState * data =
      (agri_interfaces__msg__IrrigationState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agri_interfaces__msg__IrrigationState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agri_interfaces__msg__IrrigationState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agri_interfaces__msg__IrrigationState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
