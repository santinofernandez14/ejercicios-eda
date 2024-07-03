/**
 *
 * 5. El programa main debe recibir un array y sumar sus elementos pares, reutilizar las funciones A y C del punto 4
 * para cargar y mostrar los arrays. Escriba otra función que reciba un array y sume sus elementos pares
 *
 */

#include <iostream>
using namespace std;

int vector[100], tam;
void cargar()
{
	cout << "ingrese el tamano del vector ";
	cin >> tam;

	for (int i = 0; i < tam; i++)
	{
		cout << "ingrese un numero ";
		cin >> vector[i];
	}
}

int suma = 0;
void calcularSuma(int vector[], int tam)
{

	for (int i = 0; i < tam; i++)
	{

		if (vector[i] % 2 == 0)
		{

			suma += vector[i];
		}
	}
}

void muestra(int suma)
{

	cout << "la suma de los numeros pares es " << suma << endl;
}

int main()
{
	cargar();
	calcularSuma(vector, tam);
	muestra(suma);
}
