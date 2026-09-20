// 02_tipos_e_tamanhos.cpp
// Tipos com tamanho fixo para microcontroladores (STM32, ESP32, Arduino).

#include <iostream>
#include <cstdint>

int main() {
    // Tipos padrão de tamanho fixo (<cstdint>)
    uint8_t  pwmMotor    = 255;    // 1 byte (0 a 255)
    int16_t  leituraGyro = -1024;  // 2 bytes
    uint32_t tempoTicks  = 450000; // 4 bytes
    float    bateriaVolts = 11.4f; // 4 bytes (precisão simples)

    std::cout << "--- Tamanho dos Tipos em Memória ---\n";
    std::cout << "uint8_t:  " << sizeof(uint8_t)  << " byte(s)\n";
    std::cout << "int16_t:  " << sizeof(int16_t)  << " byte(s)\n";
    std::cout << "uint32_t: " << sizeof(uint32_t) << " byte(s)\n";
    std::cout << "float:    " << sizeof(float)    << " byte(s)\n";

    return 0;
}