#include "Task1.hpp"
#include <iostream>

Task1::Task1(): BaseTask(nullptr)
{
  
}

void Task1::DoA()
{
  if (scheduler_->isCPUFree())
  {
    std::cout << "Task1 using CPU to do A.\n";
    scheduler_->setCPUStatus(false);
  }
  else {
    std::cout << "Task1 can't do A 'cause CPU is busy.\n";
  }
}

void Task1::DoB()
{
  if (scheduler_->isCPUFree())
  {
    std::cout << "Task1 using CPU to do B.\n";
  }
  else {
    std::cout << "Task1 can't do B 'cause CPU is busy.\n";
  }
}
