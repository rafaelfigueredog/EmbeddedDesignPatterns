#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#include "ISubject.hpp"
#include <list>

class Sensor : public ISubject
{
public:
  virtual ~Sensor();
  void Attach(IObserver *observer) override;
  void Detach(IObserver *observer) override;
  void Notify() override;
  void CreateMessage(float v);
  void HowManyObserver();
  void SomeBusinessLogic();

private:
  std::list<IObserver *> list_observer_;
  float message_;
};

#endif