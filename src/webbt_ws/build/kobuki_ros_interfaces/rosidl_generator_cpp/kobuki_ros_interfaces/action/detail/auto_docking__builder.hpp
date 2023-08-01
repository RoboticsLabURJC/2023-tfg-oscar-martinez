// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__BUILDER_HPP_
#define KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kobuki_ros_interfaces/action/detail/auto_docking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kobuki_ros_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_Goal>()
{
  return ::kobuki_ros_interfaces::action::AutoDocking_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_Result_text
{
public:
  Init_AutoDocking_Result_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_Result text(::kobuki_ros_interfaces::action::AutoDocking_Result::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_Result>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_Result_text();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_Feedback_text
{
public:
  explicit Init_AutoDocking_Feedback_text(::kobuki_ros_interfaces::action::AutoDocking_Feedback & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_Feedback text(::kobuki_ros_interfaces::action::AutoDocking_Feedback::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_Feedback msg_;
};

class Init_AutoDocking_Feedback_state
{
public:
  Init_AutoDocking_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoDocking_Feedback_text state(::kobuki_ros_interfaces::action::AutoDocking_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_AutoDocking_Feedback_text(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_Feedback>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_Feedback_state();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_SendGoal_Request_goal
{
public:
  explicit Init_AutoDocking_SendGoal_Request_goal(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request goal(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request msg_;
};

class Init_AutoDocking_SendGoal_Request_goal_id
{
public:
  Init_AutoDocking_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoDocking_SendGoal_Request_goal goal_id(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AutoDocking_SendGoal_Request_goal(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Request>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_SendGoal_Request_goal_id();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_SendGoal_Response_stamp
{
public:
  explicit Init_AutoDocking_SendGoal_Response_stamp(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response stamp(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response msg_;
};

class Init_AutoDocking_SendGoal_Response_accepted
{
public:
  Init_AutoDocking_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoDocking_SendGoal_Response_stamp accepted(::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AutoDocking_SendGoal_Response_stamp(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_SendGoal_Response>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_SendGoal_Response_accepted();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_GetResult_Request_goal_id
{
public:
  Init_AutoDocking_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_GetResult_Request goal_id(::kobuki_ros_interfaces::action::AutoDocking_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_GetResult_Request>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_GetResult_Request_goal_id();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_GetResult_Response_result
{
public:
  explicit Init_AutoDocking_GetResult_Response_result(::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response result(::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response msg_;
};

class Init_AutoDocking_GetResult_Response_status
{
public:
  Init_AutoDocking_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoDocking_GetResult_Response_result status(::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AutoDocking_GetResult_Response_result(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_GetResult_Response>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_GetResult_Response_status();
}

}  // namespace kobuki_ros_interfaces


namespace kobuki_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_AutoDocking_FeedbackMessage_feedback
{
public:
  explicit Init_AutoDocking_FeedbackMessage_feedback(::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage feedback(::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage msg_;
};

class Init_AutoDocking_FeedbackMessage_goal_id
{
public:
  Init_AutoDocking_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoDocking_FeedbackMessage_feedback goal_id(::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AutoDocking_FeedbackMessage_feedback(msg_);
  }

private:
  ::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::kobuki_ros_interfaces::action::AutoDocking_FeedbackMessage>()
{
  return kobuki_ros_interfaces::action::builder::Init_AutoDocking_FeedbackMessage_goal_id();
}

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__ACTION__DETAIL__AUTO_DOCKING__BUILDER_HPP_
