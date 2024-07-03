/*
 * 1. Realice en un conversor de moneda, el mismo debe presentar un menú como sigue:
• | 1. Pesos a dólar |
• | 2. Pesos a real |
• | 3. Pesos a Euros |
• | 4. Dólar a Pesos |
• | 5. Dólar a Real |
• | 6. Dólar a Euros |
Luego debe pedir la cantidad a convertir y mostrar el resultado. Pista: debe usar la sentencia switch. Busque
las cotizaciones en Internet

 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int opcion;
    float cantidad,resultado;

    cout << fixed << setprecision(2);

    float dolar = 985.00;
    float real = 170.35;
    float euro = 935.41;

    cout << "**Conversor de Monedas**" << endl;
    cout << "---------------------" << endl;
    cout << "|1. Pesos a Dolar    |" << endl;
    cout << "|2. Pesos a Real     |" << endl;
    cout << "|3. Pesos a Euros    |" << endl;
    cout << "|4. Dolar a Pesos    |" << endl;
    cout << "|5. Dolar a Real     |" << endl;
    cout << "|6. Dolar a Euros    |" << endl;
    cout << "---------------------" << endl;

    cout << "Ingrese la opcion deseada: ";
    cin >> opcion;

    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;

    switch (opcion)
    {
    case 1:
        resultado = cantidad / dolar;
        cout << cantidad << " pesos equivalen a " << resultado << " dolares." << endl;
        break;
    case 2:
        resultado = cantidad / real;
        cout << cantidad << " pesos equivalen a " << resultado << " reales." << endl;
        break;
    case 3:
        resultado = cantidad / euro;
        cout << cantidad << " pesos equivalen a " << resultado << " euros." << endl;
        break;
    case 4:
        resultado = cantidad * dolar;
        cout << cantidad << " dolares equivalen a " << resultado << " pesos." << endl;
        break;
    case 5:
        resultado = cantidad * real;
        cout << cantidad << " dolares equivalen a " << resultado << " reales." << endl;
        break;
    case 6:
        resultado = cantidad * euro;
        cout << cantidad << " dolares equivalen a " << resultado << " euros." << endl;
        break;
    default:
        cout << "Opcion no valida(ingrese un numero del 1 al 6)." << endl;
    }

    return 0;
}
