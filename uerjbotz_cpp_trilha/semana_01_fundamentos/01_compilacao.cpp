// 01_compilacao.cpp
// O que é uma Translation Unit (TU) e a diferença entre Declaração e Definição.

#include <iostream>

// Forward Declaration: Avisa ao compilador que a função existe em algum lugar.
void InicializarSistemasRobo();

int main() {
    std::cout << "[UERJBotz] Compilando Unidade Principal...\n";
    InicializarSistemasRobo();
    return 0;
}

void InicializarSistemasRobo() {
    std::cout << "[UERJBotz] Todos os subsistemas (Visão, Controle, Micro) prontos.\n";
}