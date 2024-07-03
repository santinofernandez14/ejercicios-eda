#include <stack>
#include <iostream>

void InvierteConAux(std::stack<int>& pilaA, std::stack<int>& pilaB, std::stack<int>& pilaC) {
    // Pasar elementos de A a C
    while (!pilaA.empty()) {
        pilaC.push(pilaA.top());
        pilaA.pop();
    }
    // Pasar elementos de C a B (mismo orden que estaban en A)
    while (!pilaC.empty()) {
        pilaB.push(pilaC.top());
        pilaC.pop();
    }
}

int main() {
    std::stack<int> pilaA, pilaB, pilaC;
    pilaA.push(1);
    pilaA.push(2);
    pilaA.push(3);

    InvierteConAux(pilaA, pilaB, pilaC);

    // Mostrar pilaB
    while (!pilaB.empty()) {
        std::cout << pilaB.top() << " ";
        pilaB.pop();
    }
    // Salida esperada: 1 2 3
    return 0;
}

