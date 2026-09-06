// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#include "agri_interfaces/msg/detail/robot_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_agri_interfaces
const rosidl_type_hash_t *
agri_interfaces__msg__RobotCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x9a, 0xf9, 0xa2, 0x5b, 0x83, 0x06, 0xa0,
      0x06, 0xb7, 0x93, 0xca, 0xff, 0x53, 0x84, 0x80,
      0xdb, 0xc0, 0x32, 0xf2, 0x2d, 0x05, 0x64, 0xee,
      0x27, 0x11, 0x82, 0xde, 0x11, 0xcc, 0xa3, 0xfc,
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

static char agri_interfaces__msg__RobotCommand__TYPE_NAME[] = "agri_interfaces/msg/RobotCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char agri_interfaces__msg__RobotCommand__FIELD_NAME__timestamp[] = "timestamp";
static char agri_interfaces__msg__RobotCommand__FIELD_NAME__robot_id[] = "robot_id";
static char agri_interfaces__msg__RobotCommand__FIELD_NAME__command[] = "command";
static char agri_interfaces__msg__RobotCommand__FIELD_NAME__linear_speed[] = "linear_speed";
static char agri_interfaces__msg__RobotCommand__FIELD_NAME__angular_speed[] = "angular_speed";

static rosidl_runtime_c__type_description__Field agri_interfaces__msg__RobotCommand__FIELDS[] = {
  {
    {agri_interfaces__msg__RobotCommand__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__RobotCommand__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__RobotCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__RobotCommand__FIELD_NAME__linear_speed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agri_interfaces__msg__RobotCommand__FIELD_NAME__angular_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription agri_interfaces__msg__RobotCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agri_interfaces__msg__RobotCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agri_interfaces__msg__RobotCommand__TYPE_NAME, 32, 32},
      {agri_interfaces__msg__RobotCommand__FIELDS, 5, 5},
    },
    {agri_interfaces__msg__RobotCommand__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time timestamp\n"
  "string robot_id\n"
  "string command\n"
  "float32 linear_speed\n"
  "float32 angular_speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
agri_interfaces__msg__RobotCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agri_interfaces__msg__RobotCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agri_interfaces__msg__RobotCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agri_interfaces__msg__RobotCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
