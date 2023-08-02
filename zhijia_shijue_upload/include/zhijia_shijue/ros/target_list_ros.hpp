

#ifndef ZHIJIA_SHIJUE_TARGET_LIST_ROS_HPP
#define ZHIJIA_SHIJUE_TARGET_LIST_ROS_HPP

#include <ros/ros.h>

#include <cstdint>

#include "zhijia_shijue/TargetList.h"
#include "zhijia_shijue/zhijia_shijue_can.hpp"

namespace zhijia_shijue {
class TargetListROS {
 public:
  TargetListROS(ros::NodeHandle &nh, ZHIJIA_SHIJUE_CAN *zhijiaShijueCAN);

  ~TargetListROS();

  void set_frame_id(std::string frame_id);

  void send_shijue_target_00();

  void send_shijue_target_01();

  void send_shijue_target_02();

  void send_shijue_target_03();

  void send_shijue_target_04();

  void send_shijue_target_05();

  void send_shijue_target_06();

  void send_shijue_target_07();

  void send_shijue_target_08();

  void send_shijue_target_09();

 private:
  std::string frame_id_;

  ros::Publisher targets_data_pub_;

  ZHIJIA_SHIJUE_CAN *zhijia_shijue_can_;

  TargetList target_list;

  target_list::SHIJUE_Target *target_00;
  
  target_list::SHIJUE_Target *target_01;

  target_list::SHIJUE_Target *target_02;

  target_list::SHIJUE_Target *target_03;

  target_list::SHIJUE_Target *target_04;

  target_list::SHIJUE_Target *target_05;

  target_list::SHIJUE_Target *target_06;

  target_list::SHIJUE_Target *target_07;

  target_list::SHIJUE_Target *target_08;

  target_list::SHIJUE_Target *target_09;

  int object_id_;

};
}

#endif //ZHIJIA_SHIJUE_TARGET_LIST_ROS_HPP
