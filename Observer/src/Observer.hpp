#ifndef OBSERVER_HPP_
#define OBSERVER_HPP_

#include "IObserver.hpp"
#include "Sensor.hpp"

class Observer : public IObserver
{
public:

	Observer(Sensor &subject);
	virtual ~Observer();
	void Update(const float &message_from_subject) override;
	void RemoveMeFromTheList();
	void PrintInfo();

private:
	
  float message_from_subject_;
	Sensor &subject_;
	static int static_number_;
	int number_;

};

#endif