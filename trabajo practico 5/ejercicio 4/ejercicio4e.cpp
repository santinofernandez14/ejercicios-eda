
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




void eliminarConsecutivosRepetidos(queue<int>& Cola, queue<int>& resultado) {
    if (Cola.empty()) return;

    int prev = Cola.front();
    resultado.push(prev);
    Cola.pop();

    while (!Cola.empty()) {
        if (Cola.front() != prev) {
            resultado.push(Cola.front());
            prev = Cola.front();
        }
        Cola.pop();
    }
}

int main() {
    queue<int> Cola;
    queue<int> resultado;

    Cola.push(1);
    Cola.push(1);
    Cola.push(2);
    Cola.push(2);
    Cola.push(2);
    Cola.push(3);
    Cola.push(4);
    Cola.push(4);

    eliminarConsecutivosRepetidos(Cola, resultado);

    cout << "Cola sin repetidos consecutivos: ";
    mostrarCola(resultado);

    return 0;
}
