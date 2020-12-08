#include "Sender.hpp"
#include "Comm.hpp"

#include <iostream>


int main()
{

  SenderMode *mode = new SPIMode();
  SenderBaudrate *baud = new UARTBaudrate();
  SenderComm *commtype = new I2CComm();

  Sender *Comm = new Comm1(commtype, mode, baud);
  Comm->read();
  Comm->write();
  
  return 0;
}