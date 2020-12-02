#ifndef RADIO_HPP_
#define RADIO_HPP_

#include <vector>
#include <string>

class Radio
{
public:
  std::vector<std::string> parts_;
  void ListParts() const;
};

#endif