#include "Scheduler.hpp"

void Scheduler::setCPUStatus(bool status)
{
  this->CPUStatus = status;
}
bool Scheduler::isCPUFree()
{
  return this->CPUStatus;
}