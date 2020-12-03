#ifndef COMM3_HPP_
#define COMM3_HPP_

#include "Sender.hpp"

class Comm3: public Sender
{
public:
  Comm3(SenderComm sc, SenderMode sm, SenderBaudrate sb);
  void display();
};

#endif