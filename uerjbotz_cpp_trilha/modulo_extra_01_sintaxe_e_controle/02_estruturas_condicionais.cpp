#include <iostream>

enum class EstadoRobo {
    DESLIGADO,
    AUTONOMO,
    TELEOPERADO,
    EMERGENCIA
};

int main() {
    float distanciaObstaculo = 0.25f; // metros
    bool bateriaCritica = false;
    EstadoRobo estado = EstadoRobo::AUTONOMO;

    // 1. Condicional if / else if / else
    if (bateriaCritica) {
        std::cout << "[ALERTA] Bateria crítica! Retornando à base.\n";
    } else if (distanciaObstaculo < 0.30f) {
        std::cout << "[ALERTA] Obstáculo muito próximo! Freando.\n";
    } else {
        std::cout << "[INFO] Caminho livre. Avançando.\n";
    }

    // 2. Operador Ternário
    int pwm = (distanciaObstaculo < 0.5f) ? 100 : 255;
    std::cout << "PWM do motor ajustado para: " << pwm << "\n";

    // 3. Estrutura Switch Case
    switch (estado) {
        case EstadoRobo::DESLIGADO:
            std::cout << "Estado: Desligado\n";
            break;
        case EstadoRobo::AUTONOMO:
            std::cout << "Estado: Modo Autônomo Ativo\n";
            break;
        case EstadoRobo::TELEOPERADO:
            std::cout << "Estado: Controle Manual\n";
            break;
        case EstadoRobo::EMERGENCIA:
            std::cout << "Estado: PARADA DE EMERGÊNCIA!\n";
            break;
    }

    return 0;
}