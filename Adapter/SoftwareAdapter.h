typedef enum { f, t } bit;
#ifndef ADAPTER_SOFTWAREADAPTER_H
#define ADAPTER_SOFTWAREADAPTER_H
#include "HardwareRegister.h"
#include "SoftwareInterface.h"

class SoftwareAdapter : public HardwareRegister, SoftwareInterface  {

public:
    SoftwareAdapter();
    void set(uint8_t index, bool v) override;


};


#endif //ADAPTER_SOFTWAREADAPTER_H
