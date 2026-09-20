// 01_sistema_sensores.cpp
// Interfaces, Polimorfismo, Destrutores Virtuais e custo de chamadas virtuais.

#include <iostream>
#include <vector>

// Interface Base
class ISensor {
public:
    virtual void Ler() = 0; // Função virtual pura
    virtual ~ISensor() { std::cout << "Destrutor do Sensor Base chamado.\n"; }
};

class Ultrassom : public ISensor {
public:
    void Ler() override {
        std::cout << "[Ultrassom]: Distância = 32 cm\n";
    }
    ~Ultrassom() override { std::cout << "Destrutor do Ultrassom chamado.\n"; }
};

class IMU : public ISensor {
public:
    void Ler() override {
        std::cout << "[IMU]: Giroscópio Z = +0.05 rad/s\n";
    }
    ~IMU() override { std::cout << "Destrutor da IMU chamado.\n"; }
};

int main() {
    std::vector<ISensor*> listaSensores;
    listaSensores.push_back(new Ultrassom());
    listaSensores.push_back(new IMU());

    // Leitura polimórfica
    for (ISensor* sensor : listaSensores) {
        sensor->Ler();
    }

    // Liberação de memória (Chama o destrutor correto devido ao destrutor virtual)
    for (ISensor* sensor : listaSensores) {
        delete sensor;
    }

    return 0;
}