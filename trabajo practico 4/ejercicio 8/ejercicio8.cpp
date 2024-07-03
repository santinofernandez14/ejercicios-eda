/**
 *
 * 8. Declare struct Fecha, declare en función main variables FA(fecha actual), y FC(fecha cumple),
 * luego se compruebe en función esMiCumple(struct* fecha, struct* cumple) si corresponde al día del cumpleaños.
 * Mostrar un mensaje de felicitaciones de ser así. Cargar las struct por referencia,
 * es decir cargarFecha(struct &fecha).
 *
 */
#include <iostream>
#include <ctime>

using namespace std;

struct Fecha
{
	int dia;
	int mes;
	int anio;
};

void cargarFecha(struct Fecha &fecha)
{
	cout << "Ingrese el dia: ";
	cin >> fecha.dia;
	cout << "Ingrese el mes: ";
	cin >> fecha.mes;
	cout << "Ingrese el anio: ";
	cin >> fecha.anio;
}

bool esMiCumple(struct Fecha actual, struct Fecha cumple)
{
	if (actual.dia == cumple.dia && actual.mes == cumple.mes)
	{
		return true;
	}
	return false;
}

int main()
{
	struct Fecha FC;
	cout << "Ingrese la fecha de tu cumpleanios (dia, mes, anio): ";
	cargarFecha(FC);

	time_t now = time(0);
	struct tm *now_tm = localtime(&now);

	Fecha FA;
	FA.dia = now_tm->tm_mday;
	FA.mes = now_tm->tm_mon + 1;
	FA.anio = now_tm->tm_year + 1900;

	cout << (esMiCumple(FC, FA) ? "Feliz cumpleanios!!!" : "No es tu cumpleanios...") << endl;

	return 0;
}
