/*Hacer una función que reciba un puntero y compruebe si el número es par o impar,
y señalar la posición de memoria donde se está guardando el número*/

#include <iostream>
using namespace std;

// verifica si un numero es par o impar y muestra su direccion de memoria
void verificarParImpar(int *numero)
{
	if (*numero % 2 == 0)
	{
		cout << "El numero " << *numero << " es par." << endl;
	}
	else
	{
		cout << "El numero " << *numero << " es impar." << endl;
	}
	cout << "La direccion de memoria donde se guarda el numero es: " << numero << endl;
}

int main()
{
	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

	// llama a  función verificarParImpar pasando la posicion de memoria de la variable numero
	verificarParImpar(&numero);

	return 0;
}
