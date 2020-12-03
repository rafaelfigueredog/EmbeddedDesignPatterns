#include "SenderMode.hpp"

std::string SPIMode::mode()
{
  return {"WORD"};
}

std::string UARTMode::mode()
{
  return {"BYTE"};
}

std::string I2CMode::mode()
{
  return {"D-WORD"};
}