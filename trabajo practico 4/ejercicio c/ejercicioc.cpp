/*Hacer una funci�n que reciba un puntero y compruebe si el n�mero es par o impar,
y se�alar la posici�n de memoria donde se est� guardando el n�mero*/

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

	// llama a  funci�n verificarParImpar pasando la posicion de memoria de la variable numero
	verificarParImpar(&numero);

	return 0;
}
