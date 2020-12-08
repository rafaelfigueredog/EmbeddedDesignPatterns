#ifndef SENDER_COMM_HPP_
#define SENDER_COMM_HPP_

#include <string>

class SenderComm
{
public:
  virtual std::string comm() = 0;
};

class SPIComm: public SenderComm
{
  std::string comm() override;
};

class UARTComm: public SenderComm
{
  std::string comm() override;
};

class I2CComm: public SenderComm
{
  std::string comm() override;
};

#endif