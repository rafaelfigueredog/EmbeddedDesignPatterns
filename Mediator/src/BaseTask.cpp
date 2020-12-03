#include "BaseTask.hpp"

BaseTask::BaseTask(Scheduler *scheduler = nullptr): scheduler_(scheduler)
{
}

void BaseTask::set_mediator(Scheduler *scheduler)
{
  this->scheduler_ = scheduler;
}