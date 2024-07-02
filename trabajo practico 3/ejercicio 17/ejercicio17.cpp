/*



17. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el
nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad. Realice
un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no
tienen ninguna discapacidad y otro que contenga las personas con discapacidad.
*/
#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    bool discapacidad;
};

int main()
{
    int num_personas;
    cout << "Ingrese el numero de personas que desea ingresar: ";
    cin >> num_personas;

    Persona personas[num_personas];
    Persona discapacitada[num_personas];
    Persona resto[num_personas];

    int cont_disc = 0;
    int cont_rest = 0;

    for (int i = 0; i < num_personas; ++i)
    {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> personas[i].nombre;

        char respuesta_discapacidad;
        cout << "Tiene discapacidad? (s/n): " << endl;
        cin >> respuesta_discapacidad;
        personas[i].discapacidad = (respuesta_discapacidad == 's' || respuesta_discapacidad == 'S');

        if (personas[i].discapacidad)
        {
            discapacitada[cont_disc] = personas[i];
            cont_disc++;
        }
        else
        {
            resto[cont_rest] = personas[i];
            cont_rest++;
        }
    }

    cout << "Datos ingresados:" << endl;
    for (int i = 0; i < num_personas; ++i)
    {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Discapacidad: " << (personas[i].discapacidad ? "Si" : "No") << endl;
        cout << endl;
    }

    cout << "Personas con discapacidad:"<< endl;
    for (int i = 0; i < cont_disc; ++i)
    {
        cout << "Nombre: " << discapacitada[i].nombre << endl;
    }

    cout << "Personas sin discapacidad:"<< endl;
    for (int i = 0; i < cont_rest; ++i)
    {
        cout << "Nombre: " << resto[i].nombre << endl;
    }

    return 0;
}
