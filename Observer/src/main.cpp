#include "Observer.hpp"
#include "Sensor.hpp"

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