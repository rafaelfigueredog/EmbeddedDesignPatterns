#include "SingletonBoard.h"

SingletonBoard::SingletonBoard() {
    this->led = Led();
}

SingletonBoard* SingletonBoard::instance = nullptr;

SingletonBoard &SingletonBoard::getInstance() {
    if (instance == nullptr)
        instance = new SingletonBoard();

    return *instance;
}
