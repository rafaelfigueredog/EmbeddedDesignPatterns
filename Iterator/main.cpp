#include <iostream>
#include "bitMap.h"
#include "iterator.h"

int main() {
    BitMap *bitmap = new BitMap();
    bitmap->set(1);
    bitmap->set(18);
    bitmap->set(22);
    bitmap->set(3);
    bitmap->set(15);
    bitmap->set(19);
    bitmap->set(27);
    Iterator *it = bitmap->createIterator();
    int i = it->Fist();
    int32_t size = 0;
    while ( size < bitmap->sizeMap() ) {
        std::cout <<  i << " ";
        i = it->Next();
        size++;
    }
    std::cout << it->End() << std::endl;
    return 0;
}
