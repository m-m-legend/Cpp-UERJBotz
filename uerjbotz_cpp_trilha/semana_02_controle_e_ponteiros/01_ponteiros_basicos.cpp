// 01_ponteiros_basicos.cpp
// Ponteiros são apenas endereços de memória (números de 32 ou 64 bits).

#include <iostream>

int main() {
    int encoderCount = 500;

    // & obtém o endereço da variável
    int* ptrEncoder = &encoderCount;

    std::cout << "Valor original: " << encoderCount << "\n";
    std::cout << "Endereço de memória: " << ptrEncoder << "\n";

    // * (desreferencia) acessa/modifica o valor diretamente na memória
    *ptrEncoder = 750;

    std::cout << "Novo valor após modificação via ponteiro: " << encoderCount << "\n";
    return 0;
}