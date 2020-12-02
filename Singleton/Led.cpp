#include <iostream>
#include "Led.h"


Led::Led() = default;

void Led::on() {
    this->state = true;
    std::cout << "Led Ligado" << std::endl;
}

void Led::off() {
    this->state = false;
    std::cout << "Led Desligado" << std::endl;
}
