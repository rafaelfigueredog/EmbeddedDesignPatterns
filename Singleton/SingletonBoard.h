#ifndef SINGLETON_SINGLETONBOARD_H
#define SINGLETON_SINGLETONBOARD_H
#include "Led.h"

class SingletonBoard {

private:
    static SingletonBoard *instance;

protected:
    SingletonBoard();

public:
    Led led;
    static SingletonBoard& getInstance();
};


#endif //SINGLETON_SINGLETONBOARD_H
