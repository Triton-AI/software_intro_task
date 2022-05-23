// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/vehicle_control_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "teleop_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "teleop_msgs/msg/detail/vehicle_control_data__struct.h"
#include "teleop_msgs/msg/detail/vehicle_control_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleControlData__ros_msg_type = teleop_msgs__msg__VehicleControlData;

static bool _VehicleControlData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleControlData__ros_msg_type * ros_message = static_cast<const _VehicleControlData__ros_msg_type *>(untyped_ros_message);
  // Field name: throttle
  {
    cdr << ros_message->throttle;
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: estop
  {
    cdr << (ros_message->estop ? true : false);
  }

  return true;
}

static bool _VehicleControlData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleControlData__ros_msg_type * ros_message = static_cast<_VehicleControlData__ros_msg_type *>(untyped_ros_message);
  // Field name: throttle
  {
    cdr >> ros_message->throttle;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t get_serialized_size_teleop_msgs__msg__VehicleControlData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleControlData__ros_msg_type * ros_message = static_cast<const _VehicleControlData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name throttle
  {
    size_t item_size = sizeof(ros_message->throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop
  {
    size_t item_size = sizeof(ros_message->estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleControlData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_teleop_msgs__msg__VehicleControlData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_teleop_msgs
size_t max_serialized_size_teleop_msgs__msg__VehicleControlData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleControlData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_teleop_msgs__msg__VehicleControlData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleControlData = {
  "teleop_msgs::msg",
  "VehicleControlData",
  _VehicleControlData__cdr_serialize,
  _VehicleControlData__cdr_deserialize,
  _VehicleControlData__get_serialized_size,
  _VehicleControlData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleControlData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleControlData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, teleop_msgs, msg, VehicleControlData)() {
  return &_VehicleControlData__type_support;
}

#if defined(__cplusplus)
}
#endif
