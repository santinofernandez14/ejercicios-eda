/**
 *
 * 16. Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
 *  llamando a la función correspondiente, según las que siguen:
 * A. Calcula la multiplicación por sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2
 * (suma 4 veces el numero 2 generalizando nxm =n+n+…(m veces).
 * B. Calcula la división por restas sucesivas Ej.10/2=5 (5 indica la cantidad de veces que pude restar 2 al 10.
 * Y C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 (multiplica 2 por si mismo 3 veces) *
 *
 */

#include <iostream>

int multiplicacionPorSumas(int a, int b)
{
	int resultado = 0;
	for (int i = 0; i < b; ++i)
	{
		resultado += a;
	}
	return resultado;
}

int divisionPorRestas(int a, int b)
{
	int contador = 0;
	while (a >= b)
	{
		a -= b;
		contador++;
	}
	return contador;
}

int potenciaPorMultiplicaciones(int base, int exponente)
{
	int resultado = 1;
	for (int i = 0; i < exponente; ++i)
	{
		resultado *= base;
	}
	return resultado;
}

int main()
{
	int opcion;
	bool continuar = true;

	while (continuar)
	{
		std::cout << "Seleccione una operacion: " << std::endl;
		std::cout << "1. Multiplicacion por sumas sucesivas" << std::endl;
		std::cout << "2. Division por restas sucesivas" << std::endl;
		std::cout << "3. Potencia por multiplicaciones sucesivas" << std::endl;
		std::cout << "4. Salir" << std::endl;
		std::cin >> opcion;

		if (opcion == 4)
		{
			continuar = false;
			break;
		}

		int a, b;
		switch (opcion)
		{
		case 1:
			std::cout << "Ingrese dos numeros para la multiplicacion (a b): ";
			std::cin >> a >> b;
			std::cout << "Resultado: " << multiplicacionPorSumas(a, b) << std::endl;
			break;
		case 2:
			std::cout << "Ingrese dos numeros para la division (a b): ";
			std::cin >> a >> b;
			std::cout << "Resultado: " << divisionPorRestas(a, b) << std::endl;
			break;
		case 3:
			std::cout << "Ingrese la base y el exponente (base exponente): ";
			std::cin >> a >> b;
			std::cout << "Resultado: " << potenciaPorMultiplicaciones(a, b) << std::endl;
			break;
		default:
			std::cout << "Opcion no valida. Intente de nuevo." << std::endl;
			break;
		}
	}

	std::cout << "Programa terminado." << std::endl;
	return 0;
}
