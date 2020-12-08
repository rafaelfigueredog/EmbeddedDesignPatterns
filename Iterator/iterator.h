//
// Created by rafaelfigueredog on 12/3/20.
//

#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H
#include "bitMap.h"
#include "iteratorInterface.h"

class BitMap;

class Iterator : public IteratorInterface {
private:
    BitMap *bitmap;
    int index;

public:
    Iterator(BitMap *bitmap);
    ~Iterator();
    int Fist();
    int Next();
    int End();
    int Current();

    Iterator(const BitMap *pMap);
};


#endif //ITERATOR_ITERATOR_H
