// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:msg/VehicleControlData.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_HPP_
#define TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__msg__VehicleControlData __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__msg__VehicleControlData __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleControlData_
{
  using Type = VehicleControlData_<ContainerAllocator>;

  explicit VehicleControlData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->steering = 0.0;
      this->brake = 0.0;
      this->estop = false;
    }
  }

  explicit VehicleControlData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0;
      this->steering = 0.0;
      this->brake = 0.0;
      this->estop = false;
    }
  }

  // field types and members
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _steering_type =
    double;
  _steering_type steering;
  using _brake_type =
    double;
  _brake_type brake;
  using _estop_type =
    bool;
  _estop_type estop;

  // setters for named parameter idiom
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering(
    const double & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::msg::VehicleControlData_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::msg::VehicleControlData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::VehicleControlData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::msg::VehicleControlData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__msg__VehicleControlData
    std::shared_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__msg__VehicleControlData
    std::shared_ptr<teleop_msgs::msg::VehicleControlData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleControlData_ & other) const
  {
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleControlData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleControlData_

// alias to use template instance with default allocator
using VehicleControlData =
  teleop_msgs::msg::VehicleControlData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__MSG__DETAIL__VEHICLE_CONTROL_DATA__STRUCT_HPP_
