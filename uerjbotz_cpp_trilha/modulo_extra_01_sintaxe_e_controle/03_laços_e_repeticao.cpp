#include <iostream>
#include <vector>

int main() {
    // 1. Laço for clássico (baseado em índice)
    std::cout << "--- For Clássico ---\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Amostra " << i + 1 << "\n";
    }

    // 2. Range-based for loop (C++11 em diante - muito usado na STL)
    std::vector<float> leiturasIMU = {0.01f, -0.05f, 0.12f, 0.00f};
    std::cout << "\n--- Range-based For ---\n";
    for (float leitura : leiturasIMU) {
        std::cout << "Leitura: " << leitura << " rad/s\n";
    }

    // 3. Laço while
    std::cout << "\n--- While Loop ---\n";
    int tentativasConexao = 0;
    while (tentativasConexao < 3) {
        std::cout << "Tentando conectar ao rádio... (" << tentativasConexao + 1 << ")\n";
        tentativasConexao++;
    }

    // 4. Laço do-while (Executa ao menos uma vez)
    std::cout << "\n--- Do-While Loop ---\n";
    bool sensorPronto = false;
    do {
        std::cout << "Checando sensor...\n";
        sensorPronto = true; // Simula inicialização
    } while (!sensorPronto);

    return 0;
}