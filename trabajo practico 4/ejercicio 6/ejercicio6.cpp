/**
 *
 * 6. En este ejemplo, tenemos una estructura Abuela que contiene un nombre, edad, y hobby.
 * La función modificarAbuela recibe una referencia(&) a una estructura Abuela, y cambia nombre, edad,
 * y hobby (tejer, amasar, bordar). En la función main, creamos una instancia de Abuela
 * llamada abue1 con su nombre, edad, y hobby inicial. Luego, imprimimos los valores originales.
 * Después, llamamos a la función modificarAbuela(Abuela* abue1) pasando por puntero.
 *  Esto significa que los cambios realizados dentro de la función afectarán directamente a la estructura original.
 *  Finalmente, imprimir los valores de abue1 después de la modificación para mostrar que los cambios han sido aplicados.
 *
 */

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

struct Abuela
{
	char nombre[20];
	int edad;
	char hobby[20];
};

void modificarAbuela(struct Abuela *abue1)
{
	strcpy((*abue1).nombre, "mariana");
	(*abue1).edad = 91;
	strcpy((*abue1).hobby, "tejer,amasar,bordar");
};

int main()
{
	Abuela abue1;
	strcpy(abue1.nombre, "Veronica");
	abue1.edad = 80;
	strcpy(abue1.hobby, "leer");

	cout << "\nel nombre de la abuela es " << abue1.nombre << endl;
	cout << "\nla edad de la abuela es " << abue1.edad << endl;
	cout << "\nel hobby de la abuela es " << abue1.hobby << endl;

	cout << "\nlos datos modificados por la referencia son " << endl;

	modificarAbuela(&abue1);
	cout << "\nel nombre de la abuela es " << abue1.nombre << endl;
	cout << "\nla edad de la abuela es " << abue1.edad << endl;
	cout << "\nel hobby de la abuela es " << abue1.hobby << endl;
}
