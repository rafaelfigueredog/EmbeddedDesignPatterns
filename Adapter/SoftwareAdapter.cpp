#include "SoftwareAdapter.h"

void SoftwareAdapter::set(uint8_t index, bool v) {
    if (index >= 0 && index <= 31) {
        if ( get(v) != 0 && v ) return;
        else {
            uint32_t mask = 1;
            this->map =  this->map | (mask << (31-index));
            this->size++;
        }
    }
}

SoftwareAdapter::SoftwareAdapter() = default;

