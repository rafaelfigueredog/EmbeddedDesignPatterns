#ifndef TIMESHIFT_HPP_
#define TIMESHIFT_HPP_

#include <string>
#include <vector>
#include "SO.hpp"

class SO;

class Timeshift
{
private:
  friend class SO;
  std::vector<std::string> backups;
public:
  Timeshift();
  ~Timeshift();
  void backup(std::string date);
  std::string restore(int v);
};

#endif