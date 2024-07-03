
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


void fusionarColas(queue<int>& Cola, queue<int>& Cola1, queue<int>& Cola2) {
    while (!Cola.empty() && !Cola1.empty()) {
        if (Cola.front() <= Cola1.front()) {
            Cola2.push(Cola.front());
            Cola.pop();
        } else {
            Cola2.push(Cola1.front());
            Cola1.pop();
        }
    }
    while (!Cola.empty()) {
        Cola2.push(Cola.front());
        Cola.pop();
    }
    while (!Cola1.empty()) {
        Cola2.push(Cola1.front());
        Cola1.pop();
    }
}

int main() {
    queue<int> Cola, Cola1, Cola2;

    Cola.push(1);
    Cola.push(3);
    Cola.push(5);

    Cola1.push(2);
    Cola1.push(4);
    Cola1.push(6);

    fusionarColas(Cola, Cola1, Cola2);

    cout << "Cola2 fusionada: ";
    mostrarCola(Cola2);

    return 0;
}
