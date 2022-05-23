// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
#define TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_

#include "teleop_msgs/srv/detail/emergency_stop__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const teleop_msgs::srv::EmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_estop: ";
    value_to_yaml(msg.set_estop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const teleop_msgs::srv::EmergencyStop_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<teleop_msgs::srv::EmergencyStop_Request>()
{
  return "teleop_msgs::srv::EmergencyStop_Request";
}

template<>
inline const char * name<teleop_msgs::srv::EmergencyStop_Request>()
{
  return "teleop_msgs/srv/EmergencyStop_Request";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::srv::EmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::srv::EmergencyStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const teleop_msgs::srv::EmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: estop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_state: ";
    value_to_yaml(msg.estop_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const teleop_msgs::srv::EmergencyStop_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<teleop_msgs::srv::EmergencyStop_Response>()
{
  return "teleop_msgs::srv::EmergencyStop_Response";
}

template<>
inline const char * name<teleop_msgs::srv::EmergencyStop_Response>()
{
  return "teleop_msgs/srv/EmergencyStop_Response";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EmergencyStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_msgs::srv::EmergencyStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_msgs::srv::EmergencyStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_msgs::srv::EmergencyStop>()
{
  return "teleop_msgs::srv::EmergencyStop";
}

template<>
inline const char * name<teleop_msgs::srv::EmergencyStop>()
{
  return "teleop_msgs/srv/EmergencyStop";
}

template<>
struct has_fixed_size<teleop_msgs::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_fixed_size<teleop_msgs::srv::EmergencyStop_Request>::value &&
    has_fixed_size<teleop_msgs::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<teleop_msgs::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_bounded_size<teleop_msgs::srv::EmergencyStop_Request>::value &&
    has_bounded_size<teleop_msgs::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct is_service<teleop_msgs::srv::EmergencyStop>
  : std::true_type
{
};

template<>
struct is_service_request<teleop_msgs::srv::EmergencyStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<teleop_msgs::srv::EmergencyStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
