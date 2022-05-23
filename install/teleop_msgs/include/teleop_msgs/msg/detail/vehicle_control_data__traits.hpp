// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_

#include "teleop_msgs/msg/detail/vehicle_control_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const teleop_msgs::msg::VehicleControlData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    value_to_yaml(msg.estop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const teleop_msgs::msg::VehicleControlData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<teleop_msgs::msg::VehicleControlData>()
{
  return "teleop_msgs::msg::VehicleControlData";
}

template<>
inline const char * name<teleop_msgs::msg::VehicleControlData>()
{
  return "teleop_msgs/msg/VehicleControlData";
}

template<>
struct has_fixed_size<teleop_msgs::msg::VehicleControlData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::msg::VehicleControlData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::msg::VehicleControlData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__TRAITS_HPP_
