#ifndef TEMP_SENSOR_HPP_
#define TEMP_SENSOR_HPP_

#include "Sensor.hpp"

class TempSensor: public Sensor
{
public:
  std::string Operation() const override;
};

#endif