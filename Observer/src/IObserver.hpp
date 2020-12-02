#ifndef IOBSERVER_H
#define IOBSERVER_H

// Interface do observador
class IObserver
{
public:
	virtual ~IObserver(){};
	virtual void Update(const float &message_from_subject) = 0;
};

#endif