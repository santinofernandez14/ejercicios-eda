/**
 *
 * 11. Cree una estructura Persona que tenga un array de 30 caracteres, y su edad. Precargue en el main,
 * una variable de tipo Persona, y use una función pedirDatos(Persona &) que la cargue;
 * use getline para cargar el nombre. Otra función cumpleanios(Persona*) aumenta la edad,
 * y mostrarDatos(Persona) que reciba la estructura y la muestre. Declare el prototipo de las funciones pedirDatos,
 * cumpleanios y mostrarDatos. Pruébelas desde función main.
 *
 */
#include <iostream>
#include <cstring>

struct Persona
{
	char nombre[30];
	int edad;
};

void pedirDatos(Persona &p);
void cumpleanios(Persona *p);
void mostrarDatos(const Persona &p);

int main()
{
	Persona persona;

	pedirDatos(persona);
	mostrarDatos(persona);

	cumpleanios(&persona);
	std::cout << "Después del cumpleaños:" << std::endl;
	mostrarDatos(persona);

	return 0;
}

void pedirDatos(Persona &p)
{
	std::cout << "Ingrese el nombre: ";
	std::cin.getline(p.nombre, 30);
	std::cout << "Ingrese la edad: ";
	std::cin >> p.edad;
	std::cin.ignore();
}

void cumpleanios(Persona *p)
{
	p->edad++;
}

void mostrarDatos(const Persona &p)
{
	std::cout << "Nombre: " << p.nombre << std::endl;
	std::cout << "Edad: " << p.edad << std::endl;
}
