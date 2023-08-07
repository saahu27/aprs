// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_dashboard_msgs:srv/Load.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_dashboard_msgs/srv/load.hpp"


#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__LOAD__STRUCT_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__LOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Request __declspec(deprecated)
#endif

namespace ur_dashboard_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Load_Request_
{
  using Type = Load_Request_<ContainerAllocator>;

  explicit Load_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit Load_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Request
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Request
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Load_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const Load_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Load_Request_

// alias to use template instance with default allocator
using Load_Request =
  ur_dashboard_msgs::srv::Load_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_dashboard_msgs


#ifndef _WIN32
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Response __declspec(deprecated)
#endif

namespace ur_dashboard_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Load_Response_
{
  using Type = Load_Response_<ContainerAllocator>;

  explicit Load_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
      this->success = false;
    }
  }

  explicit Load_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : answer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
      this->success = false;
    }
  }

  // field types and members
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _answer_type answer;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->answer = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Response
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Response
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Load_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Load_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Load_Response_

// alias to use template instance with default allocator
using Load_Response =
  ur_dashboard_msgs::srv::Load_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_dashboard_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Event __attribute__((deprecated))
#else
# define DEPRECATED__ur_dashboard_msgs__srv__Load_Event __declspec(deprecated)
#endif

namespace ur_dashboard_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Load_Event_
{
  using Type = Load_Event_<ContainerAllocator>;

  explicit Load_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Load_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur_dashboard_msgs::srv::Load_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur_dashboard_msgs::srv::Load_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Event
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_dashboard_msgs__srv__Load_Event
    std::shared_ptr<ur_dashboard_msgs::srv::Load_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Load_Event_ & other) const
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
  bool operator!=(const Load_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Load_Event_

// alias to use template instance with default allocator
using Load_Event =
  ur_dashboard_msgs::srv::Load_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace ur_dashboard_msgs
{

namespace srv
{

struct Load
{
  using Request = ur_dashboard_msgs::srv::Load_Request;
  using Response = ur_dashboard_msgs::srv::Load_Response;
  using Event = ur_dashboard_msgs::srv::Load_Event;
};

}  // namespace srv

}  // namespace ur_dashboard_msgs

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__LOAD__STRUCT_HPP_
