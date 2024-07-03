#include <stack>
#include <iostream>

void InvierteSinAux(std::stack<int>& pilaA, std::stack<int>& pilaB) {
    std::stack<int> aux;

    // Pasar elementos de A a auxiliar (aux) para invertir
    while (!pilaA.empty()) {
        aux.push(pilaA.top());
        pilaA.pop();
    }

    // Pasar elementos de aux a B para obtener el mismo orden que en A
    while (!aux.empty()) {
        pilaB.push(aux.top());
        aux.pop();
    }
}

int main() {
    std::stack<int> pilaA, pilaB;
    pilaA.push(1);
    pilaA.push(2);
    pilaA.push(3);

    InvierteSinAux(pilaA, pilaB);

    // Mostrar pilaB
    while (!pilaB.empty()) {
        std::cout << pilaB.top() << " ";
        pilaB.pop();
    }
    // Salida esperada: 1 2 3
    return 0;
}

