#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void invertirCola(queue<int>& cola) {
    stack<int> pila;
    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }
    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }
}

void mostrarCola(const queue<int>& cola) {
    queue<int> temp = cola;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    queue<int> Cola;
    Cola.push(1);
    Cola.push(2);
    Cola.push(3);
    Cola.push(4);
    Cola.push(5);

    cout << "Cola original: ";
    mostrarCola(Cola);

    invertirCola(Cola);

    cout << "Cola invertida: ";
    mostrarCola(Cola);

    return 0;
}
