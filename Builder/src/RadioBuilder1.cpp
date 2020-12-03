#include "RadioBuilder1.hpp"

RadioBuilder1::RadioBuilder1()
{
  this->Reset();
}

RadioBuilder1::~RadioBuilder1()
{
  delete radio;
}

void RadioBuilder1::Reset()
{
  this->radio = new Radio();
}

void RadioBuilder1::ProduceRadio() const
{
  this->radio->parts_.push_back("At86rf215");
}

void RadioBuilder1::ProduceSPI() const
{
  this->radio->parts_.push_back("SPI");
}

void RadioBuilder1::ProduceGPIO() const
{
  this->radio->parts_.push_back("GPIO-PWR");
  this->radio->parts_.push_back("GPIO-RST");
  this->radio->parts_.push_back("GPIO-CS");
  this->radio->parts_.push_back("GPIO-IRQ");
}

Radio* RadioBuilder1::GetProduct()
{
  Radio *result = this->radio;
  this->Reset();
  return result;
}
