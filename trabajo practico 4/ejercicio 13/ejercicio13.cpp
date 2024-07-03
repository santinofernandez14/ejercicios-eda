/*Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo
y despliegue el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include <iostream>
using namespace std;

// funcion que eleva numero a una potencia entera positiva
void funpot(int base, int exponente)
{
	int resultado = 1;

	for (int i = 0; i < exponente; i++)
	{
		resultado *= base;
	}

	cout << "El resultado de " << base << " elevado a la potencia " << exponente << " es: " << resultado << endl;
}

int main()
{
	int numero, potencia;

	cout << "Ingrese el numero base: ";
	cin >> numero;

	cout << "Ingrese la potencia (entero positivo): ";
	cin >> potencia;

	// verifica que potencia sea entero positivo
	if (potencia >= 0)
	{

		funpot(numero, potencia);
	}
	else
	{
		cout << "La potencia debe ser un entero positivo." << endl;
	}

	return 0;
}
