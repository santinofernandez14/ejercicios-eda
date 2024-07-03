/**
 * 
 * 18. Realice una funci�n que reciba un n�mero y devuelva el factorial del mismo. 
 * El factorial de un n�mero: es el producto del n�mero por todos sus antecesores hasta 1. Ejemplos:
 * ? Factorial de 0 es 1 (por definici�n) Se denota 0!=1
 * ? Factorial de 1 es 1 Se denota 1!=1
 * ? Factorial de 4= 4*3*2*1 Se denota 4!=24
 * ? Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800
 * 
*/

#include <iostream>

int factorial(int numero)
{
	if (numero == 0)
	{
		return 1;
	}
	int resultado = 1;
	for (int i = 1; i <= numero; ++i)
	{
		resultado *= i;
	}
	return resultado;
}

int main()
{
	int numero;
	std::cout << "Ingrese un numero para calcular su factorial: ";
	std::cin >> numero;

	int resultado = factorial(numero);
	std::cout << "El factorial de " << numero << " es " << resultado << std::endl;

	return 0;
}
