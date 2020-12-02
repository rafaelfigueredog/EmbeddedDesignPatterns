#ifndef RADIO_BUILDER1_HPP_
#define RADIO_BUILDER1_HPP_

#include "Builder.hpp"
#include "Radio.hpp"

class RadioBuilder1 : public Builder
{
private:
  Radio *radio;

public:
  RadioBuilder1();
  ~RadioBuilder1();
  void Reset();
  void ProduceRadio() const override;
  void ProduceSPI() const override;
  void ProduceGPIO() const override;
  Radio* GetProduct();
};

#endif