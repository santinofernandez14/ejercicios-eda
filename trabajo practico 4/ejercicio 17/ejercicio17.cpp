#include <iostream>

using namespace std;

/*17. Un n�mero es primo si solo es divisible por la unidad y por si mismo. 
Defina una funci�n que determina si un n�mero es primo, 
debe recibir el n�mero y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un n�mero es primo 
2). Calcular todos los n�meros primos menores a un n�mero ingresado por el usuario. 
El usuario debe poder realizar estas opciones todas las veces que desee.*/




// Funci�n para determinar si un n�mero es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return false;
    }

    return true;
}

// Funci�n para calcular todos los n�meros primos menores a un n�mero dado
void primosMenoresA(int numero) {
    for (int i = 2; i < numero; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int opcion;
    do {
        cout << "Menu:\n";
        cout << "1. Determinar si un numero es primo\n";
        cout << "2. Calcular todos los numeros primos menores a un numero\n";
        cout << "3. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                if (esPrimo(numero)) {
                    cout << numero << " es primo.\n";
                } else {
                    cout << numero << " no es primo.\n";
                }
                break;
            }
            case 2: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Los numeros primos menores a " << numero << " son: ";
                primosMenoresA(numero);
                break;
            }
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);

    return 0;
}

