

#include "zhijia_shijue/ros/zhijia_shijue_ros.hpp"

namespace zhijia_shijue {
ZHIJIA_SHIJUE_ROS::ZHIJIA_SHIJUE_ROS(ros::NodeHandle &nh) :
    nh_(nh),
    target_list_ros_(nh_, this) {
  ros::NodeHandle private_nh("~");
  std::string frame_id;
  private_nh.param<std::string>("frame_id", frame_id, std::string("shijue"));
  target_list_ros_.set_frame_id(frame_id);
}

ZHIJIA_SHIJUE_ROS::~ZHIJIA_SHIJUE_ROS() {
}

void ZHIJIA_SHIJUE_ROS::receive_data() {
  while (ros::ok()) {
    receive_shijue_data();
  }
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_00() {
  target_list_ros_.send_shijue_target_00();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_01() {
  target_list_ros_.send_shijue_target_01();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_02() {
  target_list_ros_.send_shijue_target_02();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_03() {
  target_list_ros_.send_shijue_target_03();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_04() {
  target_list_ros_.send_shijue_target_04();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_05() {
  target_list_ros_.send_shijue_target_05();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_06() {
  target_list_ros_.send_shijue_target_06();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_07() {
  target_list_ros_.send_shijue_target_07();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_08() {
  target_list_ros_.send_shijue_target_08();
}

void ZHIJIA_SHIJUE_ROS::send_shijue_target_09() {
  target_list_ros_.send_shijue_target_09();
}

void ZHIJIA_SHIJUE_ROS::run() {
  receive_data_thread_ = std::thread(std::bind(&ZHIJIA_SHIJUE_ROS::receive_data, this));
  receive_data_thread_.detach();
}
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "zhijia_shijue_ros");
  ros::NodeHandle nh;
  zhijia_shijue::ZHIJIA_SHIJUE_ROS zhijia_shijue_ros_(nh);
  zhijia_shijue_ros_.run();
  ros::spin();
}
