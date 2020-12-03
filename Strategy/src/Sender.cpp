#include "Sender.hpp"
#include <iostream>

Sender::Sender(SenderComm sc, SenderMode sm, SenderBaudrate sb):
  sendComm(sc), sendMode(sm), sendBitrate(sb)
{

}

void Sender::write()
{
  std::cout << "Writing in: " << sendComm.comm() << "mode: " << sendMode.mode() << "bitrate: " << sendBitrate.baudrate() << "\n";
}

void Sender::read()
{
  std::cout << "Reading from: " << sendComm.comm() << "mode: " << sendMode.mode() << "bitrate: " << sendBitrate.baudrate() << "\n";
}