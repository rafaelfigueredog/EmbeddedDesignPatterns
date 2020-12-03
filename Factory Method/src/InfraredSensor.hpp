#ifndef INFRARED_SENSOR_HPP_
#define INFRARED_SENSOR_HPP_

#include "Sensor.hpp"

class InfraredSensor: public Sensor
{
public:
  std::string Operation() const override;
};

#endif