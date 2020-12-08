#include "SenderBaudrate.hpp"

std::string SPIBaudrate::baudrate() 
{
  return "9600";
}

std::string UARTBaudrate::baudrate() 
{
  return "19200";
}

std::string I2CBaudrate::baudrate() 
{
  return "115200";
}
