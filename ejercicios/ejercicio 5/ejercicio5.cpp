// 5. Realice un programa que lea un número x por teclado (usar la librería math) y luego las operaciones a
// realizar de la forma: -----------------------------------------------------------------------
// a. OPCION A: Retorna x elevado a la potencia y (que debes solicitar en este caso).
// b. OPCION B: Retorna la raíz cuadrada de x.
// c. OPCION C: Retorna el factorial de x como un número entero. Lanza una excepción ValueError si x no es
// un entero o es negativo.
// d. OPCION D: Convierte el ángulo x de radianes a grados.
// e. OPCION E: Convierte el ángulo x de grados a radianes.
// Convertimos los radianes a grados
//  NumGrados=Radianes x (180/PI);
// Convertimos los grados a radianes
//  NumRadianes=Grados x (PI/180);
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char opcion;
    double x, y;

    cout << "Ingrese un numero x: ";
    cin >> x;

    cout << "Elija una opcion (A, B, C, D, E): ";
    cin >> opcion;

    switch (opcion)
    {
    case 'A':
    case 'a':
        if (x == 0)
        {
            cout << 0 << endl;
            break;
        }
        cout << "Ingrese la potencia y: ";
        cin >> y;
        cout << "Resultado: " << pow(x, y) << endl;
        break;
    case 'B':
    case 'b':
        cout << "Resultado: " << sqrt(x) << endl;
        break;
    case 'C':
    case 'c':
        if (x == floor(x) && x >= 0)
        {
            int factorial = 1;
            for (int i = 2; i <= x; ++i)
            {
                factorial *= i;
            }
            cout << "Resultado: " << factorial << endl;
        }
        else
        {
            cout << "El numero debe ser un entero no negativo para calcular el factorial." << endl;
        }
        break;

    case 'D':
    case 'd':
        cout << "Resultado: " << x * (180.0 / M_PI) << " grados" << endl;
        break;
    case 'E':
        cout << "Resultado: " << x * (M_PI / 180.0) << " radianes" << endl;
        break;
    default:
        cout << "Opcion no valida." << endl;
        break;
    }

    return 0;
}
