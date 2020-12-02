#include <iostream>
#include "RadioBuilder1.hpp"

int main()
{
	RadioBuilder1 *radioBuilder = new RadioBuilder1();
	std::cout << "Standard basic product:\n";
	radioBuilder->ProduceRadio();

	Radio *radio = radioBuilder->GetProduct();
	radio->ListParts();
	delete radio;

	std::cout << "Standard full featured product:\n";
	radioBuilder->ProduceRadio();
	radioBuilder->ProduceSPI();
	radioBuilder->ProduceGPIO();

	radio = radioBuilder->GetProduct();
	radio->ListParts();
	delete radio;

	delete radioBuilder;
	return 0;
}