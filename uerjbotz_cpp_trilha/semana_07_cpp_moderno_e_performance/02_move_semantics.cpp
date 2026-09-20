// 02_move_semantics.cpp
// Evitar cópias de buffers grandes usando std::move e rvalue references (&&).

#include <iostream>
#include <vector>
#include <utility>

class NuvemDePontos {
public:
    std::vector<float> dados;

    NuvemDePontos(size_t tamanho) : dados(tamanho, 1.0f) {
        std::cout << "Nuvem alocada com " << tamanho << " pontos.\n";
    }

    // Construtor de Cópia (Lento)
    NuvemDePontos(const NuvemDePontos& other) : dados(other.dados) {
        std::cout << "[COPIADO] Cópia profunda dos dados efetuada.\n";
    }

    // Construtor de Movimento (Rápido - Apenas 'rouba' os ponteiros do outro objeto)
    NuvemDePontos(NuvemDePontos&& other) noexcept : dados(std::move(other.dados)) {
        std::cout << "[MOVIDO] Recursos transferidos sem cópia!\n";
    }
};

int main() {
    NuvemDePontos nuvemA(1000000); // 1 Milhão de dados

    NuvemDePontos nuvemB = nuvemA;            // Realiza CÓPIA (Lento)
    NuvemDePontos nuvemC = std::move(nuvemA); // Realiza MOVIMENTO (Instantâneo)

    return 0;
}