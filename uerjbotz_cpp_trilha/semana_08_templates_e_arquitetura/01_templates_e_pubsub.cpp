// 01_templates_e_pubsub.cpp
// Templates e genéricos para simuladores e middlewares (Arquitetura similar ao ROS).

#include <iostream>
#include <functional>

// Template de um Nó Publisher simplificado
template <typename T>
class Publicador {
private:
    std::function<void(T)> m_Callback;

public:
    void Inscrever(std::function<void(T)> callback) {
        m_Callback = callback;
    }

    void Publicar(T mensagem) {
        if (m_Callback) {
            m_Callback(mensagem);
        }
    }
};

struct MensagemOdometria {
    float x;
    float y;
};

int main() {
    // Instanciando o publicador genérico para o tipo MensagemOdometria
    Publicador<MensagemOdometria> pubOdom;

    // Inscrevendo um Subscriber via Lambda
    pubOdom.Inscrever([](MensagemOdometria odom) {
        std::cout << "[Subscriber ROS] Nova Posição -> X: " << odom.x << " | Y: " << odom.y << "\n";
    });

    // Simulando publicação de dados de controle
    pubOdom.Publicar({2.5f, -1.8f});

    return 0;
}