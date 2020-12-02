#ifndef SINGLETON_LED_H
#define SINGLETON_LED_H


class Led {
private:
    bool state;


public:
    Led();
    void on();
    void off();


};


#endif //SINGLETON_LED_H
