// 02_smart_pointers.cpp
// Automação via RAII (Resource Acquisition Is Initialization).

#include <iostream>
#include <memory>

class CameraDriver {
public:
    CameraDriver()  { std::cout << "Driver da Câmera Inicializado.\n"; }
    ~CameraDriver() { std::cout << "Driver da Câmera Finalizado.\n"; }
    void ProcessarFrame() { std::cout << "Frame processado.\n"; }
};

int main() {
    std::cout << "--- unique_ptr (Posse Exclusiva) ---\n";
    {
        std::unique_ptr<CameraDriver> cam = std::make_unique<CameraDriver>();
        cam->ProcessarFrame();
    } // Deletado automaticamente ao fechar a chave!

    std::cout << "\n--- shared_ptr (Posse Compartilhada) ---\n";
    std::shared_ptr<CameraDriver> ref1 = std::make_shared<CameraDriver>();
    {
        std::shared_ptr<CameraDriver> ref2 = ref1; // Contagem de referências = 2
        std::cout << "Contagem de Refs: " << ref1.use_count() << "\n";
    } // ref2 sai do escopo -> Contagem de Refs = 1
    
    std::cout << "Contagem Final: " << ref1.use_count() << "\n";
    return 0;
}