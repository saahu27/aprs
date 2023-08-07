// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/ConfigureController.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/configure_controller.hpp"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureController_Request_
{
  using Type = ConfigureController_Request_<ContainerAllocator>;

  explicit ConfigureController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ConfigureController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Request
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Request
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureController_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureController_Request_

// alias to use template instance with default allocator
using ConfigureController_Request =
  controller_manager_msgs::srv::ConfigureController_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureController_Response_
{
  using Type = ConfigureController_Response_<ContainerAllocator>;

  explicit ConfigureController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit ConfigureController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Response
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Response
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureController_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureController_Response_

// alias to use template instance with default allocator
using ConfigureController_Response =
  controller_manager_msgs::srv::ConfigureController_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Event __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ConfigureController_Event __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureController_Event_
{
  using Type = ConfigureController_Event_<ContainerAllocator>;

  explicit ConfigureController_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ConfigureController_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::srv::ConfigureController_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::srv::ConfigureController_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Event
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ConfigureController_Event
    std::shared_ptr<controller_manager_msgs::srv::ConfigureController_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureController_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureController_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureController_Event_

// alias to use template instance with default allocator
using ConfigureController_Event =
  controller_manager_msgs::srv::ConfigureController_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct ConfigureController
{
  using Request = controller_manager_msgs::srv::ConfigureController_Request;
  using Response = controller_manager_msgs::srv::ConfigureController_Response;
  using Event = controller_manager_msgs::srv::ConfigureController_Event;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__CONFIGURE_CONTROLLER__STRUCT_HPP_
