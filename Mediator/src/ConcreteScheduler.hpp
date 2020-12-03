#ifndef CONCRETE_SCHEDULER_HPP_
#define CONCRETE_SCHEDULER_HPP_

#include "Scheduler.hpp"
#include "Task1.hpp"
#include "Task2.hpp"

class ConcreteScheduler : public Scheduler
{
private:
  Task1* task1_;
  Task2* task2_;

public:
  ConcreteScheduler(Task1* t1, Task2* t2);
  void unlockCPU();
};

#endif