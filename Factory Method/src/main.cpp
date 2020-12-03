#include "Sensor.hpp"
#include <iostream>

int main() {

  Sensor* newSensor = nullptr;

  newSensor = Sensor::Create(Light_S);
  std::cout << newSensor->Operation() << "\n";

  newSensor = Sensor::Create(Sound_S);
  std::cout << newSensor->Operation() << "\n";

  newSensor = Sensor::Create(Temp_S);
  std::cout << newSensor->Operation() << "\n";

  newSensor = Sensor::Create(Infrared_S);
  std::cout << newSensor->Operation() << "\n";
  
  delete newSensor;

  return 0;
}