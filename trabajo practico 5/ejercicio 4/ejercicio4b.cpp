#include <iostream>
#include <queue>
#include <stack>

using namespace std;



void mostrarCola(const queue<int>& cola) {
    queue<int> temp = cola;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

void copiarPilaACola(stack<int>& pila, queue<int>& Cola) {
    stack<int> aux;
    while (!pila.empty()) {
        aux.push(pila.top());
        pila.pop();
    }
    while (!aux.empty()) {
        Cola.push(aux.top());
        aux.pop();
    }
}

int main() {
    stack<int> Pila;
    queue<int> Cola1;

    Pila.push(1);
    Pila.push(2);
    Pila.push(3);
    Pila.push(4);
    Pila.push(5);

    copiarPilaACola(Pila, Cola1);

    cout << "Cola C copiada desde Pila P: ";
    mostrarCola(Cola1);

    return 0;
}
