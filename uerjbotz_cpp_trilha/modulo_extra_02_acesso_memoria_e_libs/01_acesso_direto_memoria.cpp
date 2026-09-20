#include <iostream>
#include <cstdint>

int main() {
    // Arrays estilo C e aritméticos de ponteiro
    uint8_t bufferLidar[4] = {0x10, 0x20, 0x30, 0x40};

    // Acesso normal por índice
    std::cout << "Elemento 0: " << (int)bufferLidar[0] << "\n";

    // Acesso via Aritmética de Ponteiros
    uint8_t* ptr = bufferLidar;
    std::cout << "Primeiro byte (*ptr): " << (int)(*ptr) << "\n";
    std::cout << "Segundo byte (*(ptr + 1)): " << (int)(*(ptr + 1)) << "\n";

    // Casting explícito de memória (reinterpretação de tipos)
    uint32_t dadosBrutos = 0x12345678;
    uint8_t* bytePtr = reinterpret_cast<uint8_t*>(&dadosBrutos);

    std::cout << "\nInspecionando bytes de uint32_t na memória:\n";
    for (size_t i = 0; i < sizeof(uint32_t); i++) {
        std::cout << "Byte " << i << ": 0x" << std::hex << (int)*(bytePtr + i) << std::dec << "\n";
    }

    return 0;
}