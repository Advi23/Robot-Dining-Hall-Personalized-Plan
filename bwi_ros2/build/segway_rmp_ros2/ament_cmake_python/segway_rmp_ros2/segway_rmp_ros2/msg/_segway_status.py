# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_rmp_ros2:msg/SegwayStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SegwayStatus(type):
    """Metaclass of message 'SegwayStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('segway_rmp_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_rmp_ros2.msg.SegwayStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__segway_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__segway_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__segway_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__segway_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__segway_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SegwayStatus(metaclass=Metaclass_SegwayStatus):
    """Message class 'SegwayStatus'."""

    __slots__ = [
        '_pitch_angle',
        '_pitch_rate',
        '_roll_angle',
        '_roll_rate',
        '_left_wheel_velocity',
        '_right_wheel_velocity',
        '_yaw_rate',
        '_servo_frames',
        '_left_wheel_displacement',
        '_right_wheel_displacement',
        '_forward_displacement',
        '_yaw_displacement',
        '_left_motor_torque',
        '_right_motor_torque',
        '_operation_mode',
        '_gain_schedule',
        '_ui_battery',
        '_powerbase_battery',
        '_motors_enabled',
    ]

    _fields_and_field_types = {
        'pitch_angle': 'int8',
        'pitch_rate': 'int8',
        'roll_angle': 'float',
        'roll_rate': 'float',
        'left_wheel_velocity': 'float',
        'right_wheel_velocity': 'float',
        'yaw_rate': 'float',
        'servo_frames': 'float',
        'left_wheel_displacement': 'float',
        'right_wheel_displacement': 'float',
        'forward_displacement': 'float',
        'yaw_displacement': 'float',
        'left_motor_torque': 'float',
        'right_motor_torque': 'float',
        'operation_mode': 'int8',
        'gain_schedule': 'int8',
        'ui_battery': 'float',
        'powerbase_battery': 'float',
        'motors_enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pitch_angle = kwargs.get('pitch_angle', int())
        self.pitch_rate = kwargs.get('pitch_rate', int())
        self.roll_angle = kwargs.get('roll_angle', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.left_wheel_velocity = kwargs.get('left_wheel_velocity', float())
        self.right_wheel_velocity = kwargs.get('right_wheel_velocity', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.servo_frames = kwargs.get('servo_frames', float())
        self.left_wheel_displacement = kwargs.get('left_wheel_displacement', float())
        self.right_wheel_displacement = kwargs.get('right_wheel_displacement', float())
        self.forward_displacement = kwargs.get('forward_displacement', float())
        self.yaw_displacement = kwargs.get('yaw_displacement', float())
        self.left_motor_torque = kwargs.get('left_motor_torque', float())
        self.right_motor_torque = kwargs.get('right_motor_torque', float())
        self.operation_mode = kwargs.get('operation_mode', int())
        self.gain_schedule = kwargs.get('gain_schedule', int())
        self.ui_battery = kwargs.get('ui_battery', float())
        self.powerbase_battery = kwargs.get('powerbase_battery', float())
        self.motors_enabled = kwargs.get('motors_enabled', bool())

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
        if self.pitch_angle != other.pitch_angle:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.roll_angle != other.roll_angle:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.left_wheel_velocity != other.left_wheel_velocity:
            return False
        if self.right_wheel_velocity != other.right_wheel_velocity:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.servo_frames != other.servo_frames:
            return False
        if self.left_wheel_displacement != other.left_wheel_displacement:
            return False
        if self.right_wheel_displacement != other.right_wheel_displacement:
            return False
        if self.forward_displacement != other.forward_displacement:
            return False
        if self.yaw_displacement != other.yaw_displacement:
            return False
        if self.left_motor_torque != other.left_motor_torque:
            return False
        if self.right_motor_torque != other.right_motor_torque:
            return False
        if self.operation_mode != other.operation_mode:
            return False
        if self.gain_schedule != other.gain_schedule:
            return False
        if self.ui_battery != other.ui_battery:
            return False
        if self.powerbase_battery != other.powerbase_battery:
            return False
        if self.motors_enabled != other.motors_enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pitch_angle(self):
        """Message field 'pitch_angle'."""
        return self._pitch_angle

    @pitch_angle.setter
    def pitch_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch_angle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pitch_angle' field must be an integer in [-128, 127]"
        self._pitch_angle = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch_rate' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pitch_rate' field must be an integer in [-128, 127]"
        self._pitch_rate = value

    @builtins.property
    def roll_angle(self):
        """Message field 'roll_angle'."""
        return self._roll_angle

    @roll_angle.setter
    def roll_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_angle = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_rate = value

    @builtins.property
    def left_wheel_velocity(self):
        """Message field 'left_wheel_velocity'."""
        return self._left_wheel_velocity

    @left_wheel_velocity.setter
    def left_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_wheel_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_wheel_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_wheel_velocity = value

    @builtins.property
    def right_wheel_velocity(self):
        """Message field 'right_wheel_velocity'."""
        return self._right_wheel_velocity

    @right_wheel_velocity.setter
    def right_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_wheel_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_wheel_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_wheel_velocity = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value

    @builtins.property
    def servo_frames(self):
        """Message field 'servo_frames'."""
        return self._servo_frames

    @servo_frames.setter
    def servo_frames(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_frames' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_frames' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_frames = value

    @builtins.property
    def left_wheel_displacement(self):
        """Message field 'left_wheel_displacement'."""
        return self._left_wheel_displacement

    @left_wheel_displacement.setter
    def left_wheel_displacement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_wheel_displacement' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_wheel_displacement' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_wheel_displacement = value

    @builtins.property
    def right_wheel_displacement(self):
        """Message field 'right_wheel_displacement'."""
        return self._right_wheel_displacement

    @right_wheel_displacement.setter
    def right_wheel_displacement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_wheel_displacement' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_wheel_displacement' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_wheel_displacement = value

    @builtins.property
    def forward_displacement(self):
        """Message field 'forward_displacement'."""
        return self._forward_displacement

    @forward_displacement.setter
    def forward_displacement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward_displacement' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'forward_displacement' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._forward_displacement = value

    @builtins.property
    def yaw_displacement(self):
        """Message field 'yaw_displacement'."""
        return self._yaw_displacement

    @yaw_displacement.setter
    def yaw_displacement(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_displacement' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_displacement' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_displacement = value

    @builtins.property
    def left_motor_torque(self):
        """Message field 'left_motor_torque'."""
        return self._left_motor_torque

    @left_motor_torque.setter
    def left_motor_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_motor_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_motor_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_motor_torque = value

    @builtins.property
    def right_motor_torque(self):
        """Message field 'right_motor_torque'."""
        return self._right_motor_torque

    @right_motor_torque.setter
    def right_motor_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_motor_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_motor_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_motor_torque = value

    @builtins.property
    def operation_mode(self):
        """Message field 'operation_mode'."""
        return self._operation_mode

    @operation_mode.setter
    def operation_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'operation_mode' field must be an integer in [-128, 127]"
        self._operation_mode = value

    @builtins.property
    def gain_schedule(self):
        """Message field 'gain_schedule'."""
        return self._gain_schedule

    @gain_schedule.setter
    def gain_schedule(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gain_schedule' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gain_schedule' field must be an integer in [-128, 127]"
        self._gain_schedule = value

    @builtins.property
    def ui_battery(self):
        """Message field 'ui_battery'."""
        return self._ui_battery

    @ui_battery.setter
    def ui_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ui_battery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ui_battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ui_battery = value

    @builtins.property
    def powerbase_battery(self):
        """Message field 'powerbase_battery'."""
        return self._powerbase_battery

    @powerbase_battery.setter
    def powerbase_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'powerbase_battery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'powerbase_battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._powerbase_battery = value

    @builtins.property
    def motors_enabled(self):
        """Message field 'motors_enabled'."""
        return self._motors_enabled

    @motors_enabled.setter
    def motors_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motors_enabled' field must be of type 'bool'"
        self._motors_enabled = value
