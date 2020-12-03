#ifndef SCHEDULER_HPP_
#define SCHEDULER_HPP_

#include <string>

class BaseTask;

class Scheduler
{
protected:
  bool CPUStatus;
public:
  void setCPUStatus(bool status);
  bool isCPUFree();
};

#endif