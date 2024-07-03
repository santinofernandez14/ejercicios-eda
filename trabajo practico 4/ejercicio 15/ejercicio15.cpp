/**
 *
 * 15. Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos
 *  que se transmitan a la función cuando sea llamada. Suponga que los 3 argumentos serán del tipo float.
 *
 */

#include <iostream>

using namespace std;

float maximo(float num1, float num2, float num3)
{
	float max = num1; // asumimos el primer num es el maximo

	// comparamos el segundo y tercero con el maximo actual
	if (num2 > max)
	{
		max = num2;
	}

	if (num3 > max)
	{
		max = num3;
	}

	return max;
}

int main()
{
	float a, b, c;

	cout << "Ingrese tres numeros: ";
	cin >> a >> b >> c;

	float maximoValor = maximo(a, b, c);

	cout << "El valor maximo es: " << maximoValor <<endl;

	return 0;
}
