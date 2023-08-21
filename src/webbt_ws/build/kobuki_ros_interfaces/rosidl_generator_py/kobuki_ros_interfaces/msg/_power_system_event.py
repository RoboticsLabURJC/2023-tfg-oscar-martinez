# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerSystemEvent(type):
    """Metaclass of message 'PowerSystemEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNPLUGGED': 0,
        'PLUGGED_TO_ADAPTER': 1,
        'PLUGGED_TO_DOCKBASE': 2,
        'CHARGE_COMPLETED': 3,
        'BATTERY_LOW': 4,
        'BATTERY_CRITICAL': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kobuki_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kobuki_ros_interfaces.msg.PowerSystemEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_system_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_system_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_system_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_system_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_system_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNPLUGGED': cls.__constants['UNPLUGGED'],
            'PLUGGED_TO_ADAPTER': cls.__constants['PLUGGED_TO_ADAPTER'],
            'PLUGGED_TO_DOCKBASE': cls.__constants['PLUGGED_TO_DOCKBASE'],
            'CHARGE_COMPLETED': cls.__constants['CHARGE_COMPLETED'],
            'BATTERY_LOW': cls.__constants['BATTERY_LOW'],
            'BATTERY_CRITICAL': cls.__constants['BATTERY_CRITICAL'],
        }

    @property
    def UNPLUGGED(self):
        """Message constant 'UNPLUGGED'."""
        return Metaclass_PowerSystemEvent.__constants['UNPLUGGED']

    @property
    def PLUGGED_TO_ADAPTER(self):
        """Message constant 'PLUGGED_TO_ADAPTER'."""
        return Metaclass_PowerSystemEvent.__constants['PLUGGED_TO_ADAPTER']

    @property
    def PLUGGED_TO_DOCKBASE(self):
        """Message constant 'PLUGGED_TO_DOCKBASE'."""
        return Metaclass_PowerSystemEvent.__constants['PLUGGED_TO_DOCKBASE']

    @property
    def CHARGE_COMPLETED(self):
        """Message constant 'CHARGE_COMPLETED'."""
        return Metaclass_PowerSystemEvent.__constants['CHARGE_COMPLETED']

    @property
    def BATTERY_LOW(self):
        """Message constant 'BATTERY_LOW'."""
        return Metaclass_PowerSystemEvent.__constants['BATTERY_LOW']

    @property
    def BATTERY_CRITICAL(self):
        """Message constant 'BATTERY_CRITICAL'."""
        return Metaclass_PowerSystemEvent.__constants['BATTERY_CRITICAL']


class PowerSystemEvent(metaclass=Metaclass_PowerSystemEvent):
    """
    Message class 'PowerSystemEvent'.

    Constants:
      UNPLUGGED
      PLUGGED_TO_ADAPTER
      PLUGGED_TO_DOCKBASE
      CHARGE_COMPLETED
      BATTERY_LOW
      BATTERY_CRITICAL
    """

    __slots__ = [
        '_event',
    ]

    _fields_and_field_types = {
        'event': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.event = kwargs.get('event', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.event != other.event:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event' field must be an unsigned integer in [0, 255]"
        self._event = value
