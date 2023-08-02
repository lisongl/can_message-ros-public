
#include "zhijia_shijue/target_list.hpp"

namespace zhijia_shijue {
namespace target_list {
SHIJUE_Target::SHIJUE_Target() {
}

SHIJUE_Target::~SHIJUE_Target() {
}

int SHIJUE_Target::get_target_Id() {
  return static_cast<int>(shijue_target_msg0.data.Target_Id);
}

double SHIJUE_Target::get_target_Width() {
  return (shijue_target_msg1.data.Target_Width) * 0.05;
}

double SHIJUE_Target::get_target_Length() {
  return (shijue_target_msg1.data.Target_Length2 << 1 |
      shijue_target_msg1.data.Target_Length1) * 0.2;
}

double SHIJUE_Target::get_target_Height() {
  return (shijue_target_msg1.data.Target_Height2 << 1 |
      shijue_target_msg1.data.Target_Height1) * 0.1;
}

double SHIJUE_Target::get_target_Long_Velocity() {
  return (shijue_target_msg1.data.Target_Long_Velocity3 << 11 |
      shijue_target_msg1.data.Target_Long_Velocity2 << 3 |
      shijue_target_msg1.data.Target_Long_Velocity1) * 0.0625 - 128.0;
}

double SHIJUE_Target::get_target_Lat_Velocity() {
  return (shijue_target_msg1.data.Target_Lat_Velocity2 << 7 |
      shijue_target_msg1.data.Target_Lat_Velocity1) * 0.0625 - 128.0;
}

double SHIJUE_Target::get_target_Long_Accel() {
  return (shijue_target_msg1.data.Target_Long_Accel3 << 11 |
      shijue_target_msg1.data.Target_Long_Accel2 << 3 |
      shijue_target_msg1.data.Target_Long_Accel1) * 0.0078125 - 20.0;
}

double SHIJUE_Target::get_target_Long_Position() {
  return (shijue_target_msg2.data.Target_Long_Position2 << 8 |
      shijue_target_msg2.data.Target_Long_Position1) * 0.05 - 150.0;
}

double SHIJUE_Target::get_target_Angle() {
  return (shijue_target_msg3.data.Target_Angle2 << 8 |
      shijue_target_msg3.data.Target_Angle1) * 0.005 - 2.0;
}

double SHIJUE_Target::get_target_Ext_Angle_Rate_Left() {
  return (shijue_target_msg4.data.Target_Ext_Angle_Rate_Left2 << 8 |
      shijue_target_msg4.data.Target_Ext_Angle_Rate_Left1) * 0.005 - 2.0;
}

double SHIJUE_Target::get_target_Ext_Angle_Rate_Right() {
  return (shijue_target_msg4.data.Target_Ext_Angle_Rate_Right2 << 6 |
      shijue_target_msg4.data.Target_Ext_Angle_Rate_Right1) * 0.005 - 2.0;
}

target_data0 *SHIJUE_Target::pGet_shijue_target0() {
  return &shijue_target_msg0;
}

target_data1 *SHIJUE_Target::pGet_shijue_target1() {
  return &shijue_target_msg1;
}

target_data2 *SHIJUE_Target::pGet_shijue_target2() {
  return &shijue_target_msg2;
}

target_data3 *SHIJUE_Target::pGet_shijue_target3() {
  return &shijue_target_msg3;
}

target_data4 *SHIJUE_Target::pGet_shijue_target4() {
  return &shijue_target_msg4;
}
}
}
