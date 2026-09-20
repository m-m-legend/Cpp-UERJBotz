// 02_referencias_vs_ponteiros.cpp
// Referências são apelidos seguros para variáveis existentes.

#include <iostream>

// Passagem por valor: gera uma CÓPIA na memória (ineficiente para dados grandes)
void ResetarInvalido(float voltagem) {
    voltagem = 0.0f;
}

// Passagem por referência: altera a variável ORIGINAL sem cópias
void ResetarValido(float& voltagem) {
    voltagem = 0.0f;
}

int main() {
    float bateria = 12.6f;

    ResetarInvalido(bateria);
    std::cout << "Pós ResetInvalido: " << bateria << " V\n"; // 12.6 V

    ResetarValido(bateria);
    std::cout << "Pós ResetValido: " << bateria << " V\n";   // 0.0 V

    return 0;
}