// 01_lambdas_e_callbacks.cpp
// Lambdas em C++ e captura de variáveis no escopo local.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> errosEncoders = {-2, 5, 12, -8, 0, 15};
    int limiteAlerta = 10;

    // Expressão Lambda [captura](parâmetros) { corpo }
    auto verificarErro = [limiteAlerta](int erro) {
        if (std::abs(erro) > limiteAlerta) {
            std::cout << "Erro crítico detectado: " << erro << "\n";
        }
    };

    // Aplicando a lambda em cada elemento do vetor
    std::for_each(errosEncoders.begin(), errosEncoders.end(), verificarErro);

    return 0;
}