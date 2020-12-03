#include "Sender.hpp"
#include "Comm1.hpp"
#include "Comm2.hpp"
#include "Comm3.hpp"


int main()
{

  SenderMode *mode = new SPIMode();
  SenderBaudrate *baud = new UARTBaudrate();
  SenderComm *commtype = new I2CComm();


  Sender *Comm = new Comm1(*commtype, *mode, *baud);
  Comm->read();
  Comm->write();
  
  return 0;
}