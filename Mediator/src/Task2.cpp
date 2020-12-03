#include "Task2.hpp"
#include <iostream>


Task2::Task2(): BaseTask(nullptr)
{
  
}

void Task2::DoC()
{
  if (scheduler_->isCPUFree())
  {
    std::cout << "Task2 using CPU to do C.\n";
  }
  else
  {
    std::cout << "Task2 can't do C 'cause CPU is busy.\n";
  }
}

void Task2::DoD()
{
  if (scheduler_->isCPUFree())
  {
    std::cout << "Task2 using CPU to do D.\n";
  }
  else
  {
    std::cout << "Task2 can't do D 'cause CPU is busy.\n";
  }
}
