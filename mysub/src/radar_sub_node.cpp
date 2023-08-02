#include <ros/ros.h>
#include<std_msgs/String.h>
#include<mysub/RadarStatus.h>
#include<mysub/TargetList.h>

void radar_callback(mysub::RadarStatus radar_status_msg)
{
    ROS_WARN("radar_status:%d ",radar_status_msg.radar_status);
    ROS_WARN("target_sum:%d ",radar_status_msg.target_sum);
}

void shijue_callback(const mysub::TargetList::ConstPtr &T)
{
    ROS_INFO("I recevied the data of shijue: ");
    for(std::vector<mysub::Target>::const_iterator it = T->targets.begin(); it != T->targets.end(); ++it)
  {
    ROS_INFO("id:%d", it->id);
    ROS_INFO("width:%f", it->width);
    ROS_INFO("length:%f", it->length);
    ROS_INFO("height:%f", it->height);
    ROS_INFO("long_velocity:%f", it->long_velocity);
    ROS_INFO("lat_velocity:%f", it->lat_velocity);
    ROS_INFO("long_accel:%f", it->long_accel);
    ROS_INFO("long_position:%f", it->long_position);
    ROS_INFO("angle:%f", it->angle);
    ROS_INFO("ext_angle_rate_left:%f", it->ext_angle_rate_left);
    ROS_INFO("ext_angle_rate_right:%f", it->ext_angle_rate_right);
  }
}

int main(int argc, char  *argv[])
{
    ros::init(argc,argv,"radar_sub_node");

    ros::NodeHandle nh;
    ros::Subscriber sub_radar = nh.subscribe("radar_status", 1, radar_callback);
    ros::Subscriber sub_shijue = nh.subscribe("zhijia_shijue/targets", 10, shijue_callback);

    while (ros::ok())
    {
        ros::spinOnce();
    }
    
    return 0;
}