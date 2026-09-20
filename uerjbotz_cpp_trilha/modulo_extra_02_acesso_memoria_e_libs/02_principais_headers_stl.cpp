#include <iostream>
#include <vector>      // Vetor dinâmico
#include <string>      // Manipulação de texto
#include <algorithm>   // std::sort, std::find, std::min, std::max
#include <cmath>       // Operações matemáticas (std::pow, std::sqrt, std::abs)
#include <map>         // Árvore rubro-negra (chave-valor ordenada)

int main() {
    // 1. <cmath>
    float cateto1 = 3.0f, cateto2 = 4.0f;
    float hipotenusa = std::sqrt(std::pow(cateto1, 2) + std::pow(cateto2, 2));
    std::cout << "Hipotenusa: " << hipotenusa << "\n";

    // 2. <vector> e <algorithm>
    std::vector<int> velocidades = {150, 80, 200, 120, 50};
    
    // Ordenação usando <algorithm>
    std::sort(velocidades.begin(), velocidades.end());

    std::cout << "\nVelocidades ordenadas:\n";
    for (int v : velocidades) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    // 3. <map>
    std::map<std::string, int> pinagemRobo;
    pinagemRobo["MOTOR_ESQ"] = 5;
    pinagemRobo["MOTOR_DIR"] = 6;
    pinagemRobo["SERVO"] = 9;

    std::cout << "\nPino do Motor Esquerdo: " << pinagemRobo["MOTOR_ESQ"] << "\n";

    return 0;
}