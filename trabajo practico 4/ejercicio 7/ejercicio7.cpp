/**
 *
 * 7. En la función main, llamar a otra función Friends que reciba un arreglo de estructuras
 * y registre datos de 6 amigo/as con: nombre, sexo, si es soltero, y su Instagram.
 * Luego un procedimiento muestra los datos de los soltera/os.
 * Y una función medioPomelo, que carga el amigoElegido=“ ” (paso por referencia)
 * el primer soltero menor a 30 años; debe además, retornar su Instagram.
 *
 */

#include <iostream>
#include <string>

using namespace std;

struct Amigo
{
	string nombre;
	char sexo;
	bool soltero;
	string instagram;
	int edad;
};

void Friends(Amigo amigos[6])
{
	for (int i = 0; i < 6; i++)
	{
		cout << "Ingrese el nombre del amig@ " << i + 1 << ": ";
		cin >> amigos[i].nombre;
		cout << "Ingrese el sexo del amig@ (M/F): ";
		cin >> amigos[i].sexo;
		char respuesta;
		cout << "El amig@ " << amigos[i].nombre << " es solter@ (S/N): ";
		cin >> respuesta;
		amigos[i].soltero = (respuesta == 'S' || respuesta == 's');
		if (amigos[i].soltero)
		{
			cout << "Ingrese el Instagram del amig@: ";
			cin >> amigos[i].instagram;
			cout << "Ingrese la edad del amig@: ";
			cin >> amigos[i].edad;
		}
		else
		{
			amigos[i].instagram = "";
			amigos[i].edad = 0;
		}
	}
}

void mostrarSolteros(Amigo amigos[6])
{
	cout << "Los solteros son:" << endl;
	for (int i = 0; i < 6; i++)
	{
		if (amigos[i].soltero)
		{
			cout << amigos[i].nombre << " (" << amigos[i].sexo << ")" << endl;
			cout << "  - Instagram: " << amigos[i].instagram << endl;
			cout << "  - Edad: " << amigos[i].edad << endl;
			cout << endl;
		}
	}
}

string medioPomelo(Amigo amigos[6], Amigo &amigoElegido)
{
	for (int i = 0; i < 6; i++)
	{
		if (amigos[i].soltero && (amigos[i].sexo == 'F' || amigos[i].sexo == 'f') && amigos[i].edad <= 30)
		{
			amigoElegido = amigos[i];
			return amigoElegido.instagram;
		}
	}
	return "";
}

int main()
{
	Amigo amigos[6];
	Friends(amigos);
	mostrarSolteros(amigos);
	Amigo amigoElegido;
	string instagram = medioPomelo(amigos, amigoElegido);
	if (!instagram.empty())
	{
		cout << "La amiga elegida es " << amigoElegido.nombre << " y su Instagram es: " << instagram << endl;
	}
	else
	{
		cout << "No hay amigas solteras menores o iguales a 30 anios." << endl;
	}
	return 0;
}
