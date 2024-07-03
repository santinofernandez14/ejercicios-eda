#include <stack>
#include <iostream>

void ReemplazaElemento(std::stack<int>& pilaA, int X, int Y) {
    std::stack<int> aux;

    // Pasar elementos a la pila auxiliar y reemplazar si se encuentra X
    while (!pilaA.empty()) {
        if (pilaA.top() == X) {
            aux.push(Y);
        } else {
            aux.push(pilaA.top());
        }
        pilaA.pop();
    }

    // Pasar elementos de la auxiliar a A para mantener el orden original
    while (!aux.empty()) {
        pilaA.push(aux.top());
        aux.pop();
    }
}

int main() {
    std::stack<int> pilaA;
    pilaA.push(1);
    pilaA.push(2);
    pilaA.push(3);

    int X = 2;
    int Y = 5;

    ReemplazaElemento(pilaA, X, Y);

    // Mostrar pilaA después de la sustitución
    while (!pilaA.empty()) {
        std::cout << pilaA.top() << " ";
        pilaA.pop();
    }
    // Salida esperada: 3 5 1
    return 0;
}

