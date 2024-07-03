/**
 *
 * 14. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el usuario.
 * Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

double obtenerParteFraccionaria(double numero)
{
	return numero - static_cast<int>(numero);
}

int main()
{
	double numero;
	cout << "Ingrese un numero(utilice punto para la parte decimal): ";
	cin >> numero;

	cout << "La parte fraccionaria es: " << obtenerParteFraccionaria(numero) << endl;

	return 0;
}
