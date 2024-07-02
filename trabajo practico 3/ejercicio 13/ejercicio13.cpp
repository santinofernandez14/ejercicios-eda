/* 



13. El programa de Anses pide N, y carga un arreglo de estructuras los datos de N jubilados (nroCarnet, nombre y apellido, 
dni, edad, aportes, montoPensión). Luego que imprima: A- los datos del Jubilado con mayor y menor pensión. B- Aquellos 
Jubilados con entre 20 y 30 años de aporte. C- El número de carnet de los Jubilados con pensión inferior a $90000.
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Jubilados
{
    int nroCarnet;
    char nombre[20];
    char apellido[20];
    int dni;
    int edad;
    int aportes;
    int montoPension;
};

int main()
{
    int n, mayor = 0, menor = 0;

    cout << "ingrese la cantidad de jubilados ";
    cin >> n;
    Jubilados jubilados[n];
    for (int i = 0; i < n; i++)
    {

        cout << "ingrese su numero de carnet " << endl;
        cin >> jubilados[i].nroCarnet;
        cin.ignore();
        cout << "ingrese su nombre " << endl;
        cin.getline(jubilados[i].nombre, 20);
        cout << "ingrese su apellido " << endl;
        cin.getline(jubilados[i].apellido, 20);
        cout << "ingrese su dni " << endl;
        cin >> jubilados[i].dni;
        cout << "ingrese su edad " << endl;
        cin >> jubilados[i].edad;
        cout << "ingrese sus aportes " << endl;
        cin >> jubilados[i].aportes;
        cout << "ingrese su pension " << endl;
        cin >> jubilados[i].montoPension;
    }

    for (int i = 0; i < n; i++)
    {

        if (mayor < jubilados[i].montoPension)
        {

            mayor = jubilados[i].montoPension;
            cout << "el jubilado con mayor pension es " << endl;
            cout << "nro carnet " << jubilados[i].nroCarnet << endl;
            cout << "nombre " << jubilados[i].nombre << endl;
            cout << "apellido " << jubilados[i].apellido << endl;
            cout << "dni " << jubilados[i].dni << endl;
            cout << "edad " << jubilados[i].edad << endl;
            cout << "aportes " << jubilados[i].aportes << endl;
            cout << "monto pension " << jubilados[i].montoPension << endl;
        }
    }

    menor = mayor;
    for (int i = 0; i < n; i++)
    {

        if (menor > jubilados[i].montoPension)
        {

            menor = jubilados[i].montoPension;
            cout << "el jubilado con menor pension es " << endl;
            cout << "nro carnet " << jubilados[i].nroCarnet << endl;
            cout << "nombre " << jubilados[i].nombre << endl;
            cout << "apellido " << jubilados[i].apellido << endl;
            cout << "dni " << jubilados[i].dni << endl;
            cout << "edad " << jubilados[i].edad << endl;
            cout << "aportes " << jubilados[i].aportes << endl;
            cout << "monto pension " << jubilados[i].montoPension << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (jubilados[i].aportes >= 20 && jubilados[i].aportes <= 30)
        {
            cout << "jubilados con 20 o 30 anos " << endl;
            cout << "nombre " << jubilados[i].nombre << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (jubilados[i].montoPension < 90000)
        {
            cout << "los jubilados con pension menor a 90000 " << endl;
            cout << "nro carnet " << jubilados[i].nroCarnet << endl;
        }
    }
}
