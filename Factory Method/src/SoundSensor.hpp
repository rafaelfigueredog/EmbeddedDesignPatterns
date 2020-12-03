#ifndef SOUND_SENSOR_HPP_
#define SOUND_SENSOR_HPP_

#include "Sensor.hpp"

class SoundSensor: public Sensor
{
public:
  std::string Operation() const override;
};

#endif