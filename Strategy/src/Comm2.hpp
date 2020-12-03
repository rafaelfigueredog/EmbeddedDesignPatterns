#ifndef COMM2_HPP_
#define COMM2_HPP_

#include "Sender.hpp"

class Comm2: public Sender
{
public:
  Comm2(SenderComm sc, SenderMode sm, SenderBaudrate sb);
  void display();
};

#endif