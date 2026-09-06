# generated from rosidl_generator_py/resource/_idl.py.em
# with input from agri_interfaces:msg/IrrigationState.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


if typing.TYPE_CHECKING:
    import builtin_interfaces.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IrrigationState(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'IrrigationState'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class IrrigationStateConstants(typing.TypedDict):
        pass

    __constants: IrrigationStateConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('agri_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'agri_interfaces.msg.IrrigationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__irrigation_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__irrigation_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__irrigation_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__irrigation_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__irrigation_state

            from builtin_interfaces.msg import Time
            if Time._TYPE_SUPPORT is None:
                Time.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IrrigationState(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_IrrigationState):
    """Message class 'IrrigationState'."""

    __slots__ = [
        '_sensor_timestamp',
        '_command_timestamp',
        '_state_timestamp',
        '_actuator_id',
        '_active',
        '_state',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'sensor_timestamp': 'builtin_interfaces/Time',
        'command_timestamp': 'builtin_interfaces/Time',
        'state_timestamp': 'builtin_interfaces/Time',
        'actuator_id': 'string',
        'active': 'boolean',
        'state': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, *,
                 sensor_timestamp: typing.Optional[builtin_interfaces.msg.Time] = None,  # noqa: E501
                 command_timestamp: typing.Optional[builtin_interfaces.msg.Time] = None,  # noqa: E501
                 state_timestamp: typing.Optional[builtin_interfaces.msg.Time] = None,  # noqa: E501
                 actuator_id: typing.Optional[str] = None,  # noqa: E501
                 active: typing.Optional[bool] = None,  # noqa: E501
                 state: typing.Optional[str] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from builtin_interfaces.msg import Time
        self.sensor_timestamp = sensor_timestamp if sensor_timestamp is not None else Time()
        from builtin_interfaces.msg import Time
        self.command_timestamp = command_timestamp if command_timestamp is not None else Time()
        from builtin_interfaces.msg import Time
        self.state_timestamp = state_timestamp if state_timestamp is not None else Time()
        self.actuator_id = actuator_id if actuator_id is not None else str()
        self.active = active if active is not None else bool()
        self.state = state if state is not None else str()

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, IrrigationState):
            return False
        if self.sensor_timestamp != other.sensor_timestamp:
            return False
        if self.command_timestamp != other.command_timestamp:
            return False
        if self.state_timestamp != other.state_timestamp:
            return False
        if self.actuator_id != other.actuator_id:
            return False
        if self.active != other.active:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_timestamp(self) -> builtin_interfaces.msg.Time:
        """Message field 'sensor_timestamp'."""
        return self._sensor_timestamp

    @sensor_timestamp.setter
    def sensor_timestamp(self, value: builtin_interfaces.msg.Time) -> None:
        from builtin_interfaces.msg import Time

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Time), \
                    "The 'sensor_timestamp' field must be a sub message of type 'Time'"

        self._sensor_timestamp = value

    @builtins.property
    def command_timestamp(self) -> builtin_interfaces.msg.Time:
        """Message field 'command_timestamp'."""
        return self._command_timestamp

    @command_timestamp.setter
    def command_timestamp(self, value: builtin_interfaces.msg.Time) -> None:
        from builtin_interfaces.msg import Time

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Time), \
                    "The 'command_timestamp' field must be a sub message of type 'Time'"

        self._command_timestamp = value

    @builtins.property
    def state_timestamp(self) -> builtin_interfaces.msg.Time:
        """Message field 'state_timestamp'."""
        return self._state_timestamp

    @state_timestamp.setter
    def state_timestamp(self, value: builtin_interfaces.msg.Time) -> None:
        from builtin_interfaces.msg import Time

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Time), \
                    "The 'state_timestamp' field must be a sub message of type 'Time'"

        self._state_timestamp = value

    @builtins.property
    def actuator_id(self) -> str:
        """Message field 'actuator_id'."""
        return self._actuator_id

    @actuator_id.setter
    def actuator_id(self, value: str) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, str), \
                    "The 'actuator_id' field must be of type 'str'"

        self._actuator_id = value

    @builtins.property
    def active(self) -> bool:
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value: bool) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, bool), \
                    "The 'active' field must be of type 'bool'"

        self._active = value

    @builtins.property
    def state(self) -> str:
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value: str) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, str), \
                    "The 'state' field must be of type 'str'"

        self._state = value
