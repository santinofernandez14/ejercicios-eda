#include <iostream>
#include <stack>
#include <string>
#include <limits>

struct Auto {
    std::string placa;
    std::string propietario;
    int horaEntrada;

    Auto(std::string p, std::string prop, int h) : placa(p), propietario(prop), horaEntrada(h) {}
};

const int CAPACIDAD_MAXIMA = 10;
std::stack<Auto> cochera1;
std::stack<Auto> cochera2;

void estacionarAuto(std::stack<Auto>& cochera) {
    if (cochera.size() >= CAPACIDAD_MAXIMA) {
        std::cout << "La cochera está llena." << std::endl;
        return;
    }

    std::string placa, propietario;
    int horaEntrada;
    std::cout << "Ingrese placa del auto: ";
    std::cin >> placa;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer
    std::cout << "Ingrese nombre del propietario: ";
    std::getline(std::cin, propietario);
    std::cout << "Ingrese hora de entrada: ";
    std::cin >> horaEntrada;

    cochera.push(Auto(placa, propietario, horaEntrada));
    std::cout << "Auto estacionado en la cochera." << std::endl;
}

void mostrarCocheras(const std::stack<Auto>& cochera, const std::string& nombreCochera) {
    std::stack<Auto> aux = cochera;

    std::cout << "Vehículos en " << nombreCochera << " por orden de salida:" << std::endl;
    while (!aux.empty()) {
        Auto autoActual = aux.top();
        std::cout << "Placa: " << autoActual.placa
                  << ", Propietario: " << autoActual.propietario
                  << ", Hora de Entrada: " << autoActual.horaEntrada << std::endl;
        aux.pop();
    }
}

void mostrarTodasLasCocheras() {
    mostrarCocheras(cochera1, "Cochera 1");
    mostrarCocheras(cochera2, "Cochera 2");
}

int main() {
    int opcion;
    do {
        std::cout << "Seleccione una opcion:" << std::endl;
        std::cout << "1. Estacionar auto en Cochera 1" << std::endl;
        std::cout << "2. Estacionar auto en Cochera 2" << std::endl;
        std::cout << "3. Mostrar vehículos por orden de salida" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cin >> opcion;

        switch(opcion) {
            case 1:
                estacionarAuto(cochera1);
                break;
            case 2:
                estacionarAuto(cochera2);
                break;
            case 3:
                mostrarTodasLasCocheras();
                break;
            case 4:
                std::cout << "Saliendo del sistema..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente." << std::endl;
        }
    } while(opcion != 4);

    return 0;
}

