#include "ConcreteScheduler.hpp"
#include <iostream>

ConcreteScheduler::ConcreteScheduler(Task1 *t1, Task2 *t2): task1_(t1), task2_(t2)
{
  this->task1_->set_mediator(this);
  this->task2_->set_mediator(this);
  this->CPUStatus = true;
}

void ConcreteScheduler::unlockCPU()
{

  this->setCPUStatus(true);
  std::cout << "CPU is now free!\n";
}