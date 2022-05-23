// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice
#include "teleop_msgs/msg/detail/vehicle_control_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "teleop_msgs/msg/detail/vehicle_control_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace teleop_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_serialize(
  const teleop_msgs::msg::VehicleControlData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: steering
  cdr << ros_message.steering;
  // Member: brake
  cdr << ros_message.brake;
  // Member: estop
  cdr << (ros_message.estop ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  teleop_msgs::msg::VehicleControlData & ros_message)
{
  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: steering
  cdr >> ros_message.steering;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.estop = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
get_serialized_size(
  const teleop_msgs::msg::VehicleControlData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop
  {
    size_t item_size = sizeof(ros_message.estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_teleop_msgs
max_serialized_size_VehicleControlData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: estop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleControlData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const teleop_msgs::msg::VehicleControlData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleControlData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<teleop_msgs::msg::VehicleControlData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleControlData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const teleop_msgs::msg::VehicleControlData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleControlData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleControlData(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleControlData__callbacks = {
  "teleop_msgs::msg",
  "VehicleControlData",
  _VehicleControlData__cdr_serialize,
  _VehicleControlData__cdr_deserialize,
  _VehicleControlData__get_serialized_size,
  _VehicleControlData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleControlData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleControlData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace teleop_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_teleop_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::msg::VehicleControlData>()
{
  return &teleop_msgs::msg::typesupport_fastrtps_cpp::_VehicleControlData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, teleop_msgs, msg, VehicleControlData)() {
  return &teleop_msgs::msg::typesupport_fastrtps_cpp::_VehicleControlData__handle;
}

#ifdef __cplusplus
}
#endif
