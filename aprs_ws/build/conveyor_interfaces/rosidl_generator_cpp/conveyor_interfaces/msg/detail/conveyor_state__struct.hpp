// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__conveyor_interfaces__msg__ConveyorState __attribute__((deprecated))
#else
# define DEPRECATED__conveyor_interfaces__msg__ConveyorState __declspec(deprecated)
#endif

namespace conveyor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConveyorState_
{
  using Type = ConveyorState_<ContainerAllocator>;

  explicit ConveyorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->speed = 0.0f;
      this->direction = 0;
    }
  }

  explicit ConveyorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->speed = 0.0f;
      this->direction = 0;
    }
  }

  // field types and members
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _speed_type =
    float;
  _speed_type speed;
  using _direction_type =
    uint8_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
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
  static constexpr uint8_t FORWARD =
    0u;
  static constexpr uint8_t REVERSE =
    1u;

  // pointer types
  using RawPtr =
    conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__conveyor_interfaces__msg__ConveyorState
    std::shared_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__conveyor_interfaces__msg__ConveyorState
    std::shared_ptr<conveyor_interfaces::msg::ConveyorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConveyorState_ & other) const
  {
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConveyorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConveyorState_

// alias to use template instance with default allocator
using ConveyorState =
  conveyor_interfaces::msg::ConveyorState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ConveyorState_<ContainerAllocator>::FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ConveyorState_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_HPP_
