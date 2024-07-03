#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
 * 6. Escriba en C el algoritmo que solicite el ingreso de un precio,
 *  y genere mediante la función rand(), un
número dentro de los 12 meses del año.
1) Calcule descuentos por primavera del 25%
2) Calcule descuentos por otoño del 35%
3) Calcule descuentos por invierno del 40%
4) Calcule descuentos por verano del 15%
5) En diciembre no hay descuento
 */
int main()
{

    float precio, descuento, precioFinal;
    int mes;

    cout << "Ingrese el precio del producto: " << endl;

    cin >> precio;

    cout << "precio: " << precio << endl;

    srand(time(NULL));

    mes = rand() % (12 + 1);

    cout << "mes seleccionado: " << mes << endl;

   switch (mes)
    {
    case 1:
    case 2:
        descuento = precio * 0.15;
        break;
    case 3:
    case 4:
    case 5:
        descuento = precio * 0.35;
        break;
    case 6:
    case 7:
    case 8:
        descuento = precio * 0.4;
        break;
    case 9:
    case 10:
    case 11:
        descuento = precio * 0.25;
        break;
    case 12:
        descuento = 0;
        break;
    }

    precioFinal = precio - descuento;

    cout << "El precio final con descuento es: " << precioFinal << endl;

    return 0;
}
