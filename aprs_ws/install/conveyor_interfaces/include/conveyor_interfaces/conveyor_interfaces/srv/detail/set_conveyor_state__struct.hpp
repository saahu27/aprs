// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conveyor_interfaces:srv/SetConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_HPP_
#define CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Request __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Request __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetConveyorState_Request_
{
  using Type = SetConveyorState_Request_<ContainerAllocator>;

  explicit SetConveyorState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->direction = 0;
    }
  }

  explicit SetConveyorState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->direction = 0;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _direction_type =
    uint8_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Request
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Request
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetConveyorState_Request_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetConveyorState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetConveyorState_Request_

// alias to use template instance with default allocator
using SetConveyorState_Request =
  conveyor_interfaces::srv::SetConveyorState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace conveyor_interfaces


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Response __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Response __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetConveyorState_Response_
{
  using Type = SetConveyorState_Response_<ContainerAllocator>;

  explicit SetConveyorState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetConveyorState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Response
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__srv__SetConveyorState_Response
    std::shared_ptr<conveyor_interfaces::srv::SetConveyorState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetConveyorState_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetConveyorState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetConveyorState_Response_

// alias to use template instance with default allocator
using SetConveyorState_Response =
  conveyor_interfaces::srv::SetConveyorState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace conveyor_interfaces

namespace conveyor_interfaces
{

namespace srv
{

struct SetConveyorState
{
  using Request = conveyor_interfaces::srv::SetConveyorState_Request;
  using Response = conveyor_interfaces::srv::SetConveyorState_Response;
};

}  // namespace srv

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_HPP_
