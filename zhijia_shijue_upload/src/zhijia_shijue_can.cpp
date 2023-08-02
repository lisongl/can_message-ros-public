
#include "zhijia_shijue/zhijia_shijue_can.hpp"

namespace zhijia_shijue {
ZHIJIA_SHIJUE_CAN::ZHIJIA_SHIJUE_CAN() :
    can_("can0") {
}

ZHIJIA_SHIJUE_CAN::ZHIJIA_SHIJUE_CAN(std::string port) :
    can_(port.c_str()) {
}

ZHIJIA_SHIJUE_CAN::~ZHIJIA_SHIJUE_CAN() {
}

bool ZHIJIA_SHIJUE_CAN::receive_shijue_data() {
  uint32_t frame_id;
  uint8_t dlc;
  uint8_t data[8] = {0};
  bool read_status = can_.read(&frame_id, &dlc, data);
  if (!read_status) {
    return false;
  }
  switch (frame_id) {
    
      case SHIJUE_Target_00:memcpy(target_00_.pGet_shijue_target0()->raw_data, data, dlc);
      send_shijue_target_00();
      break;

      case SHIJUE_Target_01:memcpy(target_01_.pGet_shijue_target1()->raw_data, data, dlc);
      send_shijue_target_01();
      break;

       case SHIJUE_Target_02:memcpy(target_02_.pGet_shijue_target2()->raw_data, data, dlc);
      send_shijue_target_02();
      break;

      case SHIJUE_Target_03:memcpy(target_03_.pGet_shijue_target3()->raw_data, data, dlc);
      send_shijue_target_03();
      break;

      case SHIJUE_Target_04:memcpy(target_04_.pGet_shijue_target4()->raw_data, data, dlc);
      send_shijue_target_04();
      break;

      case SHIJUE_Target_05:memcpy(target_05_.pGet_shijue_target0()->raw_data, data, dlc);
      send_shijue_target_05();
      break;

      case SHIJUE_Target_06:memcpy(target_06_.pGet_shijue_target1()->raw_data, data, dlc);
      send_shijue_target_06();
      break;

       case SHIJUE_Target_07:memcpy(target_07_.pGet_shijue_target2()->raw_data, data, dlc);
      send_shijue_target_07();
      break;

       case SHIJUE_Target_08:memcpy(target_08_.pGet_shijue_target3()->raw_data, data, dlc);
      send_shijue_target_08();
      break;

       case SHIJUE_Target_09:memcpy(target_09_.pGet_shijue_target4()->raw_data, data, dlc);
      send_shijue_target_09();
      break;

    default: {
#if DEBUG
      printf("Unidentified Message: %d\n", frame_id);
#endif
      break;
    }
  }
  return true;
}


target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_00() {
  return &target_00_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_01() {
  return &target_01_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_02() {
  return &target_02_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_03() {
  return &target_03_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_04() {
  return &target_04_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_05() {
  return &target_05_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_06() {
  return &target_06_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_07() {
  return &target_07_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_08() {
  return &target_08_;
}

target_list::SHIJUE_Target *ZHIJIA_SHIJUE_CAN::pGet_target_09() {
  return &target_09_;
}
}
