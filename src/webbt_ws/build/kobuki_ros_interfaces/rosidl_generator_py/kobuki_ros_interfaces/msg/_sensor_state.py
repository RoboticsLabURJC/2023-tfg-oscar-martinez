# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kobuki_ros_interfaces:msg/SensorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bottom'
# Member 'current'
# Member 'analog_input'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorState(type):
    """Metaclass of message 'SensorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BUMPER_RIGHT': 1,
        'BUMPER_CENTRE': 2,
        'BUMPER_LEFT': 4,
        'WHEEL_DROP_RIGHT': 1,
        'WHEEL_DROP_LEFT': 2,
        'CLIFF_RIGHT': 1,
        'CLIFF_CENTRE': 2,
        'CLIFF_LEFT': 4,
        'BUTTON0': 1,
        'BUTTON1': 2,
        'BUTTON2': 4,
        'DISCHARGING': 0,
        'DOCKING_CHARGED': 2,
        'DOCKING_CHARGING': 6,
        'ADAPTER_CHARGED': 18,
        'ADAPTER_CHARGING': 22,
        'OVER_CURRENT_LEFT_WHEEL': 1,
        'OVER_CURRENT_RIGHT_WHEEL': 2,
        'OVER_CURRENT_BOTH_WHEELS': 3,
        'DIGITAL_INPUT0': 1,
        'DIGITAL_INPUT1': 2,
        'DIGITAL_INPUT2': 4,
        'DIGITAL_INPUT3': 8,
        'DB25_TEST_BOARD_CONNECTED': 64,
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
                'kobuki_ros_interfaces.msg.SensorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BUMPER_RIGHT': cls.__constants['BUMPER_RIGHT'],
            'BUMPER_CENTRE': cls.__constants['BUMPER_CENTRE'],
            'BUMPER_LEFT': cls.__constants['BUMPER_LEFT'],
            'WHEEL_DROP_RIGHT': cls.__constants['WHEEL_DROP_RIGHT'],
            'WHEEL_DROP_LEFT': cls.__constants['WHEEL_DROP_LEFT'],
            'CLIFF_RIGHT': cls.__constants['CLIFF_RIGHT'],
            'CLIFF_CENTRE': cls.__constants['CLIFF_CENTRE'],
            'CLIFF_LEFT': cls.__constants['CLIFF_LEFT'],
            'BUTTON0': cls.__constants['BUTTON0'],
            'BUTTON1': cls.__constants['BUTTON1'],
            'BUTTON2': cls.__constants['BUTTON2'],
            'DISCHARGING': cls.__constants['DISCHARGING'],
            'DOCKING_CHARGED': cls.__constants['DOCKING_CHARGED'],
            'DOCKING_CHARGING': cls.__constants['DOCKING_CHARGING'],
            'ADAPTER_CHARGED': cls.__constants['ADAPTER_CHARGED'],
            'ADAPTER_CHARGING': cls.__constants['ADAPTER_CHARGING'],
            'OVER_CURRENT_LEFT_WHEEL': cls.__constants['OVER_CURRENT_LEFT_WHEEL'],
            'OVER_CURRENT_RIGHT_WHEEL': cls.__constants['OVER_CURRENT_RIGHT_WHEEL'],
            'OVER_CURRENT_BOTH_WHEELS': cls.__constants['OVER_CURRENT_BOTH_WHEELS'],
            'DIGITAL_INPUT0': cls.__constants['DIGITAL_INPUT0'],
            'DIGITAL_INPUT1': cls.__constants['DIGITAL_INPUT1'],
            'DIGITAL_INPUT2': cls.__constants['DIGITAL_INPUT2'],
            'DIGITAL_INPUT3': cls.__constants['DIGITAL_INPUT3'],
            'DB25_TEST_BOARD_CONNECTED': cls.__constants['DB25_TEST_BOARD_CONNECTED'],
        }

    @property
    def BUMPER_RIGHT(self):
        """Message constant 'BUMPER_RIGHT'."""
        return Metaclass_SensorState.__constants['BUMPER_RIGHT']

    @property
    def BUMPER_CENTRE(self):
        """Message constant 'BUMPER_CENTRE'."""
        return Metaclass_SensorState.__constants['BUMPER_CENTRE']

    @property
    def BUMPER_LEFT(self):
        """Message constant 'BUMPER_LEFT'."""
        return Metaclass_SensorState.__constants['BUMPER_LEFT']

    @property
    def WHEEL_DROP_RIGHT(self):
        """Message constant 'WHEEL_DROP_RIGHT'."""
        return Metaclass_SensorState.__constants['WHEEL_DROP_RIGHT']

    @property
    def WHEEL_DROP_LEFT(self):
        """Message constant 'WHEEL_DROP_LEFT'."""
        return Metaclass_SensorState.__constants['WHEEL_DROP_LEFT']

    @property
    def CLIFF_RIGHT(self):
        """Message constant 'CLIFF_RIGHT'."""
        return Metaclass_SensorState.__constants['CLIFF_RIGHT']

    @property
    def CLIFF_CENTRE(self):
        """Message constant 'CLIFF_CENTRE'."""
        return Metaclass_SensorState.__constants['CLIFF_CENTRE']

    @property
    def CLIFF_LEFT(self):
        """Message constant 'CLIFF_LEFT'."""
        return Metaclass_SensorState.__constants['CLIFF_LEFT']

    @property
    def BUTTON0(self):
        """Message constant 'BUTTON0'."""
        return Metaclass_SensorState.__constants['BUTTON0']

    @property
    def BUTTON1(self):
        """Message constant 'BUTTON1'."""
        return Metaclass_SensorState.__constants['BUTTON1']

    @property
    def BUTTON2(self):
        """Message constant 'BUTTON2'."""
        return Metaclass_SensorState.__constants['BUTTON2']

    @property
    def DISCHARGING(self):
        """Message constant 'DISCHARGING'."""
        return Metaclass_SensorState.__constants['DISCHARGING']

    @property
    def DOCKING_CHARGED(self):
        """Message constant 'DOCKING_CHARGED'."""
        return Metaclass_SensorState.__constants['DOCKING_CHARGED']

    @property
    def DOCKING_CHARGING(self):
        """Message constant 'DOCKING_CHARGING'."""
        return Metaclass_SensorState.__constants['DOCKING_CHARGING']

    @property
    def ADAPTER_CHARGED(self):
        """Message constant 'ADAPTER_CHARGED'."""
        return Metaclass_SensorState.__constants['ADAPTER_CHARGED']

    @property
    def ADAPTER_CHARGING(self):
        """Message constant 'ADAPTER_CHARGING'."""
        return Metaclass_SensorState.__constants['ADAPTER_CHARGING']

    @property
    def OVER_CURRENT_LEFT_WHEEL(self):
        """Message constant 'OVER_CURRENT_LEFT_WHEEL'."""
        return Metaclass_SensorState.__constants['OVER_CURRENT_LEFT_WHEEL']

    @property
    def OVER_CURRENT_RIGHT_WHEEL(self):
        """Message constant 'OVER_CURRENT_RIGHT_WHEEL'."""
        return Metaclass_SensorState.__constants['OVER_CURRENT_RIGHT_WHEEL']

    @property
    def OVER_CURRENT_BOTH_WHEELS(self):
        """Message constant 'OVER_CURRENT_BOTH_WHEELS'."""
        return Metaclass_SensorState.__constants['OVER_CURRENT_BOTH_WHEELS']

    @property
    def DIGITAL_INPUT0(self):
        """Message constant 'DIGITAL_INPUT0'."""
        return Metaclass_SensorState.__constants['DIGITAL_INPUT0']

    @property
    def DIGITAL_INPUT1(self):
        """Message constant 'DIGITAL_INPUT1'."""
        return Metaclass_SensorState.__constants['DIGITAL_INPUT1']

    @property
    def DIGITAL_INPUT2(self):
        """Message constant 'DIGITAL_INPUT2'."""
        return Metaclass_SensorState.__constants['DIGITAL_INPUT2']

    @property
    def DIGITAL_INPUT3(self):
        """Message constant 'DIGITAL_INPUT3'."""
        return Metaclass_SensorState.__constants['DIGITAL_INPUT3']

    @property
    def DB25_TEST_BOARD_CONNECTED(self):
        """Message constant 'DB25_TEST_BOARD_CONNECTED'."""
        return Metaclass_SensorState.__constants['DB25_TEST_BOARD_CONNECTED']


class SensorState(metaclass=Metaclass_SensorState):
    """
    Message class 'SensorState'.

    Constants:
      BUMPER_RIGHT
      BUMPER_CENTRE
      BUMPER_LEFT
      WHEEL_DROP_RIGHT
      WHEEL_DROP_LEFT
      CLIFF_RIGHT
      CLIFF_CENTRE
      CLIFF_LEFT
      BUTTON0
      BUTTON1
      BUTTON2
      DISCHARGING
      DOCKING_CHARGED
      DOCKING_CHARGING
      ADAPTER_CHARGED
      ADAPTER_CHARGING
      OVER_CURRENT_LEFT_WHEEL
      OVER_CURRENT_RIGHT_WHEEL
      OVER_CURRENT_BOTH_WHEELS
      DIGITAL_INPUT0
      DIGITAL_INPUT1
      DIGITAL_INPUT2
      DIGITAL_INPUT3
      DB25_TEST_BOARD_CONNECTED
    """

    __slots__ = [
        '_header',
        '_time_stamp',
        '_bumper',
        '_wheel_drop',
        '_cliff',
        '_left_encoder',
        '_right_encoder',
        '_left_pwm',
        '_right_pwm',
        '_buttons',
        '_charger',
        '_battery',
        '_bottom',
        '_current',
        '_over_current',
        '_digital_input',
        '_analog_input',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint16',
        'bumper': 'uint8',
        'wheel_drop': 'uint8',
        'cliff': 'uint8',
        'left_encoder': 'uint16',
        'right_encoder': 'uint16',
        'left_pwm': 'int8',
        'right_pwm': 'int8',
        'buttons': 'uint8',
        'charger': 'uint8',
        'battery': 'uint8',
        'bottom': 'sequence<uint16>',
        'current': 'sequence<uint8>',
        'over_current': 'uint8',
        'digital_input': 'uint16',
        'analog_input': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        self.bumper = kwargs.get('bumper', int())
        self.wheel_drop = kwargs.get('wheel_drop', int())
        self.cliff = kwargs.get('cliff', int())
        self.left_encoder = kwargs.get('left_encoder', int())
        self.right_encoder = kwargs.get('right_encoder', int())
        self.left_pwm = kwargs.get('left_pwm', int())
        self.right_pwm = kwargs.get('right_pwm', int())
        self.buttons = kwargs.get('buttons', int())
        self.charger = kwargs.get('charger', int())
        self.battery = kwargs.get('battery', int())
        self.bottom = array.array('H', kwargs.get('bottom', []))
        self.current = array.array('B', kwargs.get('current', []))
        self.over_current = kwargs.get('over_current', int())
        self.digital_input = kwargs.get('digital_input', int())
        self.analog_input = array.array('H', kwargs.get('analog_input', []))

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
        if self.header != other.header:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.bumper != other.bumper:
            return False
        if self.wheel_drop != other.wheel_drop:
            return False
        if self.cliff != other.cliff:
            return False
        if self.left_encoder != other.left_encoder:
            return False
        if self.right_encoder != other.right_encoder:
            return False
        if self.left_pwm != other.left_pwm:
            return False
        if self.right_pwm != other.right_pwm:
            return False
        if self.buttons != other.buttons:
            return False
        if self.charger != other.charger:
            return False
        if self.battery != other.battery:
            return False
        if self.bottom != other.bottom:
            return False
        if self.current != other.current:
            return False
        if self.over_current != other.over_current:
            return False
        if self.digital_input != other.digital_input:
            return False
        if self.analog_input != other.analog_input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'time_stamp' field must be an unsigned integer in [0, 65535]"
        self._time_stamp = value

    @builtins.property
    def bumper(self):
        """Message field 'bumper'."""
        return self._bumper

    @bumper.setter
    def bumper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bumper' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bumper' field must be an unsigned integer in [0, 255]"
        self._bumper = value

    @builtins.property
    def wheel_drop(self):
        """Message field 'wheel_drop'."""
        return self._wheel_drop

    @wheel_drop.setter
    def wheel_drop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wheel_drop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wheel_drop' field must be an unsigned integer in [0, 255]"
        self._wheel_drop = value

    @builtins.property
    def cliff(self):
        """Message field 'cliff'."""
        return self._cliff

    @cliff.setter
    def cliff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cliff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cliff' field must be an unsigned integer in [0, 255]"
        self._cliff = value

    @builtins.property
    def left_encoder(self):
        """Message field 'left_encoder'."""
        return self._left_encoder

    @left_encoder.setter
    def left_encoder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_encoder' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_encoder' field must be an unsigned integer in [0, 65535]"
        self._left_encoder = value

    @builtins.property
    def right_encoder(self):
        """Message field 'right_encoder'."""
        return self._right_encoder

    @right_encoder.setter
    def right_encoder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_encoder' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_encoder' field must be an unsigned integer in [0, 65535]"
        self._right_encoder = value

    @builtins.property
    def left_pwm(self):
        """Message field 'left_pwm'."""
        return self._left_pwm

    @left_pwm.setter
    def left_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_pwm' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'left_pwm' field must be an integer in [-128, 127]"
        self._left_pwm = value

    @builtins.property
    def right_pwm(self):
        """Message field 'right_pwm'."""
        return self._right_pwm

    @right_pwm.setter
    def right_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_pwm' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'right_pwm' field must be an integer in [-128, 127]"
        self._right_pwm = value

    @builtins.property
    def buttons(self):
        """Message field 'buttons'."""
        return self._buttons

    @buttons.setter
    def buttons(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buttons' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'buttons' field must be an unsigned integer in [0, 255]"
        self._buttons = value

    @builtins.property
    def charger(self):
        """Message field 'charger'."""
        return self._charger

    @charger.setter
    def charger(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'charger' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'charger' field must be an unsigned integer in [0, 255]"
        self._charger = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery' field must be an unsigned integer in [0, 255]"
        self._battery = value

    @builtins.property
    def bottom(self):
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'bottom' array.array() must have the type code of 'H'"
            self._bottom = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'bottom' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._bottom = array.array('H', value)

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'current' array.array() must have the type code of 'B'"
            self._current = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'current' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._current = array.array('B', value)

    @builtins.property
    def over_current(self):
        """Message field 'over_current'."""
        return self._over_current

    @over_current.setter
    def over_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'over_current' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'over_current' field must be an unsigned integer in [0, 255]"
        self._over_current = value

    @builtins.property
    def digital_input(self):
        """Message field 'digital_input'."""
        return self._digital_input

    @digital_input.setter
    def digital_input(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'digital_input' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'digital_input' field must be an unsigned integer in [0, 65535]"
        self._digital_input = value

    @builtins.property
    def analog_input(self):
        """Message field 'analog_input'."""
        return self._analog_input

    @analog_input.setter
    def analog_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'analog_input' array.array() must have the type code of 'H'"
            self._analog_input = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'analog_input' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._analog_input = array.array('H', value)
