/*
1. En el menú principal, se cuenta con las siguientes pilas: Tubo1, Tubo2, Tubo3. 
a. cargaTubo, que permita introducir datos en el cada uno de los tubos 
b. pasarPelota, pasa todos los elementos de Tubo1 a Tubo2
c. hayColor, que recibe un color “rojo” y determina si está en la Tubo1, todos los 
elementos deben quedar nuevamente en Tubo1
d. colorear, que tome pelotitas en Tubo1 y las coloca en Tubo2 solo rojas, y en Tubo3 las demás.

 */

#include <iostream>

using namespace std;

const int MAX = 100;

struct Pila {
    int tope;
    int elementos[MAX];
};

void inicializarPila(Pila& pila) {
    pila.tope = -1;
}

bool esVacia(Pila& pila) {
    return pila.tope == -1;
}

bool esLlena(Pila& pila) {
    return pila.tope == MAX - 1;
}

void push(Pila& pila, int elemento) {
    if (!esLlena(pila)) {
        pila.elementos[++pila.tope] = elemento;
    }
    else {
        cout << "Pila llena!" << endl;
    }
}

int pop(Pila& pila) {
    if (!esVacia(pila)) {
        return pila.elementos[pila.tope--];
    }
    else {
        cout << "Pila vacía!" << endl;
        return -1;
    }
}

int cima(Pila& pila) {
    if (!esVacia(pila)) {
        return pila.elementos[pila.tope];
    }
    else {
        cout << "Pila vacía!" << endl;
        return -1;
    }
}

void cargaTubo(Pila& tubo, int color) {
    push(tubo, color);
}

void pasarPelota(Pila& tubo1, Pila& tubo2) {
    while (!esVacia(tubo1)) {
        push(tubo2, pop(tubo1));
    }
}

bool hayColor(Pila& tubo1, int color) {
    Pila auxiliar;
    inicializarPila(auxiliar);
    bool encontrado = false;

    while (!esVacia(tubo1)) {
        int elemento = pop(tubo1);
        if (elemento == color) {
            encontrado = true;
        }
        push(auxiliar, elemento);
    }

    while (!esVacia(auxiliar)) {
        push(tubo1, pop(auxiliar));
    }

    return encontrado;
}

void colorear(Pila& tubo1, Pila& tubo2, Pila& tubo3, int color) {
    while (!esVacia(tubo1)) {
        int elemento = pop(tubo1);
        if (elemento == color) {
            push(tubo2, elemento);
        }
        else {
            push(tubo3, elemento);
        }
    }
}

int main() {
    Pila Tubo1, Tubo2, Tubo3;
    inicializarPila(Tubo1);
    inicializarPila(Tubo2);
    inicializarPila(Tubo3);

    cargaTubo(Tubo1, 1);
    cargaTubo(Tubo1, 2);
    cargaTubo(Tubo1, 3);
    cargaTubo(Tubo1, 1);

    pasarPelota(Tubo1, Tubo2);

    cargaTubo(Tubo1, 1);
    cargaTubo(Tubo1, 2);
    cargaTubo(Tubo1, 3);
    cargaTubo(Tubo1, 1);

    if (hayColor(Tubo1, 1)) {
        cout << "El color rojo esta en Tubo1" << endl;
    }
    else {
        cout << "El color rojo no esta en Tubo1" << endl;
    }

    colorear(Tubo1, Tubo2, Tubo3, 1);

    cout << "Tubo2 (rojas): ";
    while (!esVacia(Tubo2)) {
        cout << pop(Tubo2) << " ";
    }
    cout << endl;

    cout << "Tubo3 (otras): ";
    while (!esVacia(Tubo3)) {
        cout << pop(Tubo3) << " ";
    }
    cout << endl;

    return 0;
}
