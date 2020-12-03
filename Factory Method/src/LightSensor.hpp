#ifndef LIGHT_SENSOR_HPP_
#define LIGHT_SENSOR_HPP_

#include "Sensor.hpp"

class LightSensor: public Sensor
{
public:
  std::string Operation() const override;
};

#endif