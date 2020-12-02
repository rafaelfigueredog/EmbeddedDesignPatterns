//
// Created by rafaelfigueredog on 12/1/20.
//

#include "HardwareRegister.h"
#include <cstdint>
#include <cstdio>

HardwareRegister::HardwareRegister() {
    this->map = 0;
    this->size = 0;
}

uint8_t HardwareRegister::get(uint8_t index) {
    if (index >= 0 && index <= 31) {
        return (map & (1 << (31 - index))) != 0;
    }
    return -1;
}

void HardwareRegister::set(uint8_t index) {
    if (index >= 0 && index <= 31) {
        if (get(index) != 0 ) return;
        else {
            uint32_t mask = 1;
            this->map =  this->map | (mask << (31 - index));
            this->size++;
        }
    }
}

uint8_t HardwareRegister::lenght() {
    return  this->size;
}


void HardwareRegister::unset(uint8_t index) {
    if (index >= 0 && index <= 31) {
        if (get(index) != 1 ) return;
        else {
            uint32_t mask = UINT32_MAX ^ (1 << (31 - index) );
            map = this->map & mask;
            size--;
        }
    }
}

void HardwareRegister::showReg() {
    uint32_t it = 31;
    while(it <= 32) {
        printf("%d", (map&(1<<it) ? 1 : 0));
        it--;
    }
    printf("\n");
}
