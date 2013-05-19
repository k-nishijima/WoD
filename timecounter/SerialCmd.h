// -*- c++ -*-

#ifndef SERIALCMD_H
#define SERIALCMD_H

#include "arduino.h"
#include <inttypes.h>

// cmd table�ɓo�^�ł���R�}���h�̐�
#define SC_N_CMD_TABLE 8

typedef void (*SerialCmdFptr)();

class SerialCmdClass {
protected:
  uint32_t mCmdName[SC_N_CMD_TABLE];
  SerialCmdFptr mCmdFptr[SC_N_CMD_TABLE];
  uint8_t mCmdCount;

  char mRxStr[4];
  uint8_t mRxLen;

  uint32_t pack(char* buf);

public:
  SerialCmdClass();
  ~SerialCmdClass();

  // loop()�̒��Œ���I�ɃR�[�����邱��
  void Task();

  // �R�}���h�֐���o�^����
  bool AddCmd(char* cmd, SerialCmdFptr fptr);
};

extern SerialCmdClass SerialCmd;

#endif	// !SERIALCMD_H
