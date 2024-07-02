/*




8. Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior.
Llamada Empleado que guarda nombre, Dirección (de tipo infoDireccion), y salario.
a- Declare un arreglo de 2 empleados. Desde la funcion main:
b- Cargue las estrcuturas Empleado. 
c- Muestre ambos empleados.

*/
#include <iostream>
#include <string>

using namespace std;

struct InfoDireccion
{
    string calle;
    string ciudad;
    string provincia;
};

struct Empleado
{
    string nombre;
    InfoDireccion direccion;
    float salario;
};

int main()
{
    Empleado empleados[2];

    for (int i = 0; i < 2; ++i)
    {
        cout << "Empleado " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> empleados[i].nombre;
        cout << "Calle: ";
        cin >> empleados[i].direccion.calle;
        cout << "Ciudad: ";
        cin >> empleados[i].direccion.ciudad;
        cout << "Provincia: ";
        cin >> empleados[i].direccion.provincia;
        cout << "Salario: ";
        cin >> empleados[i].salario;
        cout << endl;
    }

    for (int i = 0; i < 2; ++i)
    {
        cout << "Empleado " << i + 1 << ":" << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << endl;
        cout << "Calle: " << empleados[i].direccion.calle << endl;
        cout << "Ciudad: " << empleados[i].direccion.ciudad << endl;
        cout << "Provincia: " << empleados[i].direccion.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << endl;
    }

    return 0;
}
