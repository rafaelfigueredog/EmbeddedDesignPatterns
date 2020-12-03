#include <iostream>
#include <string>

#include "BaseTask.hpp"
#include "Task1.hpp"
#include "Task2.hpp"
#include "ConcreteScheduler.hpp"

int main()
{
  Task1 *t1 = new Task1;
  Task2 *t2 = new Task2;
  ConcreteScheduler *Scheduler = new ConcreteScheduler(t1, t2);
  std::cout << "Task triggers operation A.\n";
  t1->DoA();
  std::cout << "\n";
  std::cout << "Task triggers operation D.\n";
  t2->DoD();
  Scheduler->unlockCPU();
  std::cout << "\n";
  std::cout << "Task triggers operation D.\n";
  t2->DoD();

  delete t1;
  delete t2;
  delete Scheduler;
  return 0;
}