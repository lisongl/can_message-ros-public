

#include "zhijia_shijue/ros/target_list_ros.hpp"

#include <geometry_msgs/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

namespace zhijia_shijue {
TargetListROS::TargetListROS(ros::NodeHandle &nh, ZHIJIA_SHIJUE_CAN *zhijia_shijue_can) :
    zhijia_shijue_can_(zhijia_shijue_can) {
  target_00 = zhijia_shijue_can_->pGet_target_00();
  target_01 = zhijia_shijue_can_->pGet_target_01();
  target_02 = zhijia_shijue_can_->pGet_target_02();
  target_03 = zhijia_shijue_can_->pGet_target_03();
  target_04 = zhijia_shijue_can_->pGet_target_04();
  target_05 = zhijia_shijue_can_->pGet_target_05();
  target_06 = zhijia_shijue_can_->pGet_target_06();
  target_07 = zhijia_shijue_can_->pGet_target_07();
  target_08 = zhijia_shijue_can_->pGet_target_08();
  target_09 = zhijia_shijue_can_->pGet_target_09();
  targets_data_pub_ = nh.advertise<zhijia_shijue::TargetList>("zhijia_shijue/targets", 10);
}

TargetListROS::~TargetListROS() {
}

void TargetListROS::set_frame_id(std::string frame_id) {
  frame_id_ = frame_id;
}

void TargetListROS::send_shijue_target_00() {
  Target target;
  target.id = target_00->get_target_Id();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_01() {
  Target target;
  target.width = target_01->get_target_Width();
  target.length = target_01->get_target_Length();
  target.height = target_01->get_target_Height();
  target.long_velocity = target_01->get_target_Long_Velocity();
  target.lat_velocity = target_01->get_target_Lat_Velocity();
  target.long_accel = target_01->get_target_Long_Accel();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_02() {
   Target target;
    target.long_position = target_02->get_target_Long_Position();
    target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_03() {
  Target target;
  target.angle = target_03->get_target_Angle();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_04() {
  Target target;
  target.ext_angle_rate_left = target_04->get_target_Ext_Angle_Rate_Left();
  target.ext_angle_rate_right = target_04->get_target_Ext_Angle_Rate_Right();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_05() {
  Target target;
  target.id = target_05->get_target_Id();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_06() {
  Target target;
  target.width = target_06->get_target_Width();
  target.length = target_06->get_target_Length();
  target.height = target_06->get_target_Height();
  target.long_velocity = target_06->get_target_Long_Velocity();
  target.lat_velocity = target_06->get_target_Lat_Velocity();
  target.long_accel = target_06->get_target_Long_Accel();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_07() {
   Target target;
    target.long_position = target_07->get_target_Long_Position();
    target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_08() {
  Target target;
  target.angle = target_08->get_target_Angle();
  target_list.targets.push_back(target);
}

void TargetListROS::send_shijue_target_09() {
  Target target;
  target.ext_angle_rate_left = target_09->get_target_Ext_Angle_Rate_Left();
  target.ext_angle_rate_right = target_09->get_target_Ext_Angle_Rate_Right();
  target_list.targets.push_back(target);

  target_list.header.stamp = ros::Time::now();
  target_list.header.frame_id = frame_id_;
  //object_list.objects.erase(
      //object_list.objects.begin() + std::min(object_2_quality_id_, object_3_extended_id_),
     // object_list.objects.begin() + object_list.objects.size());
  targets_data_pub_.publish(target_list);
  target_list.targets.clear();
}



}
