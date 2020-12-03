//
// Created by rafaelfigueredog on 11/30/20.
//

#ifndef FACEDE_BOARD_H
#define FACEDE_BOARD_H

#include "Memory.h"
#include "InterruptHandler.h"
#include "IO.h"
#include "Led.h"

class Board {

private:

    Memory memory;
    InterruptHandler interruptHandler;
    IO io;
    Led led;

public:
    Board();
    void facedeBoard();
};


#endif //FACEDE_BOARD_H
