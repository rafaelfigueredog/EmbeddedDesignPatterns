//
// Created by rafaelfigueredog on 12/1/20.
//

#ifndef ADAPTER_HARDWAREREGISTER_H
#define ADAPTER_HARDWAREREGISTER_H
#include <cstdint>


class HardwareRegister {

protected:
    uint8_t size;
    uint32_t map;
public:
    HardwareRegister();

    uint8_t get(uint8_t index);

    uint8_t lenght();

    void set(uint8_t index);

    void unset(uint8_t index);

    void showReg();

};


#endif //ADAPTER_HARDWAREREGISTER_H
