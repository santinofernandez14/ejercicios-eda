
#include <iostream>
#include <queue>
#include <stack>

using namespace std;





bool buscarEnCola(const queue<int>& cola, int x) {
    queue<int> temp = cola;
    while (!temp.empty()) {
        if (temp.front() == x) {
            return true;
        }
        temp.pop();
    }
    return false;
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

    int x = 3;
    if (buscarEnCola(Cola, x)) {
        cout << "El numero " << x << " esta en la cola A." << endl;
    } else {
        cout << "El numero " << x << " no esta en la cola A." << endl;
    }

    mostrarCola(Cola);

    return 0;
}
