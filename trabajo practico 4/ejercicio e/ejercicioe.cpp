/**
 *
 * E. Crear un procedimiento amigosDeMario que contenga un arreglo de personajes
 *  {Luigi, Donkey, Yoshi} y reciba un puntero pt a string*,
 * nos muestre los personajes incrementando pt++
 *
 */
#include <iostream>
#include <string>

using namespace std;

void amigosDeMario(string **pt)
{
	string amigos[] = {"Luigi", "Donkey", "Yoshi"};
	int n = sizeof(amigos) / sizeof(string);

	for (int i = 0; i < n; i++)
	{
		**pt = amigos[i];
		cout << **pt << endl;
		(*pt)++;
	}
}

int main()
{
	string *puntero = new string;
	amigosDeMario(&puntero);
	delete puntero;
	return 0;
}
