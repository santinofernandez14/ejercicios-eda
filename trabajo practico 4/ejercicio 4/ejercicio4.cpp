/**
 *
 * 4. Desde main declara un array de tama�o TAM, se llama a A) proceso cargaArray con par�metros un vector
 *  de int, y su tama�o, B) cambieSigno de los elementos del vector. C) Otra funci�n muestraArray a la consola.
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

void cambiarSigno(int vector[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		vector[i] *= -1;
	}
}

void muestra(int vector[], int tam)
{
	cout << "\n los elementos del vector con el signo cambiado " << endl;
	for (int i = 0; i < tam; i++)
	{
		cout << vector[i] << " ";
	}
}

int main()
{
	cargar();
	cambiarSigno(vector, tam);
	muestra(vector, tam);
}
