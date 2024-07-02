/* 



10. Hacer un programa en C++ para A) Registrar los datos de tres libros como: título, autor, año y color del libro. El color se 
deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul. B) Mostrar 3 Libros según sea su color. */
#include <iostream>
#include <string>
using namespace std;

enum Color { ROJO, VERDE, AZUL };

struct Libro {
    string titulo;
    string autor;
    int ano;
    Color color;
};

int main() {
    Libro libros[3];

    // Registro de datos de los libros
    for (int i = 0; i < 3; ++i) {
        cout << "Ingrese los datos del libro " << i + 1 << endl;
        cout << "Titulo: ";
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Anio: ";
        cin >> libros[i].ano;
        cout << "Color (0 = Rojo, 1 = Verde, 2 = Azul): ";
        int color;
        cin >> color;
        libros[i].color = static_cast<Color>(color);
        cin.ignore(); // Limpiar el buffer de entrada
    }

    // Mostrar libros según su color
    for (int i = 0; i < 3; ++i) {
        cout << "Libro " << i + 1 << ": " << endl;
        cout << "Titulo: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "Anio: " << libros[i].ano << endl;
        cout << "Color: ";
        switch (libros[i].color) {
        case ROJO:
            cout << "Rojo";
            break;
        case VERDE:
            cout << "Verde";
            break;
        case AZUL:
            cout << "Azul";
            break;
        default:
            cout << "Color no valido";
        }
        cout << endl << endl;
    }

    return 0;
}
