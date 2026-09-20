// <bits/stdc++.h> é um cabeçalho não-padrão da GCC que inclui
// PRATICAMENTE TODAS as bibliotecas padrão de C++ em uma única linha.
// Útil para Maratona de Programação e prototipagem rápida.
#include <bits/stdc++.h>

int main() {
    // Como inclui tudo, podemos usar vector, string, map, algorithm, cout sem dar #include em cada um
    std::vector<std::string> subsistemas = {"Visão", "Controle", "Embedded", "Mecânica"};

    std::sort(subsistemas.begin(), subsistemas.end());

    std::cout << "Subsistemas UERJBotz em ordem alfabética:\n";
    for (const auto& sub : subsistemas) {
        std::cout << "- " << sub << "\n";
    }

    return 0;
}