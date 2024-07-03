

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

// Función para contar el número de palabras en una frase
int contarPalabras(const string& frase) {
    istringstream stream(frase);
    string palabra;
    int contador = 0;
    while (stream >> palabra) {
        contador++;
    }
    return contador;
}

// Función para contar la ocurrencia de una palabra en una frase
int contarOcurrenciaPalabra(const string& frase, const string& palabra) {
    istringstream stream(frase);
    string palabraActual;
    int contador = 0;
    while (stream >> palabraActual) {
        if (palabraActual == palabra) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int opcion;
    string frase;
    string palabra;

    do {
        cout << "Elija una opción:" << endl;
        cout << "1. Contar palabras en una frase" << endl;
        cout << "2. Contar ocurrencia de una palabra en una frase" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore(); // Ignorar el salto de línea después de la opción

        switch (opcion) {
            case 1:
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                cout << "La frase contiene " << contarPalabras(frase) << " palabras." << endl;
                break;

            case 2:
                cout << "Ingrese una frase: ";
                getline(cin, frase);
                cout << "Ingrese la palabra a buscar: ";
                cin >> palabra;
                cin.ignore(); // Ignorar el salto de línea después de la palabra
                cout << "La palabra '" << palabra << "' se encuentra " << contarOcurrenciaPalabra(frase, palabra) << " veces en la frase." << endl;
                break;

            case 3:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}


/*Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de una palabra en la frase, mientras el usuario lo desee. 
Para ello valerse de lo siguiente:
• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
• Otra función que determine cuantas veces se encuentra una palabra en una frase.*/




