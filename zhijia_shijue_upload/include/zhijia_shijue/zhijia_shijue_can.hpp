

#ifndef ZHIJIA_SHIJUE_CAN_HPP
#define ZHIJIA_SHIJUE_CAN_HPP

#include <socket_can/socket_can.hpp>
#include "zhijia_shijue/target_list.hpp"


#include <cstdint>
#include <string>
#include <iostream>

namespace zhijia_shijue {
typedef enum can_messages {
  SHIJUE_Target_00 = 0x451,
  SHIJUE_Target_01 = 0x452,
  SHIJUE_Target_02 = 0x453,
  SHIJUE_Target_03 = 0x454,
  SHIJUE_Target_04 = 0x455,
  SHIJUE_Target_05 = 0x456,
  SHIJUE_Target_06 = 0x457,
  SHIJUE_Target_07 = 0x458,
  SHIJUE_Target_08 = 0x459,
  SHIJUE_Target_09 = 0x45A,
} can_messages;

class ZHIJIA_SHIJUE_CAN {
 public:
  ZHIJIA_SHIJUE_CAN();

  ZHIJIA_SHIJUE_CAN(std::string port);

  ~ZHIJIA_SHIJUE_CAN();

  virtual bool receive_shijue_data();

  target_list::SHIJUE_Target *pGet_target_00();

  target_list::SHIJUE_Target *pGet_target_01();

  target_list::SHIJUE_Target *pGet_target_02();

  target_list::SHIJUE_Target *pGet_target_03();

  target_list::SHIJUE_Target *pGet_target_04();

  target_list::SHIJUE_Target *pGet_target_05();

  target_list::SHIJUE_Target *pGet_target_06();

  target_list::SHIJUE_Target *pGet_target_07();

  target_list::SHIJUE_Target *pGet_target_08();

  target_list::SHIJUE_Target *pGet_target_09();

  
  virtual void send_shijue_target_00() {};

  virtual void send_shijue_target_01() {};

  virtual void send_shijue_target_02() {};

  virtual void send_shijue_target_03() {};

  virtual void send_shijue_target_04() {};

  virtual void send_shijue_target_05() {};

  virtual void send_shijue_target_06() {};

  virtual void send_shijue_target_07() {};

  virtual void send_shijue_target_08() {};

  virtual void send_shijue_target_09() {};


 private:
  socket_can::SocketCAN can_;

  target_list::SHIJUE_Target target_00_;

  target_list::SHIJUE_Target target_01_;

  target_list::SHIJUE_Target target_02_;

  target_list::SHIJUE_Target target_03_;

  target_list::SHIJUE_Target target_04_;

  target_list::SHIJUE_Target target_05_;

  target_list::SHIJUE_Target target_06_;

  target_list::SHIJUE_Target target_07_;

  target_list::SHIJUE_Target target_08_;

  target_list::SHIJUE_Target target_09_;
  
};
}

#endif //ZHIJIA_SHIJUE_CAN_HPP
