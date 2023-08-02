
#ifndef ZHIJIA_SHIJUE_TARGET_LIST_HPP
#define ZHIJIA_SHIJUE_TARGET_LIST_HPP

#include <cstdint>

namespace zhijia_shijue {
namespace target_list {
typedef union target_data0 {
  struct {
    uint64_t Target_Id:4;
    uint64_t Target_Age1:4;
    uint64_t Target_Age2:8;
    uint64_t Target_Age3:4;
    uint64_t Target_Object_Class:4;
  } data = {};
  uint8_t raw_data[4];
} target_data0;

typedef union target_data1 {
  struct {
    uint64_t Target_Width:7;
    uint64_t Target_Length1:1;
    uint64_t Target_Length2:7;
    uint64_t Target_Height1:1;
    uint64_t Target_Height2:5;
    uint64_t Target_Long_Velocity1:3;
    uint64_t Target_Long_Velocity2:8;
    uint64_t Target_Long_Velocity3:1;
    uint64_t Target_Lat_Velocity1:7;
    uint64_t Target_Lat_Velocity2:5;
    uint64_t Target_Long_Accel1:3;
    uint64_t Target_Long_Accel2:8;
    uint64_t Target_Long_Accel3:2;
  } data = {};
  uint8_t raw_data[4];
} target_data1;

typedef union target_data2 {
  struct {
    uint64_t Target_Long_Position1:8;
    uint64_t Target_Long_Position2:5;
  } data = {};
  uint8_t raw_data[4];
} target_data2;

typedef union target_data3 {
  struct {
    uint64_t Target_Angle1:8;
    uint64_t Target_Angle2:2;
  } data = {};
  uint8_t raw_data[4];
} target_data3;

typedef union target_data4 {
  struct {
    uint64_t Target_Ext_Angle_Rate_Left1:8;
    uint64_t Target_Ext_Angle_Rate_Left2:2;
    uint64_t Target_Ext_Angle_Rate_Right1:6;
    uint64_t Target_Ext_Angle_Rate_Right2:4;
  } data = {};
  uint8_t raw_data[4];
} target_data4;

class SHIJUE_Target {
 public:
  SHIJUE_Target();

  ~SHIJUE_Target();

    int get_target_Id();

    double get_target_Width();

    double get_target_Length();

    double get_target_Height();

    double get_target_Long_Velocity();

    double get_target_Lat_Velocity();

    double get_target_Long_Accel();

    double get_target_Long_Position();

    double get_target_Angle();

    double get_target_Ext_Angle_Rate_Left();

    double get_target_Ext_Angle_Rate_Right();

    target_data0 *pGet_shijue_target0();

    target_data1 *pGet_shijue_target1();

    target_data2 *pGet_shijue_target2();

    target_data3 *pGet_shijue_target3();

    target_data4 *pGet_shijue_target4();

 private:
    target_data0 shijue_target_msg0;
    target_data1 shijue_target_msg1;
    target_data2 shijue_target_msg2;
    target_data3 shijue_target_msg3;
    target_data4 shijue_target_msg4;
};
}
}

#endif //ZHIJIA_SHIJUE_TARGET_LIST_HPP
