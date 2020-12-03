#ifndef ISUBJECT_HPP_
#define ISUBJECT_HPP_

#include "IObserver.hpp"

// Interface do observavel
class ISubject
{
public:
	virtual ~ISubject(){};
	virtual void Attach(IObserver *observer) = 0;
	virtual void Detach(IObserver *observer) = 0;
	virtual void Notify() = 0;
};
#endif