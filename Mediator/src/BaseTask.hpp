#ifndef BASE_TASK_HPP_
#define BASE_TASK_HPP_

#include "Scheduler.hpp"
class Scheduler;

class BaseTask
{
protected:
  Scheduler *scheduler_;

public:
  BaseTask(Scheduler *scheduler);
  void set_mediator(Scheduler *scheduler);
};

#endif