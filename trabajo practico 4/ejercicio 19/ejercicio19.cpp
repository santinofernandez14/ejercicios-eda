/**
 * 
 * 19. Escriba las siguientes funciones:
 * A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población,
 *  recibe estos datos como parámetros y devuelve la tasa.
 * B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, 
 * recibe estos datos como parámetros y devuelve la tasa.
 * C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad,
 * utilice las funciones descriptas en A y B
 * D. Densidad Poblacional: habitantes por km 2
 * Realice un programa que permita ingresar, el nombre de un país, su población, su superficie,
 *  y luego de la opción de calcular: Densidad poblacional, Tasa de natalidad, 
 * Tasa de Mortalidad y Evolución demográfica, mientras el usuario lo desee.
 * 
*/

#include <iostream>
#include <string>
using namespace std;

// funcion para calcular tasa de natalidad
double tasaNatalidad(int nacimientos, int poblacion)
{
	return static_cast<double>(nacimientos) / poblacion;
}

// funcion para calcular tasa de mortalidad
double tasaMortalidad(int fallecimientos, int poblacion)
{
	return static_cast<double>(fallecimientos) / poblacion;
}

// funcion para determinar si la población está en crecimiento
bool poblacionEnCrecimiento(int nacimientos, int fallecimientos, int poblacion)
{
	double natalidad = tasaNatalidad(nacimientos, poblacion);
	double mortalidad = tasaMortalidad(fallecimientos, poblacion);
	return natalidad > mortalidad;
}

// funcion para calcular  densidad poblacional
double densidadPoblacional(int poblacion, double superficie)
{
	return poblacion / superficie;
}

int main()
{
	string nombrePais;
	int poblacion, nacimientos, fallecimientos;
	double superficie;
	char opcion;

	cout << "Ingrese el nombre del pais: ";
	cin.ignore();
	getline(cin, nombrePais);

	cout << "Ingrese la poblacion total: ";
	cin >> poblacion;

	cout << "Ingrese la superficie en km´s cuadrados: ";
	cin >> superficie;

	cout << "Ingrese la cantidad de nacimientos: ";
	cin >> nacimientos;

	cout << "Ingrese la cantidad de fallecimientos: ";
	cin >> fallecimientos;

	do
	{
		cout << endl;
		cout << "Elija una opcion para calcular:\n";
		cout << "1. Densidad Poblacional\n";
		cout << "2. Tasa de Natalidad\n";
		cout << "3. Tasa de Mortalidad\n";
		cout << "4. Evolucion Demografica\n";
		cout << "5. Salir\n";
		cout << "Ingrese su opcion: ";
		cout << endl;

		int eleccion;
		cin >> eleccion;

		switch (eleccion)
		{
		case 1:
			cout << endl;
			cout << "Densidad Poblacional: " << densidadPoblacional(poblacion, superficie) << " habitantes por km cuadrado" << endl;
			break;
		case 2:
			cout << endl;
			cout << "Tasa de Natalidad: " << tasaNatalidad(nacimientos, poblacion) * 100 << "%" << endl;
			break;
		case 3:
			cout << endl;
			cout << "Tasa de Mortalidad: " << tasaMortalidad(fallecimientos, poblacion) * 100 << "%" << endl;
			break;
		case 4:
			if (poblacionEnCrecimiento(nacimientos, fallecimientos, poblacion))
			{
				cout << endl;
				cout << "La poblacion esta en crecimiento." << endl;
			}
			else
			{
				cout << endl;
				cout << "La poblacion no esta en crecimiento." << endl;
			}
			break;
		case 5:
			cout << endl;
			cout << "***Gracias por usar el MAJESTUOSO PROGRAMA del Grupo E.*** !Hasta luego!" << endl;
			return 0; // Aquí se agregó el valor de retorno

		default:
			cout << endl;
			cout << "Opcion no valida. Por favor, elija nuevamente." << endl;
		}
	} while (opcion != '5');

	return 0;
}
