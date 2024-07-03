#include <iostream>
#include <string>
#include <locale> 

using namespace std;


const int MAX_CUPOS = 5;


struct Auto {
    string modelo;
    string patente;
};


struct TDApeaje {
    Auto via0[MAX_CUPOS]; // Vía 0 (común)
    Auto via1[MAX_CUPOS]; // Vía 1 (rápida)
    int frente0; // Frente de la vía 0
    int frente1; // Frente de la vía 1
    int final0;  // Final de la vía 0
    int final1;  // Final de la vía 1
};


void inicializar(TDApeaje &peaje) {
    peaje.frente0 = 0;
    peaje.final0 = 0;
    peaje.frente1 = 0;
    peaje.final1 = 0;
}


bool estaVacia(const TDApeaje &peaje, int via) {
    if (via == 0) {
        return peaje.frente0 == peaje.final0;
    } else if (via == 1) {
        return peaje.frente1 == peaje.final1;
    } else {
        cout << "Vía inválida." << endl;
        return true;
    }
}


bool estaLlena(const TDApeaje &peaje, int via) {
    if (via == 0) {
        return (peaje.final0 + 1) % MAX_CUPOS == peaje.frente0;
    } else if (via == 1) {
        return (peaje.final1 + 1) % MAX_CUPOS == peaje.frente1;
    } else {
        cout << "Vía inválida." << endl;
        return true;
    }
}


void insertarV0(TDApeaje &peaje, const Auto &autoNuevo) {
    if (!estaLlena(peaje, 0)) {
        peaje.via0[peaje.final0] = autoNuevo;
        peaje.final0 = (peaje.final0 + 1) % MAX_CUPOS;
        cout << "Vehículo ingresado en Vía 0 (común)." << endl;
    } else {
        cout << "Vía 0 (común) llena. No se puede ingresar el vehículo." << endl;
    }
}


void insertarV1(TDApeaje &peaje, const Auto &autoNuevo) {
    if (!estaLlena(peaje, 1)) {
        peaje.via1[peaje.final1] = autoNuevo;
        peaje.final1 = (peaje.final1 + 1) % MAX_CUPOS;
        cout << "Vehículo ingresado en Vía 1 (rápida)." << endl;
    } else {
        cout << "Vía 1 (rápida) llena. No se puede ingresar el vehículo." << endl;
    }
}


void suprimirV0(TDApeaje &peaje) {
    if (!estaVacia(peaje, 0)) {
        Auto vehiculo = peaje.via0[peaje.frente0];
        peaje.frente0 = (peaje.frente0 + 1) % MAX_CUPOS;
        cout << "Vehículo suprimido de Vía 0 (común): Modelo " << vehiculo.modelo << ", Patente " << vehiculo.patente << endl;
    } else {
        cout << "Vía 0 (común) vacía. No se puede suprimir ningún vehículo." << endl;
    }
}


void suprimirV1(TDApeaje &peaje) {
    if (!estaVacia(peaje, 1)) {
        Auto vehiculo = peaje.via1[peaje.frente1];
        peaje.frente1 = (peaje.frente1 + 1) % MAX_CUPOS;
        cout << "Vehículo suprimido de Vía 1 (rápida): Modelo " << vehiculo.modelo << ", Patente " << vehiculo.patente << endl;
    } else {
        cout << "Vía 1 (rápida) vacía. No se puede suprimir ningún vehículo." << endl;
    }
}


void mostrarEstadoPeaje(const TDApeaje &peaje) {
    cout << "Estado actual del peaje:" << endl;
    cout << "Vía 0 (común):" << endl;
    if (!estaVacia(peaje, 0)) {
        int i = peaje.frente0;
        do {
            cout << "Modelo: " << peaje.via0[i].modelo << ", Patente: " << peaje.via0[i].patente << endl;
            i = (i + 1) % MAX_CUPOS;
        } while (i != peaje.final0);
    } else {
        cout << "Vía 0 (común) vacía." << endl;
    }

    cout << "Vía 1 (rápida):" << endl;
    if (!estaVacia(peaje, 1)) {
        int i = peaje.frente1;
        do {
            cout << "Modelo: " << peaje.via1[i].modelo << ", Patente: " << peaje.via1[i].patente << endl;
            i = (i + 1) % MAX_CUPOS;
        } while (i != peaje.final1);
    } else {
        cout << "Vía 1 (rápida) vacía." << endl;
    }

    cout << endl;
}


int main() {
    
    setlocale(LC_ALL, "");

    TDApeaje peaje;
    inicializar(peaje);

    Auto auto1 = {"Vento", "AZ 234 RT"};
    Auto auto2 = {"Cronos", "AS 459 GT"};

    insertarV1(peaje, auto1);
    insertarV0(peaje, auto2);

    mostrarEstadoPeaje(peaje);

    suprimirV1(peaje);
    suprimirV0(peaje);

    mostrarEstadoPeaje(peaje);

    return 0;
}
