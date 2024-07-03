/**
 * 20. En un club donde se practica combate, se carga el peso de los boxeadores. El club tiene una capacidad máxima
de 80 deportistas. Llamar/invocar a todas las funciones/procedimientos. Usar al menos 1 arreglo. Debe haber
con una función o procedimiento, según sea más conveniente que:
a) Permita ingresar Deportista (string/char * nombre, y float peso). Validar el peso entre 40 y hasta 120.
b) Calcule cuántas/os boxeadores son de las siguientes categorías:
A- Mosca (hasta 52kg) B- Ligero (entre 52 y 63kg) C- Wélter (entre 63 y 69kg) D- Pesado más de 69 kg
c) Una función o procedimiento, para mostrar todos los pesos cargados en el club
d) También se debe encontrar el peso máximo de cada categoría cargada
e) Calcule y muestre la cantidad de deportista por cada categoría (mosca, ligero, wélter, pesado)
f) Encuentre el peso máximo cargado de todos los boxeadores, y lo devuelva al main
 *
 *
*/
#include <iostream>
#include <cstring>

using namespace std;

const int MAX_DEPORTISTAS = 80;

struct Deportista
{
	char nombre[50];
	float peso;
};

Deportista deportistas[MAX_DEPORTISTAS];
int cantidadDeportistas = 0;

void ingresarDeportista()
{
	if (cantidadDeportistas >= MAX_DEPORTISTAS)
	{
		cout << "No se pueden ingresar mas deportistas. Se alcanzo el limite." << endl;
		return;
	}

	char nombreTemporal[50];
	float pesoTemporal;

	cout << "Ingrese el nombre del deportista: ";
	cin.getline(nombreTemporal, 50);

	cout << "Ingrese el peso del deportista (entre 40 y 120 kg): ";
	cin >> pesoTemporal;

	if (pesoTemporal < 40 || pesoTemporal > 120)
	{
		cout << "Peso invalido. El peso debe estar entre 40 y 120 kg." << endl;
		return;
	}

	strcpy(deportistas[cantidadDeportistas].nombre, nombreTemporal);
	deportistas[cantidadDeportistas].peso = pesoTemporal;
	cantidadDeportistas++;

	cout << "Deportista ingresado correctamente." << endl;
}

void categoriaDeportistas(int &mosca, int &ligero, int &welter, int &pesado)
{
	mosca = ligero = welter = pesado = 0;

	for (int i = 0; i < cantidadDeportistas; i++)
	{
		if (deportistas[i].peso <= 52)
			mosca++;
		else if (deportistas[i].peso <= 63)
			ligero++;
		else if (deportistas[i].peso <= 69)
			welter++;
		else
			pesado++;
	}
}

void mostrarPesos()
{
	if (cantidadDeportistas == 0)
	{
		cout << "No hay deportistas cargados." << endl;
		return;
	}

	cout << "Pesos de los deportistas:" << endl;
	for (int i = 0; i < cantidadDeportistas; i++)
	{
		cout << deportistas[i].nombre << ": " << deportistas[i].peso << " kg" << endl;
	}
}

float pesoMaximoCategoria(int categoria)
{
	float pesoMaximo = 0;

	for (int i = 0; i < cantidadDeportistas; i++)
	{
		if (categoria == 1 && deportistas[i].peso <= 52)
			pesoMaximo = max(pesoMaximo, deportistas[i].peso);
		else if (categoria == 2 && deportistas[i].peso > 52 && deportistas[i].peso <= 63)
			pesoMaximo = max(pesoMaximo, deportistas[i].peso);
		else if (categoria == 3 && deportistas[i].peso > 63 && deportistas[i].peso <= 69)
			pesoMaximo = max(pesoMaximo, deportistas[i].peso);
		else if (categoria == 4 && deportistas[i].peso > 69)
			pesoMaximo = max(pesoMaximo, deportistas[i].peso);
	}

	return pesoMaximo;
}

void mostrarCantidadPorCategoria()
{
	int mosca, ligero, welter, pesado;
	categoriaDeportistas(mosca, ligero, welter, pesado);

	cout << "Cantidad de deportistas por categoria:" << endl;
	cout << "Mosca (hasta 52 kg): " << mosca << endl;
	cout << "Ligero (entre 52 y 63 kg): " << ligero << endl;
	cout << "Welter (entre 63 y 69 kg): " << welter << endl;
	cout << "Pesado (mas de 69 kg): " << pesado << endl;
}

float pesoMaximoDeportistas()
{
	float pesoMaximo = 0;

	for (int i = 0; i < cantidadDeportistas; i++)
	{
		pesoMaximo = max(pesoMaximo, deportistas[i].peso);
	}

	return pesoMaximo;
}

int main()
{
	int opcion;
	do
	{
		cout << "\nMenu:" << endl;
		cout << "1. Ingresar deportista" << endl;
		cout << "2. Mostrar pesos" << endl;
		cout << "3. Mostrar cantidad de deportistas por categoria" << endl;
		cout << "4. Mostrar peso maximo de cada categoria" << endl;
		cout << "5. Mostrar peso maximo de todos los deportistas" << endl;
		cout << "0. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cin.ignore();

		switch (opcion)
		{
		case 1:
			ingresarDeportista();
			break;
		case 2:
			mostrarPesos();
			break;
		case 3:
			mostrarCantidadPorCategoria();
			break;
		case 4:
		{
			float pesoMaximoMosca = pesoMaximoCategoria(1);
			float pesoMaximoLigero = pesoMaximoCategoria(2);
			float pesoMaximoWelter = pesoMaximoCategoria(3);
			float pesoMaximoPesado = pesoMaximoCategoria(4);

			cout << "Peso maximo por categoria:" << endl;
			cout << "Mosca: " << pesoMaximoMosca << " kg" << endl;
			cout << "Ligero: " << pesoMaximoLigero << " kg" << endl;
			cout << "Welter: " << pesoMaximoWelter << " kg" << endl;
			cout << "Pesado: " << pesoMaximoPesado << " kg" << endl;
			break;
		}
		case 5:
			cout << "Peso maximo de todos los deportistas: " << pesoMaximoDeportistas() << " kg" << endl;
			break;
		case 0:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opcion invalida. Intente nuevamente." << endl;
		}
	} while (opcion != 0);

	return 0;
}
