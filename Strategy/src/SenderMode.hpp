#ifndef SENDER_MODE_HPP_
#define SENDER_MODE_HPP_

#include <string>

class SenderMode
{
public:
  virtual std::string mode();
};

class SPIMode: public SenderMode
{
  std::string mode() override;
};

class UARTMode: public SenderMode
{
  std::string mode() override;
};

class I2CMode: public SenderMode
{
  std::string mode() override;
};

#endif