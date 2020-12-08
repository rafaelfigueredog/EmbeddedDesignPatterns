#include "bitMap.h"
#include <cstdint>
#include <cstdio>

BitMap::BitMap() {
    this->map = 0;
    this->size = 0;
}

uint8_t BitMap::get(uint8_t index) {
    if (index >= 0 && index <= 31) {
        return (map & (1 << (31 - index))) != 0;
    }
    return -1;
}

void BitMap::set(uint8_t index) {
    if (index >= 0 && index <= 31) {
        if (get(index) != 0 ) return;
        else {
            uint32_t mask = 1;
            this->map =  this->map | (mask << (31 - index));
            this->size++;
        }
    }
}

uint8_t BitMap::sizeMap() {
    return  this->size;
}


void BitMap::unset(uint8_t index) {
    if (index >= 0 && index <= 31) {
        if (get(index) != 1 ) return;
        else {
            uint32_t mask = UINT32_MAX ^ (1 << (31 - index) );
            map = this->map & mask;
            size--;
        }
    }
}

void BitMap::showReg() {
    uint32_t it = 31;
    while(it <= 32) {
        printf("%d", (map&(1<<it) ? 1 : 0));
        it--;
    }
    printf("\n");
}


Iterator* BitMap::createIterator() const {
    return new Iterator(this);
}

