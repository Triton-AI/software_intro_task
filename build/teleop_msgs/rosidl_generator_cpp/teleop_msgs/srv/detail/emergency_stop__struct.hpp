// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
#define TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__srv__EmergencyStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__srv__EmergencyStop_Request __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_Request_
{
  using Type = EmergencyStop_Request_<ContainerAllocator>;

  explicit EmergencyStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_estop = false;
    }
  }

  explicit EmergencyStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_estop = false;
    }
  }

  // field types and members
  using _set_estop_type =
    bool;
  _set_estop_type set_estop;

  // setters for named parameter idiom
  Type & set__set_estop(
    const bool & _arg)
  {
    this->set_estop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__srv__EmergencyStop_Request
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__srv__EmergencyStop_Request
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_Request_ & other) const
  {
    if (this->set_estop != other.set_estop) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_Request_

// alias to use template instance with default allocator
using EmergencyStop_Request =
  teleop_msgs::srv::EmergencyStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_msgs


#ifndef _WIN32
# define DEPRECATED__teleop_msgs__srv__EmergencyStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__teleop_msgs__srv__EmergencyStop_Response __declspec(deprecated)
#endif

namespace teleop_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmergencyStop_Response_
{
  using Type = EmergencyStop_Response_<ContainerAllocator>;

  explicit EmergencyStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop_state = false;
    }
  }

  explicit EmergencyStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estop_state = false;
    }
  }

  // field types and members
  using _estop_state_type =
    bool;
  _estop_state_type estop_state;

  // setters for named parameter idiom
  Type & set__estop_state(
    const bool & _arg)
  {
    this->estop_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_msgs__srv__EmergencyStop_Response
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_msgs__srv__EmergencyStop_Response
    std::shared_ptr<teleop_msgs::srv::EmergencyStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStop_Response_ & other) const
  {
    if (this->estop_state != other.estop_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStop_Response_

// alias to use template instance with default allocator
using EmergencyStop_Response =
  teleop_msgs::srv::EmergencyStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_msgs

namespace teleop_msgs
{

namespace srv
{

struct EmergencyStop
{
  using Request = teleop_msgs::srv::EmergencyStop_Request;
  using Response = teleop_msgs::srv::EmergencyStop_Response;
};

}  // namespace srv

}  // namespace teleop_msgs

#endif  // TELEOP_MSGS__SRV__DETAIL__EMERGENCY_STOP__STRUCT_HPP_
