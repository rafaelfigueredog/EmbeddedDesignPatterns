#include <iostream>
#include "Sensor.hpp"

Sensor::~Sensor()
{
  std::cout << "Sensor de interesse deletado.\n";
}

void Sensor::Attach(IObserver *observer)
{
  list_observer_.push_back(observer);
}

void Sensor::Detach(IObserver *observer)
{
  list_observer_.remove(observer);
}

void Sensor::Notify()
{
  std::list<IObserver *>::iterator iterator = list_observer_.begin();
  HowManyObserver();
  while (iterator != list_observer_.end())
  {
    (*iterator)->Update(message_);
    ++iterator;
  }
}

void Sensor::CreateMessage(float v)
{
  this->message_ = v;
  Notify();
}

void Sensor::HowManyObserver()
{
  std::cout << "Este sensor é observado por " << list_observer_.size() << " observadores.\n";
}

void Sensor::SomeBusinessLogic()
{
  this->message_ = 3.14;
  Notify();
  std::cout << "Irei fazer algo importante\n";
}