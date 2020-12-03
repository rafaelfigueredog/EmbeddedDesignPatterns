#include "Timeshift.hpp"

Timeshift::Timeshift()
{

}

Timeshift::~Timeshift()
{
  this->backups.clear();
}

void Timeshift::backup(std::string date)
{
  this->backups.push_back(date);
}

std::string Timeshift::restore(int v)
{
  return this->backups.at(v);
}