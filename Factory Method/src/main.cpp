#include "Sensor.hpp"
#include <iostream>

int main() {

  Sensor* Sensor1 = nullptr;
  Sensor* Sensor2 = nullptr;

  Sensor1 = Sensor::Create(Light_S);
  std::cout << Sensor1->Operation() << "\n";

  Sensor1 = Sensor::Create(Sound_S);
  std::cout << Sensor1->Operation() << "\n";

  Sensor2 = Sensor::Create(Temp_S);
  std::cout << Sensor2->Operation() << "\n";

  Sensor2 = Sensor::Create(Infrared_S);
  std::cout << Sensor2->Operation() << "\n";
  
  delete Sensor1;
  delete Sensor2;

  return 0;
}