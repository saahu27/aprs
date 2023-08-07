# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ur_msgs:srv/SetIO.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetIO_Request(type):
    """Metaclass of message 'SetIO_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PIN_AOUT0': 0,
        'PIN_AOUT1': 1,
        'PIN_DOUT0': 0,
        'PIN_DOUT1': 1,
        'PIN_DOUT2': 2,
        'PIN_DOUT3': 3,
        'PIN_DOUT4': 4,
        'PIN_DOUT5': 5,
        'PIN_DOUT6': 6,
        'PIN_DOUT7': 7,
        'PIN_CONF_OUT0': 8,
        'PIN_CONF_OUT1': 9,
        'PIN_CONF_OUT2': 10,
        'PIN_CONF_OUT3': 11,
        'PIN_CONF_OUT4': 12,
        'PIN_CONF_OUT5': 13,
        'PIN_CONF_OUT6': 14,
        'PIN_CONF_OUT7': 15,
        'PIN_TOOL_DOUT0': 16,
        'PIN_TOOL_DOUT1': 17,
        'FUN_SET_DIGITAL_OUT': 1,
        'FUN_SET_FLAG': 2,
        'FUN_SET_ANALOG_OUT': 3,
        'FUN_SET_TOOL_VOLTAGE': 4,
        'STATE_OFF': 0,
        'STATE_ON': 1,
        'STATE_TOOL_VOLTAGE_0V': 0,
        'STATE_TOOL_VOLTAGE_12V': 12,
        'STATE_TOOL_VOLTAGE_24V': 24,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_msgs.srv.SetIO_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PIN_AOUT0': cls.__constants['PIN_AOUT0'],
            'PIN_AOUT1': cls.__constants['PIN_AOUT1'],
            'PIN_DOUT0': cls.__constants['PIN_DOUT0'],
            'PIN_DOUT1': cls.__constants['PIN_DOUT1'],
            'PIN_DOUT2': cls.__constants['PIN_DOUT2'],
            'PIN_DOUT3': cls.__constants['PIN_DOUT3'],
            'PIN_DOUT4': cls.__constants['PIN_DOUT4'],
            'PIN_DOUT5': cls.__constants['PIN_DOUT5'],
            'PIN_DOUT6': cls.__constants['PIN_DOUT6'],
            'PIN_DOUT7': cls.__constants['PIN_DOUT7'],
            'PIN_CONF_OUT0': cls.__constants['PIN_CONF_OUT0'],
            'PIN_CONF_OUT1': cls.__constants['PIN_CONF_OUT1'],
            'PIN_CONF_OUT2': cls.__constants['PIN_CONF_OUT2'],
            'PIN_CONF_OUT3': cls.__constants['PIN_CONF_OUT3'],
            'PIN_CONF_OUT4': cls.__constants['PIN_CONF_OUT4'],
            'PIN_CONF_OUT5': cls.__constants['PIN_CONF_OUT5'],
            'PIN_CONF_OUT6': cls.__constants['PIN_CONF_OUT6'],
            'PIN_CONF_OUT7': cls.__constants['PIN_CONF_OUT7'],
            'PIN_TOOL_DOUT0': cls.__constants['PIN_TOOL_DOUT0'],
            'PIN_TOOL_DOUT1': cls.__constants['PIN_TOOL_DOUT1'],
            'FUN_SET_DIGITAL_OUT': cls.__constants['FUN_SET_DIGITAL_OUT'],
            'FUN_SET_FLAG': cls.__constants['FUN_SET_FLAG'],
            'FUN_SET_ANALOG_OUT': cls.__constants['FUN_SET_ANALOG_OUT'],
            'FUN_SET_TOOL_VOLTAGE': cls.__constants['FUN_SET_TOOL_VOLTAGE'],
            'STATE_OFF': cls.__constants['STATE_OFF'],
            'STATE_ON': cls.__constants['STATE_ON'],
            'STATE_TOOL_VOLTAGE_0V': cls.__constants['STATE_TOOL_VOLTAGE_0V'],
            'STATE_TOOL_VOLTAGE_12V': cls.__constants['STATE_TOOL_VOLTAGE_12V'],
            'STATE_TOOL_VOLTAGE_24V': cls.__constants['STATE_TOOL_VOLTAGE_24V'],
        }

    @property
    def PIN_AOUT0(self):
        """Message constant 'PIN_AOUT0'."""
        return Metaclass_SetIO_Request.__constants['PIN_AOUT0']

    @property
    def PIN_AOUT1(self):
        """Message constant 'PIN_AOUT1'."""
        return Metaclass_SetIO_Request.__constants['PIN_AOUT1']

    @property
    def PIN_DOUT0(self):
        """Message constant 'PIN_DOUT0'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT0']

    @property
    def PIN_DOUT1(self):
        """Message constant 'PIN_DOUT1'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT1']

    @property
    def PIN_DOUT2(self):
        """Message constant 'PIN_DOUT2'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT2']

    @property
    def PIN_DOUT3(self):
        """Message constant 'PIN_DOUT3'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT3']

    @property
    def PIN_DOUT4(self):
        """Message constant 'PIN_DOUT4'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT4']

    @property
    def PIN_DOUT5(self):
        """Message constant 'PIN_DOUT5'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT5']

    @property
    def PIN_DOUT6(self):
        """Message constant 'PIN_DOUT6'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT6']

    @property
    def PIN_DOUT7(self):
        """Message constant 'PIN_DOUT7'."""
        return Metaclass_SetIO_Request.__constants['PIN_DOUT7']

    @property
    def PIN_CONF_OUT0(self):
        """Message constant 'PIN_CONF_OUT0'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT0']

    @property
    def PIN_CONF_OUT1(self):
        """Message constant 'PIN_CONF_OUT1'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT1']

    @property
    def PIN_CONF_OUT2(self):
        """Message constant 'PIN_CONF_OUT2'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT2']

    @property
    def PIN_CONF_OUT3(self):
        """Message constant 'PIN_CONF_OUT3'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT3']

    @property
    def PIN_CONF_OUT4(self):
        """Message constant 'PIN_CONF_OUT4'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT4']

    @property
    def PIN_CONF_OUT5(self):
        """Message constant 'PIN_CONF_OUT5'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT5']

    @property
    def PIN_CONF_OUT6(self):
        """Message constant 'PIN_CONF_OUT6'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT6']

    @property
    def PIN_CONF_OUT7(self):
        """Message constant 'PIN_CONF_OUT7'."""
        return Metaclass_SetIO_Request.__constants['PIN_CONF_OUT7']

    @property
    def PIN_TOOL_DOUT0(self):
        """Message constant 'PIN_TOOL_DOUT0'."""
        return Metaclass_SetIO_Request.__constants['PIN_TOOL_DOUT0']

    @property
    def PIN_TOOL_DOUT1(self):
        """Message constant 'PIN_TOOL_DOUT1'."""
        return Metaclass_SetIO_Request.__constants['PIN_TOOL_DOUT1']

    @property
    def FUN_SET_DIGITAL_OUT(self):
        """Message constant 'FUN_SET_DIGITAL_OUT'."""
        return Metaclass_SetIO_Request.__constants['FUN_SET_DIGITAL_OUT']

    @property
    def FUN_SET_FLAG(self):
        """Message constant 'FUN_SET_FLAG'."""
        return Metaclass_SetIO_Request.__constants['FUN_SET_FLAG']

    @property
    def FUN_SET_ANALOG_OUT(self):
        """Message constant 'FUN_SET_ANALOG_OUT'."""
        return Metaclass_SetIO_Request.__constants['FUN_SET_ANALOG_OUT']

    @property
    def FUN_SET_TOOL_VOLTAGE(self):
        """Message constant 'FUN_SET_TOOL_VOLTAGE'."""
        return Metaclass_SetIO_Request.__constants['FUN_SET_TOOL_VOLTAGE']

    @property
    def STATE_OFF(self):
        """Message constant 'STATE_OFF'."""
        return Metaclass_SetIO_Request.__constants['STATE_OFF']

    @property
    def STATE_ON(self):
        """Message constant 'STATE_ON'."""
        return Metaclass_SetIO_Request.__constants['STATE_ON']

    @property
    def STATE_TOOL_VOLTAGE_0V(self):
        """Message constant 'STATE_TOOL_VOLTAGE_0V'."""
        return Metaclass_SetIO_Request.__constants['STATE_TOOL_VOLTAGE_0V']

    @property
    def STATE_TOOL_VOLTAGE_12V(self):
        """Message constant 'STATE_TOOL_VOLTAGE_12V'."""
        return Metaclass_SetIO_Request.__constants['STATE_TOOL_VOLTAGE_12V']

    @property
    def STATE_TOOL_VOLTAGE_24V(self):
        """Message constant 'STATE_TOOL_VOLTAGE_24V'."""
        return Metaclass_SetIO_Request.__constants['STATE_TOOL_VOLTAGE_24V']


class SetIO_Request(metaclass=Metaclass_SetIO_Request):
    """
    Message class 'SetIO_Request'.

    Constants:
      PIN_AOUT0
      PIN_AOUT1
      PIN_DOUT0
      PIN_DOUT1
      PIN_DOUT2
      PIN_DOUT3
      PIN_DOUT4
      PIN_DOUT5
      PIN_DOUT6
      PIN_DOUT7
      PIN_CONF_OUT0
      PIN_CONF_OUT1
      PIN_CONF_OUT2
      PIN_CONF_OUT3
      PIN_CONF_OUT4
      PIN_CONF_OUT5
      PIN_CONF_OUT6
      PIN_CONF_OUT7
      PIN_TOOL_DOUT0
      PIN_TOOL_DOUT1
      FUN_SET_DIGITAL_OUT
      FUN_SET_FLAG
      FUN_SET_ANALOG_OUT
      FUN_SET_TOOL_VOLTAGE
      STATE_OFF
      STATE_ON
      STATE_TOOL_VOLTAGE_0V
      STATE_TOOL_VOLTAGE_12V
      STATE_TOOL_VOLTAGE_24V
    """

    __slots__ = [
        '_fun',
        '_pin',
        '_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'fun': 'int8',
        'pin': 'int8',
        'state': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fun = kwargs.get('fun', int())
        self.pin = kwargs.get('pin', int())
        self.state = kwargs.get('state', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.fun != other.fun:
            return False
        if self.pin != other.pin:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fun(self):
        """Message field 'fun'."""
        return self._fun

    @fun.setter
    def fun(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fun' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'fun' field must be an integer in [-128, 127]"
        self._fun = value

    @builtins.property
    def pin(self):
        """Message field 'pin'."""
        return self._pin

    @pin.setter
    def pin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pin' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pin' field must be an integer in [-128, 127]"
        self._pin = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'state' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'state' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetIO_Response(type):
    """Metaclass of message 'SetIO_Response'."""

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
            module = import_type_support('ur_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_msgs.srv.SetIO_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetIO_Response(metaclass=Metaclass_SetIO_Response):
    """Message class 'SetIO_Response'."""

    __slots__ = [
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetIO_Event(type):
    """Metaclass of message 'SetIO_Event'."""

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
            module = import_type_support('ur_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_msgs.srv.SetIO_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetIO_Event(metaclass=Metaclass_SetIO_Event):
    """Message class 'SetIO_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ur_msgs/SetIO_Request, 1>',
        'response': 'sequence<ur_msgs/SetIO_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ur_msgs', 'srv'], 'SetIO_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ur_msgs', 'srv'], 'SetIO_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from ur_msgs.srv import SetIO_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SetIO_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetIO_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ur_msgs.srv import SetIO_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SetIO_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetIO_Response'"
        self._response = value


class Metaclass_SetIO(type):
    """Metaclass of service 'SetIO'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ur_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ur_msgs.srv.SetIO')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_io

            from ur_msgs.srv import _set_io
            if _set_io.Metaclass_SetIO_Request._TYPE_SUPPORT is None:
                _set_io.Metaclass_SetIO_Request.__import_type_support__()
            if _set_io.Metaclass_SetIO_Response._TYPE_SUPPORT is None:
                _set_io.Metaclass_SetIO_Response.__import_type_support__()
            if _set_io.Metaclass_SetIO_Event._TYPE_SUPPORT is None:
                _set_io.Metaclass_SetIO_Event.__import_type_support__()


class SetIO(metaclass=Metaclass_SetIO):
    from ur_msgs.srv._set_io import SetIO_Request as Request
    from ur_msgs.srv._set_io import SetIO_Response as Response
    from ur_msgs.srv._set_io import SetIO_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
