#include "Sensor.hpp"
#include "LightSensor.hpp"
#include "SoundSensor.hpp"
#include "InfraredSensor.hpp"
#include "TempSensor.hpp"

Sensor::~Sensor()
{  
}

Sensor* Sensor::Create(SensorType type)
{
  switch (type) {
    case Light_S:
      return new LightSensor();
    case Sound_S:
      return new SoundSensor();
    case Temp_S:
      return new TempSensor();
    case Infrared_S:
      return new InfraredSensor();
    default:
      return NULL;
  }
}