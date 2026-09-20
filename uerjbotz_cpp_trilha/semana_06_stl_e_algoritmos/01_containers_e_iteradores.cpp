// 01_containers_e_iteradores.cpp
// Escolha correta de estruturas de dados para otimizar acessos.

#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    // std::vector: Contíguo na memória, rápido para iteração
    std::vector<float> leiturasLidar = {1.2f, 0.5f, 3.4f, 0.1f, 2.0f};
    leiturasLidar.push_back(4.1f);

    std::cout << "Leituras do LiDAR abaixo do limite de segurança:\n";
    for (float d : leiturasLidar) {
        if (d < 1.0f) {
            std::cout << "  ALERTA: " << d << "m\n";
        }
    }

    // std::unordered_map: Hash map para busca rápida O(1) por chave
    std::unordered_map<std::string, bool> statusSistemas;
    statusSistemas["IMU"] = true;
    statusSistemas["GPS"] = false;

    if (!statusSistemas["GPS"]) {
        std::cout << "GPS desconectado ou sem sinal!\n";
    }

    return 0;
}