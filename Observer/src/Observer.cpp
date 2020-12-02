#include "Observer.hpp"
#include <iostream>

int Observer::static_number_ = 0;

Observer::Observer(Sensor &subject) : subject_(subject)
{
  this->subject_.Attach(this);
  std::cout << "Oi, eu sou o Observador \"" << ++Observer::static_number_ << "\".\n";
  this->number_ = Observer::static_number_;
}

Observer::~Observer()
{
  std::cout << "Observador deletado \"" << this->number_ << "\".\n";
}

void Observer::Update(const float &message_from_subject)
{
  message_from_subject_ = message_from_subject;
  PrintInfo();
}

void Observer::RemoveMeFromTheList()
{
  subject_.Detach(this);
  std::cout << "Observador \"" << number_ << "\" removido.\n";
}

void Observer::PrintInfo()
{
  std::cout << "Observador \"" << this->number_ << "\": tem um novo dado disponível --> " << this->message_from_subject_ << "\n";
}