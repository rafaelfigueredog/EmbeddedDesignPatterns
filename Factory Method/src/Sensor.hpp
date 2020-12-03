#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#include <string>
#include "SensorType.hpp"

class Sensor
{
public:
  virtual ~Sensor();
  virtual std::string Operation() const = 0;
  static Sensor* Create(SensorType type);
};

#endif