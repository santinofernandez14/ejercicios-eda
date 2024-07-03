/*Realice un programa que contenga las siguientes funciones o procedimientos según sea:
•     cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
•     muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
•     intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las diagonales de ambas.
Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices), muestra (para las 2 matrices),
 intercambia, muestra (para las 2 matrices).*/

#include <iostream>
using namespace std;

const int TAMANIO = 4;

//  para cargar una matriz de 4x4
void cargaMatriz(float matriz[TAMANIO][TAMANIO])
{
	for (int i = 0; i < TAMANIO; i++)
	{
		for (int j = 0; j < TAMANIO; j++)
		{
			cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
}

//  para mostrar una matriz de 4x4
void muestraMatriz(float matriz[TAMANIO][TAMANIO])
{
	for (int i = 0; i < TAMANIO; i++)
	{
		for (int j = 0; j < TAMANIO; j++)
		{
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

//  para intercambiar los valores de las diagonales
void intercambioDiagonal(float matriz1[TAMANIO][TAMANIO], float matriz2[TAMANIO][TAMANIO])
{
	for (int i = 0; i < TAMANIO; i++)
	{
		// intercambia los valores de la diagonal principal
		float temp = matriz1[i][i];
		matriz1[i][i] = matriz2[i][i];
		matriz2[i][i] = temp;

		// intercambia los valores de la diagonal secundaria
		temp = matriz1[i][TAMANIO - 1 - i];
		matriz1[i][TAMANIO - 1 - i] = matriz2[i][TAMANIO - 1 - i];
		matriz2[i][TAMANIO - 1 - i] = temp;
	}
}

int main()
{
	float matriz1[TAMANIO][TAMANIO];
	float matriz2[TAMANIO][TAMANIO];

	// carga las dos matrices
	cout << "***RECOMENDACION: PROBAR CON 0  LA MATRIZ 1   Y CON  2  LA MATRIZ 2***" << endl;
	cout << endl;
	cout << "Cargar la primera matriz:" << endl;
	cargaMatriz(matriz1);
	cout << "Cargar la segunda matriz:" << endl;
	cargaMatriz(matriz2);

	// muestra las dos matrices
	cout << "Primera matriz:" << endl;
	muestraMatriz(matriz1);
	cout << "Segunda matriz:" << endl;
	muestraMatriz(matriz2);

	// intercambia las diagonales de las dos matrices
	intercambioDiagonal(matriz1, matriz2);

	// muestra las dos matrices después del intercambio
	cout << "Primera matriz después del intercambio de diagonales:" << endl;
	muestraMatriz(matriz1);
	cout << "Segunda matriz después del intercambio de diagonales:" << endl;
	muestraMatriz(matriz2);

	return 0;
}
