/*



11. Hacer una estructura llamada Corredor, en la cual se tendr�n los siguientes campos: Nombre, edad, sexo, club,
pedir datos al usuario para un corredor, y asignarle una Categor�a de competici�n (use strcpy para copiar a la
variable) seg�n sea su categor�a: 1 - Juvenil menor (hasta 18 a�os) 2- Se�or menor (hasta 40 a�os) 3- Veterano
(desde +40 a�os)Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n
*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Corredor
{
    char nombre[50];
    int edad;
    char sexo[2];
    char club[50];
    char categoria[20];
};

int main()
{
    Corredor corredor;
    char sex_minuscula;

    cout << "Ingrese el nombre del corredor: ";
    cin.getline(corredor.nombre, sizeof(corredor.nombre));

    cout << "Ingrese la edad del corredor: ";
    cin >> corredor.edad;

    cout << "Ingrese el sexo del corredor (M/F): ";
    cin >> corredor.sexo;
    sex_minuscula = tolower(corredor.sexo[0]);

    cout << "Ingrese el club del corredor: ";
    cin >> corredor.club;
    cout << endl;

    if (corredor.edad <= 18)
    {
        strcpy(corredor.categoria, "Juvenil menor");
    }
    else if (corredor.edad <= 40)
    {
        strcpy(corredor.categoria, "Senior menor");
    }
    else
    {
        strcpy(corredor.categoria, "Veterano");
    }

    cout << "Nombre: " << corredor.nombre << endl;
    cout << "Edad: " << corredor.edad << endl;
    cout << (sex_minuscula == 'm' ? "Sexo: Masculino" : (sex_minuscula == 'f' ? "Sexo: Femenino" : "Sexo invalido")) << endl;
    cout << "Club: " << corredor.club << endl;
    cout << "Categoria: " << corredor.categoria << endl;

    return 0;
}
