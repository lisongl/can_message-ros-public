
#ifndef ZHIJIA_SHIJUE_ROS_HPP
#define ZHIJIA_SHIJUE_ROS_HPP

#include <ros/ros.h>
#include <thread>

#include "zhijia_shijue/ros/target_list_ros.hpp"

#include "zhijia_shijue/zhijia_shijue_can.hpp"




namespace zhijia_shijue {
class ZHIJIA_SHIJUE_ROS : public ZHIJIA_SHIJUE_CAN {
 public:
  ZHIJIA_SHIJUE_ROS(ros::NodeHandle &nh);

  ~ZHIJIA_SHIJUE_ROS();

  void receive_data();

  void run();

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
  ros::NodeHandle nh_;

  std::thread receive_data_thread_;

  TargetListROS target_list_ros_;

};
}

#endif //ZHIJIA_SHIJUE_ROS_HPP
