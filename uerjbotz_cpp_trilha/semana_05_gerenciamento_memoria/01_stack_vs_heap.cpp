// 01_stack_vs_heap.cpp
// A diferença física de alocar na Stack (rápida) vs Heap (manual e pesada).

#include <iostream>

struct Vetor3D {
    float x, y, z;
};

int main() {
    // 1. Alocação na STACK (Pilha) - Destruição automática no fim do escopo {}
    {
        Vetor3D posicaoStack{1.0f, 2.0f, 3.0f};
    } // posicaoStack é desalocada aqui instantaneamente!

    // 2. Alocação no HEAP (Monte) - Requer ponteiro e liberação manual
    Vetor3D* posicaoHeap = new Vetor3D{10.0f, 20.0f, 30.0f};
    
    std::cout << "Heap Pos X: " << posicaoHeap->x << "\n";

    // Se esquecer o delete, ocorre VAZAMENTO DE MEMÓRIA (Memory Leak)
    delete posicaoHeap;

    return 0;
}