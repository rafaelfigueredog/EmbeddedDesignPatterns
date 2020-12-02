#include <iostream>
#include <list>


class IObserver
{
public:
	virtual ~IObserver(){};
	virtual void Update(const float &message_from_subject) = 0;
};

class ISubject
{
public:
	virtual ~ISubject(){};
	virtual void Attach(IObserver *observer) = 0;
	virtual void Detach(IObserver *observer) = 0;
	virtual void Notify() = 0;
};

class Sensor : public ISubject
{
public:
	virtual ~Sensor()
	{
		std::cout << "Sensor de interesse deletado.\n";
	}
	void Attach(IObserver *observer) override
	{
		list_observer_.push_back(observer);
	}
	void Detach(IObserver *observer) override
	{
		list_observer_.remove(observer);
	}
	void Notify() override
	{
		std::list<IObserver *>::iterator iterator = list_observer_.begin();
		HowManyObserver();
		while (iterator != list_observer_.end())
		{
			(*iterator)->Update(message_);
			++iterator;
		}
	}

	void CreateMessage(float v)
	{
		this->message_ = v; // metodo para verificar temperatura invocado aqui
		Notify();
	}
	void HowManyObserver()
	{
		std::cout << "Este sensor é observado por " << list_observer_.size() << " observadores.\n";
	}

	void SomeBusinessLogic()
	{
		this->message_ = 3.14;
		Notify();
		std::cout << "Irei fazer algo importante\n";
	}

private:
	std::list<IObserver *> list_observer_;
	float message_;
};

class Observer : public IObserver
{
public:
	Observer(Sensor &subject) : subject_(subject)
	{
		this->subject_.Attach(this);
		std::cout << "Oi, eu sou o Observador \"" << ++Observer::static_number_ << "\".\n";
		this->number_ = Observer::static_number_;
	}
	virtual ~Observer()
	{
		std::cout << "Observador deletado \"" << this->number_ << "\".\n";
	}

	void Update(const float &message_from_subject) override
	{
		message_from_subject_ = message_from_subject;
		PrintInfo();
	}
	void RemoveMeFromTheList()
	{
		subject_.Detach(this);
		std::cout << "Observador \"" << number_ << "\" removido.\n";
	}
	void PrintInfo()
	{
		std::cout << "Observador \"" << this->number_ << "\": tem um novo dado disponível --> " << this->message_from_subject_ << "\n";
	}

private:
	float message_from_subject_;
	Sensor &subject_;
	static int static_number_;
	int number_;
};

int Observer::static_number_ = 0;

int main()
{
	Sensor *sensor_tmp = new Sensor();
	Sensor *sensor_snd = new Sensor();
	Sensor *sensor_lgt = new Sensor();
	Observer *observer1 = new Observer(*sensor_tmp);
	Observer *observer2 = new Observer(*sensor_snd);
	Observer *observer3 = new Observer(*sensor_lgt);
	Observer *observer4;
	Observer *observer5;

	sensor_tmp->CreateMessage(myTMP.getTempC());
	observer3->RemoveMeFromTheList();

	sensor_snd->CreateMessage(mySND.getdBm());
	sensor_lgt->Attach(observer4);
	sensor_snd->Attach(observer4);

	observer2->RemoveMeFromTheList();
	sensor_tmp->Attach(observer5);

	sensor_lgt->CreateMessage(myLGT.getLGT());
	observer5->RemoveMeFromTheList();

	observer4->RemoveMeFromTheList();
	observer1->RemoveMeFromTheList();

	delete observer5;
	delete observer4;
	delete observer3;
	delete observer2;
	delete observer1;
	delete sensor_tmp;
	delete sensor_snd;
	delete sensor_lgt;
	return 0;
}