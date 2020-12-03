//
// Created by rafaelfigueredog on 11/30/20.
//

#include "Board.h"
Board::Board() {}
void Board::facedeBoard() {
    this->io = IO();
    this->memory = Memory();
    this->interruptHandler = InterruptHandler();
    this->led = Led();
    io.write("Boad Initialized");
}
