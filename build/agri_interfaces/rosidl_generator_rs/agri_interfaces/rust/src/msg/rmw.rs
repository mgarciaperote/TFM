#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "agri_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__SoilMoisture() -> *const std::ffi::c_void;
}

#[link(name = "agri_interfaces__rosidl_generator_c")]
extern "C" {
    fn agri_interfaces__msg__SoilMoisture__init(msg: *mut SoilMoisture) -> bool;
    fn agri_interfaces__msg__SoilMoisture__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SoilMoisture>, size: usize) -> bool;
    fn agri_interfaces__msg__SoilMoisture__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SoilMoisture>);
    fn agri_interfaces__msg__SoilMoisture__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SoilMoisture>, out_seq: *mut rosidl_runtime_rs::Sequence<SoilMoisture>) -> bool;
}

// Corresponds to agri_interfaces__msg__SoilMoisture
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SoilMoisture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moisture: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: rosidl_runtime_rs::String,

}



impl Default for SoilMoisture {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !agri_interfaces__msg__SoilMoisture__init(&mut msg as *mut _) {
        panic!("Call to agri_interfaces__msg__SoilMoisture__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SoilMoisture {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__SoilMoisture__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__SoilMoisture__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__SoilMoisture__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SoilMoisture {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SoilMoisture where Self: Sized {
  const TYPE_NAME: &'static str = "agri_interfaces/msg/SoilMoisture";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__SoilMoisture() }
  }
}


#[link(name = "agri_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__IrrigationCommand() -> *const std::ffi::c_void;
}

#[link(name = "agri_interfaces__rosidl_generator_c")]
extern "C" {
    fn agri_interfaces__msg__IrrigationCommand__init(msg: *mut IrrigationCommand) -> bool;
    fn agri_interfaces__msg__IrrigationCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IrrigationCommand>, size: usize) -> bool;
    fn agri_interfaces__msg__IrrigationCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IrrigationCommand>);
    fn agri_interfaces__msg__IrrigationCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IrrigationCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<IrrigationCommand>) -> bool;
}

// Corresponds to agri_interfaces__msg__IrrigationCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IrrigationCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuator_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub activate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moisture_value: f32,

}



impl Default for IrrigationCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !agri_interfaces__msg__IrrigationCommand__init(&mut msg as *mut _) {
        panic!("Call to agri_interfaces__msg__IrrigationCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IrrigationCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IrrigationCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IrrigationCommand where Self: Sized {
  const TYPE_NAME: &'static str = "agri_interfaces/msg/IrrigationCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__IrrigationCommand() }
  }
}


#[link(name = "agri_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__IrrigationState() -> *const std::ffi::c_void;
}

#[link(name = "agri_interfaces__rosidl_generator_c")]
extern "C" {
    fn agri_interfaces__msg__IrrigationState__init(msg: *mut IrrigationState) -> bool;
    fn agri_interfaces__msg__IrrigationState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IrrigationState>, size: usize) -> bool;
    fn agri_interfaces__msg__IrrigationState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IrrigationState>);
    fn agri_interfaces__msg__IrrigationState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IrrigationState>, out_seq: *mut rosidl_runtime_rs::Sequence<IrrigationState>) -> bool;
}

// Corresponds to agri_interfaces__msg__IrrigationState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IrrigationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sensor_timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actuator_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

}



impl Default for IrrigationState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !agri_interfaces__msg__IrrigationState__init(&mut msg as *mut _) {
        panic!("Call to agri_interfaces__msg__IrrigationState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IrrigationState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__IrrigationState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IrrigationState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IrrigationState where Self: Sized {
  const TYPE_NAME: &'static str = "agri_interfaces/msg/IrrigationState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__IrrigationState() }
  }
}


#[link(name = "agri_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__RobotCommand() -> *const std::ffi::c_void;
}

#[link(name = "agri_interfaces__rosidl_generator_c")]
extern "C" {
    fn agri_interfaces__msg__RobotCommand__init(msg: *mut RobotCommand) -> bool;
    fn agri_interfaces__msg__RobotCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotCommand>, size: usize) -> bool;
    fn agri_interfaces__msg__RobotCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotCommand>);
    fn agri_interfaces__msg__RobotCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotCommand>) -> bool;
}

// Corresponds to agri_interfaces__msg__RobotCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_speed: f32,

}



impl Default for RobotCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !agri_interfaces__msg__RobotCommand__init(&mut msg as *mut _) {
        panic!("Call to agri_interfaces__msg__RobotCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__RobotCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__RobotCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { agri_interfaces__msg__RobotCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotCommand where Self: Sized {
  const TYPE_NAME: &'static str = "agri_interfaces/msg/RobotCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__agri_interfaces__msg__RobotCommand() }
  }
}


