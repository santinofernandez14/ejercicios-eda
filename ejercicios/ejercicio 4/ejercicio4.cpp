/*
 * 4. Realice un programa que lea un número por teclado y luego las operaciones a realizar de la forma: ----------
A. math.log (x[, base]) Con un argumento, retorna el logaritmo natural de x (en base e)
B. math.log2(x) Retorna el logaritmo en base 2 de x. Esto suele ser más preciso que log(x, 2).
C. math.log10(x) Retorna el logaritmo en base 10 de x. Esto suele ser más preciso que log(x, 10).
D. Devolver la constante p. La constante matemática p = 3.141592…, hasta la precisión disponible de Math.
E. Devolver la constante matemática e = 2.718281…, hasta la precisión disponible de Math.
No hace falta declarar constantes en estos últimos casos.

 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    char opcion;

    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "A. math.log (x[, base]) Con un argumento, retorna el logaritmo natural de x (en base e)" << endl;
    cout << "B. math.log2(x) Retorna el logaritmo en base 2 de x. Esto suele ser más preciso que log(x, 2)." << endl;
    cout << "C. math.log10(x) Retorna el logaritmo en base 10 de x. Esto suele ser más preciso que log(x, 10)." << endl;
    cout << "D. Devolver la constante p. La constante matemática p = 3.141592…, hasta la precisión disponible de Math." << endl;
    cout << "E. Devolver la constante matemática e = 2.718281…, hasta la precisión disponible de Math." << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;

    cout << "Ingrese la opcion deseada: ";
    cin >> opcion;

    if (opcion == 'a' || opcion == 'b' || opcion == 'c' || opcion == 'A' || opcion == 'B' || opcion == 'C')
    {
        cout << "Ingrese un numero: ";
        cin >> x;
    }
    switch (opcion)
    {
    case 'A':
    case 'a':
        cout << "El logaritmo natural de " << x << " es: " << log(x) << endl;
        break;
    case 'B':
    case 'b':
        cout << "El logaritmo en base 2 de " << x << " es: " << log2(x) << endl;
        break;
    case 'C':
    case 'c':
        cout << "El logaritmo en base 10 de " << x << " es: " << log10(x) << endl;
        break;
    case 'D':
    case 'd':
        cout << "La constante p es: " << M_PI << endl;
        break;
    case 'E':
    case 'e':
        cout << "La constante e es: " << M_E << endl;
        break;
    default:
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
