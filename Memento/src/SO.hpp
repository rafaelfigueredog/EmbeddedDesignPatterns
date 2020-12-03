#ifndef SO_HPP_
#define SO_HPP_

#include <string>
#include "Timeshift.hpp"

class Timeshift;

class SO
{
private:
  Timeshift* ts;
  std::string SODate;
public:
  SO(std::string date = "01/01/1990");
  void backup();
  void restore(int v);
  void showDate();
  void setDate(std::string date);
  void nBackups();
};

#endif