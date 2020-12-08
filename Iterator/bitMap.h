#ifndef ITERATOR_BITMAP_H
#define ITERATOR_BITMAP_H
#include <cstdint>
#include "iterator.h"

class Iterator;

class BitMap {

private:
    uint8_t size;
    uint32_t map;
public:
    BitMap();
    friend class Iterator;
    uint8_t get(uint8_t index);
    uint8_t sizeMap();
    void set(uint8_t index);
    void unset(uint8_t index);
    void showReg();
    Iterator* createIterator() const;
};



#endif //ITERATOR_BITMAP_H
