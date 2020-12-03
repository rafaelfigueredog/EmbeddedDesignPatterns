#include "Comm1.hpp"
#include "Comm2.hpp"
#include "Comm3.hpp"
#include "SenderBaudrate.hpp"
#include "SenderMode.hpp"
#include "SenderComm.hpp"

#include <iostream>

Comm1::Comm1(SenderComm sc, SenderMode sm, SenderBaudrate sb): Sender(sc, sm, sb)
{

}

void Comm1::display() {
  std::cout << "Comm1!\n";
}

Comm2::Comm2(SenderComm sc, SenderMode sm, SenderBaudrate sb): Sender(sc, sm, sb)
{

}

void Comm2::display() {
  std::cout << "Comm2!\n";
}

Comm3::Comm3(SenderComm sc, SenderMode sm, SenderBaudrate sb): Sender(sc, sm, sb)
{

}

void Comm3::display() {
  std::cout << "Comm3!\n";
}
