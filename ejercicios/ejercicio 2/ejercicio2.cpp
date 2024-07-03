/*
 * 2. Realice un programa que lea un número por teclado (usar la librería math) y luego las operaciones a
realizar de la forma: -----------------------------------------------------------------------
• OPCION ‘C’: Retorna el coseno de x radianes.
• OPCION ‘S’: Retorna el seno de x radianes.
• OPCION ‘T’: Retorna la tangente de x radianes.
• OPCION ‘X’: Retorna el arcocoseno de x, en radianes. El resultado está entre 0 y pi.
• OPCION ‘Y’: Retorna el arcoseno de x, en radianes. El resultado está entre -pi/2 y pi/2.
• OPCION ‘Z’: Retorna la arcotangente de x, en radianes. El resultado está entre -pi/2 y pi/2.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float x, resultado;
    char opcion;

    cout << "Ingrese un numero: ";
    cin >> x;

    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "| OPCION C: Retorna el coseno de x radianes.                                                   |" << endl;
    cout << "| OPCION S: Retorna el seno de x radianes.                                                     |" << endl;
    cout << "| OPCION T: Retorna la tangente de x radianes.                                                 |" << endl;
    cout << "| OPCION X: Retorna el arcocoseno de x, en radianes. El resultado está entre 0 y pi.           |" << endl;
    cout << "| OPCION Y: Retorna el arcoseno de x, en radianes. El resultado está entre -pi/2 y pi/2.       |" << endl;
    cout << "| OPCION Z: Retorna la arcotangente de x, en radianes. El resultado está entre -pi/2 y pi/2.   |" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    cout << "Ingrese la opcion deseada: ";
    cin >> opcion;

    switch (opcion)
    {
    case 'C':
    case 'c':
        resultado = cos(x);
        cout << "El coseno de " << x << " radianes es: " << resultado << endl;
        break;
    case 'S':
    case 's':
        resultado = sin(x);
        cout << "El seno de " << x << " radianes es: " << resultado << endl;
        break;
    case 'T':
    case 't':
        resultado = tan(x);
        cout << "La tangente de " << x << " radianes es: " << resultado << endl;
        break;
    case 'X':
    case 'x':
        resultado = acos(x);
        cout << "El arcocoseno de " << x << " es: " << resultado << " radianes." << endl;
        break;
    case 'Y':
    case 'y':
        resultado = asin(x);
        cout << "El arcoseno de " << x << " es: " << resultado << " radianes." << endl;
        break;
    case 'Z':
    case 'z':
        resultado = atan(x);
        cout << "La arcotangente de " << x << " es: " << resultado << " radianes." << endl;
        break;
    default:
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
