#include <iostream>
#include "HardwareRegister.h"
#include "SoftwareAdapter.h"

int main() {
    // Sem adapter
    HardwareRegister reg = HardwareRegister();
    std::cout << "Registrador Inicializado" << std::endl;
    reg.showReg();

    std::cout << "\nValor setado sem interface adaptada." << std::endl;
    reg.set(10);
    reg.showReg();

    std::cout << "\nMétodo Set com interface especifica." << std::endl;
    SoftwareAdapter adaptedReg = SoftwareAdapter();
    adaptedReg.set(31, true);
    adaptedReg.showReg();
    return 0;
}
