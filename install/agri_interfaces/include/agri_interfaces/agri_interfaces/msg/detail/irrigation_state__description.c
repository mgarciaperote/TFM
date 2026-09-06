// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from agri_interfaces:msg/IrrigationState.idl
// generated code does not contain a copyright notice

#include "agri_interfaces/msg/detail/irrigation_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_agri_interfaces
const rosidl_type_hash_t *
agri_interfaces__msg__IrrigationState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x66, 0x99, 0xbb, 0x10, 0x5d, 0xf4, 0x63,
      0xfd, 0xb4, 0x06, 0xaa, 0xf5, 0x2a, 0xef, 0xc6,
      0x25, 0x5e, 0x69, 0xc3, 0x5f, 0xa6, 0x4c, 0x61,
      0x1b, 0x51, 0x80, 0x19, 0x76, 0xd1, 0xf7, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char agri_interfaces__msg__IrrigationState__TYPE_NAME[] = "agri_interfaces/msg/IrrigationState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__sensor_timestamp[] = "sensor_timestamp";
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__command_timestamp[] = "command_timestamp";
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__state_timestamp[] = "state_timestamp";
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__actuator_id[] = "actuator_id";
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__active[] = "active";
static char agri_interfaces__msg__IrrigationState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field agri_interfaces__msg__IrrigationState__FIELDS[] = {
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__sensor_timestamp, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__command_timestamp, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__state_timestamp, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__actuator_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__active, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__IrrigationState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription agri_interfaces__msg__IrrigationState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agri_interfaces__msg__IrrigationState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agri_interfaces__msg__IrrigationState__TYPE_NAME, 35, 35},
      {agri_interfaces__msg__IrrigationState__FIELDS, 6, 6},
    },
    {agri_interfaces__msg__IrrigationState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time sensor_timestamp\n"
  "builtin_interfaces/Time command_timestamp\n"
  "builtin_interfaces/Time state_timestamp\n"
  "string actuator_id\n"
  "bool active\n"
  "string state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
agri_interfaces__msg__IrrigationState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agri_interfaces__msg__IrrigationState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 166, 166},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agri_interfaces__msg__IrrigationState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agri_interfaces__msg__IrrigationState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
