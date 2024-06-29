#include <iostream>
#include <string>
using namespace std;

const int NUM_PAISES = 3;
const int NUM_MESES = 12;
const int NUM_TRIMESTRES = 4;

struct Pais {
    string nombre;
    float temperaturas[NUM_MESES];
};

void cargarDatos(Pais paises[]);
void imprimirDatos(const Pais paises[]);
void calcularPromedioTrimestral(const Pais paises[]);
void temperaturaMinimaTrimestral(const Pais paises[]);
void mayorTemperaturaMensual(const Pais paises[]);

int main() {
    Pais paises[NUM_PAISES];

    cargarDatos(paises);
    imprimirDatos(paises);
    calcularPromedioTrimestral(paises);
    temperaturaMinimaTrimestral(paises);
    mayorTemperaturaMensual(paises);

    return 0;
}

void cargarDatos(Pais paises[]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        cout << "Ingrese el nombre del pais " << i + 1 << ": ";
        cin >> paises[i].nombre;
        for (int j = 0; j < NUM_MESES; j++) {
            cout << "Ingrese la temperatura media del mes " << j + 1 << " para " << paises[i].nombre << ": ";
            cin >> paises[i].temperaturas[j];
        }
    }
}

void imprimirDatos(const Pais paises[]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        cout << paises[i].nombre << " ";
        for (int j = 0; j < NUM_MESES; j++) {
            cout << paises[i].temperaturas[j];
            if (j != NUM_MESES - 1) cout << ",";
        }
        cout << endl;
    }
}

void calcularPromedioTrimestral(const Pais paises[]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        cout << "Promedios trimestrales de " << paises[i].nombre << ":" << endl;
        for (int j = 0; j < NUM_TRIMESTRES; j++) {
            int mesInicio = j * 3;
            float suma = 0;
            for (int k = 0; k < 3; k++) {
                suma += paises[i].temperaturas[mesInicio + k];
            }
            float promedio = suma / 3;
            cout << "  Trimestre " << j + 1 << ": " << promedio << " grados" << endl;
        }
    }
}

void temperaturaMinimaTrimestral(const Pais paises[]) {
    string paisBuscado;
    cout << "Ingrese el nombre del pais para buscar su temperatura minima trimestral: ";
    cin >> paisBuscado;

    for (int i = 0; i < NUM_PAISES; i++) {
        if (paises[i].nombre == paisBuscado) {
            cout << "Temperaturas minimas trimestrales de " << paises[i].nombre << ":" << endl;
            for (int j = 0; j < NUM_TRIMESTRES; j++) {
                int mesInicio = j * 3;
                float minima = paises[i].temperaturas[mesInicio];
                for (int k = 1; k < 3; k++) {
                    if (paises[i].temperaturas[mesInicio + k] < minima) {
                        minima = paises[i].temperaturas[mesInicio + k];
                    }
                }
                cout << "  Trimestre " << j + 1 << ": " << minima << " grados" << endl;
            }
            return;
        }
    }
    cout << "Pais no encontrado." << endl;
}

void mayorTemperaturaMensual(const Pais paises[]) {
    for (int i = 0; i < NUM_PAISES; i++) {
        float maxima = paises[i].temperaturas[0];
        int mesMaxima = 0;
        for (int j = 1; j < NUM_MESES; j++) {
            if (paises[i].temperaturas[j] > maxima) {
                maxima = paises[i].temperaturas[j];
                mesMaxima = j;
            }
        }
        cout << paises[i].nombre << " -> " << "Mes " << mesMaxima + 1 << ": " << maxima << " grados" << endl;
    }
}

