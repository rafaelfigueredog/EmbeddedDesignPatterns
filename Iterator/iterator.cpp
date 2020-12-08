#include "iterator.h"


Iterator::Iterator(BitMap *bitmap) {
    this->bitmap = bitmap;
    this->index = 0;
}


int Iterator::Fist() {
    int i = 0;
    while (i < 32) {
        if (bitmap->get(i) == 1) {
            index = i;
            return i;
        }
        i++;
    }
    return 32;

}

int Iterator::Next() {
    index++;
    while (this->index < 32) {
        if (bitmap->get(this->index) == 1) return  index;
        index++;
    }
    return 32;

}
int Iterator::End() {
    int i = 31;
    while (i >= 0) {
        if (bitmap->get(i) == 1) return i;
        i--;
    }
    return 32;

}

Iterator::~Iterator() {
    this->bitmap = bitmap;
    this->index = 0;
}

Iterator::Iterator(const BitMap *pMap) {
    this->bitmap = const_cast<BitMap *>(pMap);
    this->index = 0;
}

int Iterator::Current() {
    return index;
}

