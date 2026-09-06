#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to agri_interfaces__msg__SoilMoisture

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SoilMoisture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moisture: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: std::string::String,

}



impl Default for SoilMoisture {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SoilMoisture::default())
  }
}

impl rosidl_runtime_rs::Message for SoilMoisture {
  type RmwMsg = super::msg::rmw::SoilMoisture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        sensor_id: msg.sensor_id.as_str().into(),
        moisture: msg.moisture,
        unit: msg.unit.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        sensor_id: msg.sensor_id.as_str().into(),
      moisture: msg.moisture,
        unit: msg.unit.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      sensor_id: msg.sensor_id.to_string(),
      moisture: msg.moisture,
      unit: msg.unit.to_string(),
    }
  }
}


// Corresponds to agri_interfaces__msg__IrrigationCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IrrigationCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuator_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub activate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moisture_value: f32,

}



impl Default for IrrigationCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IrrigationCommand::default())
  }
}

impl rosidl_runtime_rs::Message for IrrigationCommand {
  type RmwMsg = super::msg::rmw::IrrigationCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.sensor_timestamp)).into_owned(),
        command_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.command_timestamp)).into_owned(),
        actuator_id: msg.actuator_id.as_str().into(),
        activate: msg.activate,
        moisture_value: msg.moisture_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor_timestamp)).into_owned(),
        command_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.command_timestamp)).into_owned(),
        actuator_id: msg.actuator_id.as_str().into(),
      activate: msg.activate,
      moisture_value: msg.moisture_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sensor_timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.sensor_timestamp),
      command_timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.command_timestamp),
      actuator_id: msg.actuator_id.to_string(),
      activate: msg.activate,
      moisture_value: msg.moisture_value,
    }
  }
}


// Corresponds to agri_interfaces__msg__IrrigationState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IrrigationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuator_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

}



impl Default for IrrigationState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IrrigationState::default())
  }
}

impl rosidl_runtime_rs::Message for IrrigationState {
  type RmwMsg = super::msg::rmw::IrrigationState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.sensor_timestamp)).into_owned(),
        command_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.command_timestamp)).into_owned(),
        state_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.state_timestamp)).into_owned(),
        actuator_id: msg.actuator_id.as_str().into(),
        active: msg.active,
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sensor_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor_timestamp)).into_owned(),
        command_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.command_timestamp)).into_owned(),
        state_timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state_timestamp)).into_owned(),
        actuator_id: msg.actuator_id.as_str().into(),
      active: msg.active,
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sensor_timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.sensor_timestamp),
      command_timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.command_timestamp),
      state_timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.state_timestamp),
      actuator_id: msg.actuator_id.to_string(),
      active: msg.active,
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to agri_interfaces__msg__RobotCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_speed: f32,

}



impl Default for RobotCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotCommand::default())
  }
}

impl rosidl_runtime_rs::Message for RobotCommand {
  type RmwMsg = super::msg::rmw::RobotCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        command: msg.command.as_str().into(),
        linear_speed: msg.linear_speed,
        angular_speed: msg.angular_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        command: msg.command.as_str().into(),
      linear_speed: msg.linear_speed,
      angular_speed: msg.angular_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      robot_id: msg.robot_id.to_string(),
      command: msg.command.to_string(),
      linear_speed: msg.linear_speed,
      angular_speed: msg.angular_speed,
    }
  }
}


