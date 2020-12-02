#ifndef BUILDER_HPP_
#define BUILDER_HPP_

class Builder
{
public:
	virtual ~Builder() {}
	virtual void ProduceRadio() const = 0;
	virtual void ProduceSPI() const = 0;
	virtual void ProduceGPIO() const = 0;
};

#endif