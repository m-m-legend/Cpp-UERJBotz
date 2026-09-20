// 01_classe_motor.cpp
// Classes, modificadores de acesso e Construtores com Member Initializer Lists.

#include <iostream>
#include <cstdint>


class DCMotor {
private:
    uint8_t m_PWMPin;
    float m_Velocidade; // 'm_' indica membro da classe

public:
    // Construtor usando Inicializador de Membros (Mais performático)
    DCMotor(uint8_t pin) 
        : m_PWMPin(pin), m_Velocidade(0.0f) {}

    void SetVelocidade(float vel) {
        // Trava de segurança para limites de operação
        if (vel > 100.0f)  vel = 100.0f;
        if (vel < -100.0f) vel = -100.0f;
        m_Velocidade = vel;
    }

    void ExibirStatus() const { // 'const' indica que não altera a instância
        std::cout << "Motor [Pino " << (int)m_PWMPin << "] | Velocidade: " << m_Velocidade << "%\n";
    }
};

int main() {
    DCMotor motorEsquerdo(5);
    motorEsquerdo.SetVelocidade(85.5f);
    motorEsquerdo.ExibirStatus();

    return 0;
}