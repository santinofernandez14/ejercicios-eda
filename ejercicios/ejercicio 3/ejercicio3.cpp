/*
 * 3. Realice un programa que solicite al usuario el largo y el ancho de un terreno en metros e imprima los
resultados. El mismo debe devolver la superficie en hectáreas, millas y acre.
• 1 hectárea = 10.000 metros cuadrados
• 1 acre =0.405 hectáreas.
• 1 milla cuadrada = 259 hectáreas
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float largo, ancho;

    cout << "Ingrese el largo del terreno en metros: ";
    cin >> largo;

    cout << "Ingrese el ancho del terreno en metros: ";
    cin >> ancho;

    cout << fixed << setprecision(0) << "Superficie en metros cuadrados: " << (largo * ancho) << endl;

    cout << "Superficie en hectáreas: " << (largo * ancho) / 10000.0 << endl;

    cout << "Superficie en millas cuadradas: " << ((largo * ancho) / 10000.0) / 259.0 << endl;

    cout << "Superficie en acres: " << ((largo * ancho) / 10000.0) / 0.405 << endl;

    return 0;
}
