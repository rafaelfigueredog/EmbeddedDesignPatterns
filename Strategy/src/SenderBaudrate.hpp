#ifndef SENDER_BAUDRATE_HPP_
#define SENDER_BAUDRATE_HPP_

#include <string>

class SenderBaudrate
{
public:
  virtual std::string baudrate();
};

class SPIBaudrate: public SenderBaudrate
{
  std::string baudrate() override;
};

class UARTBaudrate: public SenderBaudrate
{
  std::string baudrate() override;
};

class I2CBaudrate: public SenderBaudrate
{
  std::string baudrate() override;
};

#endif