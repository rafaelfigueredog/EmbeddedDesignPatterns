#include "SO.hpp"
#include <iostream>

SO::SO(std::string date)
{
  this->SODate = date;
  this->ts = new Timeshift();
}

SO::~SO()
{
  delete ts;
}

void SO::backup()
{
  this->ts->backup(this->SODate);
  std::cout << "Backup do sistema realizado no dia: " << this->SODate << "\n";
}

void SO::restore(int v)
{
  this->SODate = ts->restore(v);
  std::cout << "Sistema restaurado para o dia: " << this->SODate << "\n";
}

void SO::setDate(std::string date)
{
  this->SODate = date;
  std::cout << "Data do SO alterada para: " << this->SODate << "\n";
}

void SO::showDate()
{
  std::cout << "Data registrada no SO: " << this->SODate << "\n";
}

void SO::nBackups()
{
  std::cout << "A quantidade de backups feitos foi de: " << this->ts->backups.size() << "\n";
}
