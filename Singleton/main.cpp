#include <iostream>
#include "SingletonBoard.h"

int main() {

    SingletonBoard board = SingletonBoard::getInstance();
    board.led.on();
    board.led.off();

    return 0;
}
