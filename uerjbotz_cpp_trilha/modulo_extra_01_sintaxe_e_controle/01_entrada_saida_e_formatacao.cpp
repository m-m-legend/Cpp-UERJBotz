#include <iostream>
#include <iomanip> // Para formatação de E/S (fixed, setprecision)
#include <string>

int main() {
    // Otimização de I/O em C++ (fundamental para maratonas/robótica)
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string nomeRobo;
    float tensaoBateria;
    int ID;

    std::cout << "Digite o nome do robô, ID e Tensão: ";
    std::cin >> nomeRobo >> ID >> tensaoBateria;

    // Formatação de decimais
    std::cout << "\n=== STATUS DO ROBÔ ===\n";
    std::cout << "Nome: " << nomeRobo << "\n";
    std::cout << "ID: " << ID << "\n";
    std::cout << "Bateria: " << std::fixed << std::setprecision(2) << tensaoBateria << " V\n";

    return 0;
}