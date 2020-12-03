#include "SenderComm.hpp"

std::string SPIComm::comm()
{
  return {"SPI"};
}

std::string UARTComm::comm()
{
  return {"UART"};
}

std::string I2CComm::comm()
{
  return {"I2C"};
}