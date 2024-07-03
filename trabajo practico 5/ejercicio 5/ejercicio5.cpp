/*
5. Se desea modelar las filas de un banco, de cada persona se sabe el DNI y la operaci�n que 
desea realizar, seg�n un men� de opciones las operaciones son dep�sitos(D), extracciones(E), 
varios (O). Declare tres Queues de cada tipo de operaci�n correspondiente. 
A. Inicialmente la gente forma 1 fila, cuando comienza la atenci�n las personas se distribuyen 
seg�n la operaci�n, sacando un turno (bot�n �Simular turno�). 
B. Modele estructura persona. Debe introducir por una pantalla un DNI, y elegir el tipo de 
operaci�n, seg�n sea, se encola la persona para ser atendida en la fila correspondiente. 
C. Otra funci�n �atender�, ira sacando gente de la fila elegida por orden de llegada. 
D. Se deben averiguar cu�l es el �ltimo n�mero agregado a cierta cola. Ej. Ultimo DNI en Extracci�n
 */

#include <iostream>
#include <queue>
#include <string>

struct Persona {
    std::string DNI;
    char operacion; // 'D' para dep�sitos, 'E' para extracciones, 'O' para varios
};

std::queue<Persona> colaDepositos;
std::queue<Persona> colaExtracciones;
std::queue<Persona> colaVarios;

std::queue<Persona> colaInicial;

void simularTurno() {
    while (!colaInicial.empty()) {
        Persona p = colaInicial.front();
        colaInicial.pop();
        switch (p.operacion) {
        case 'D':
            colaDepositos.push(p);
            break;
        case 'E':
            colaExtracciones.push(p);
            break;
        case 'O':
            colaVarios.push(p);
            break;
        default:
            std::cerr << "Operacion desconocida para DNI: " << p.DNI << std::endl;
        }
    }
}

void agregarPersona(const std::string& DNI, char operacion) {
    Persona p = { DNI, operacion };
    colaInicial.push(p);
    std::cout << "Persona con DNI " << DNI << " agregada a la cola inicial para la operacion " << operacion << std::endl;
}

void atender(std::queue<Persona>& cola) {
    if (!cola.empty()) {
        Persona p = cola.front();
        cola.pop();
        std::cout << "Atendiendo a persona con DNI: " << p.DNI << std::endl;
    }
    else {
        std::cout << "No hay personas en la cola para atender." << std::endl;
    }
}

std::string ultimoDNIEnCola(const std::queue<Persona>& cola) {
    if (cola.empty()) {
        return "No hay personas en la cola.";
    }
    else {
        std::queue<Persona> copiaCola = cola;
        Persona ultimo;
        while (!copiaCola.empty()) {
            ultimo = copiaCola.front();
            copiaCola.pop();
        }
        return ultimo.DNI;
    }
}

int main() {
    agregarPersona("12345678A", 'D');
    agregarPersona("87654321B", 'E');
    agregarPersona("11223344C", 'O');
    agregarPersona("44332211D", 'D');

    simularTurno();

    std::cout << "Atendiendo cola de depositos:" << std::endl;
    atender(colaDepositos);
    std::cout << "Atendiendo cola de extracciones:" << std::endl;
    atender(colaExtracciones);
    std::cout << "Atendiendo cola de varios:" << std::endl;
    atender(colaVarios);

    std::cout << "Ultimo DNI en la cola de extracciones: " << ultimoDNIEnCola(colaExtracciones) << std::endl;

    return 0;
}
