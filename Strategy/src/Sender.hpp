#ifndef SENDER_HPP_
#define SENDER_HPP_

#include <string>
#include "SenderComm.hpp"
#include "SenderMode.hpp"
#include "SenderBaudrate.hpp"

class Sender
{
private:
  SenderComm* sendComm; // comm type
  SenderMode* sendMode; // byte or word
  SenderBaudrate* sendBitrate; // comm bitrate
public:
  Sender(SenderComm* sc, SenderMode* sm, SenderBaudrate* sb);
  void write();
  void read();
};

#endif