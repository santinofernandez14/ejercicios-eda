/*




12. Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, pedir
datos al usuario para 3 becados, comprobar cuál de los 3 tiene el mejor promedio y luego imprimir datos del becado.
Use strcasecmp para comparar las cadenas y determinar si sus nombres son iguales. Ej.: Marco Sosa y Marco Perez. */
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

const int BYTES = 5;

struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
};

int main()
{
    Estudiante estudiantes[3];

    Estudiante a;
    cout << "Ingrese el nombre" << endl;
    getline(cin, a.nombre);
    cout << "Ingrese edad" << endl;
    cin >> a.edad;
    cout << "Ingrese promedio" << endl;
    cin >> a.promedio;
    cin.ignore();

    Estudiante b;
    cout << "Ingrese el nombre" << endl;
    getline(cin, b.nombre);
    cout << "Ingrese edad" << endl;
    cin >> b.edad;
    cout << "Ingrese promedio" << endl;
    cin >> b.promedio;
    cin.ignore();

    Estudiante c;
    cout << "Ingrese el nombre" << endl;
    getline(cin, c.nombre);
    cout << "Ingrese edad" << endl;
    cin >> c.edad;
    cout << "Ingrese promedio" << endl;
    cin >> c.promedio;
    cin.ignore();

    if (a.promedio > 0 && a.promedio > b.promedio && a.promedio > c.promedio)
    {
        cout << "el estudiante de mayor promedio es:" << endl;
        cout << "el estudiante de mayor promedio es:" << endl;
        cout << "Nombre " << a.nombre << endl;
        cout << "edad " << a.edad << endl;
        cout << "promedio " << a.promedio << endl;
    }
    else if (b.promedio > 0 && b.promedio > a.promedio && b.promedio > c.promedio)
    {
        cout << "el estudiante de mayor promedio es:" << endl;
        cout << "Nombre " << b.nombre << endl;
        cout << "edad " << b.edad << endl;
        cout << "promedio " << b.promedio << endl;
    }
    else if (c.promedio > 0 && c.promedio > a.promedio && c.promedio > b.promedio)
    {
        cout << "el estudiante de mayor promedio es:" << endl;
        cout << "Nombre " << c.nombre << endl;
        cout << "edad " << c.edad << endl;
        cout << "promedio " << c.promedio << endl;
    }
    else
    {
        cout << "todos los estudiantes tienen el mismo promedio" << endl;
    }

    string ar = a.nombre;
    string br = b.nombre;
    string cr = c.nombre;
    if (strcasecmp(ar.c_str(), br.c_str()) == 0)
    {
        cout << "los nombres son iguales " << a.nombre << endl;
    }
    else if (strcasecmp(br.c_str(), cr.c_str()) == 0)
    {
        cout << "los nombres son iguales " << b.nombre << endl;
    }
    else if (strcasecmp(cr.c_str(), ar.c_str()) == 0)
    {
        cout << "los nombres son iguales " << c.nombre << endl;
    }

    return 0;
}
