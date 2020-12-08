#ifndef COMM1_HPP_
#define COMM1_HPP_

#include "Sender.hpp"

class Comm1: public Sender
{
public:
  Comm1(SenderComm* sc, SenderMode* sm, SenderBaudrate* sb);
  void display();
};

class Comm2: public Sender
{
public:
  Comm2(SenderComm* sc, SenderMode* sm, SenderBaudrate* sb);
  void display();
};

class Comm3: public Sender
{
public:
  Comm3(SenderComm* sc, SenderMode* sm, SenderBaudrate* sb);
  void display();
};

#endif