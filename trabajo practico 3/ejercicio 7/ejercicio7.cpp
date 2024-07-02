/*

Javier

7. Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos
valores (fuera del main): Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática,
15hs. El registro profesor debe incluir a otro registro materia. Luego en el main, muestre ambos profesores
concatenados a sus materias. Sugerencia getline para los char[].
*/
#include <iostream>
#include <string>

using namespace std;

struct Materia
{
    string nombre;
    int carga_horaria;
};

struct Profesor
{
    string nombre;
    string cargo;
    Materia materia;
};

int main()
{
    Profesor profesor1 = {"Cristina", "Titular", {"Gestion de datos", 20}};
    Profesor profesor2 = {"Fabiana", "Jefa TP", {"Matematica", 15}};

    cout << "Profesor 1:" << endl;
    cout << "Nombre: " << profesor1.nombre << endl;
    cout << "Cargo: " << profesor1.cargo << endl;
    cout << "Materia: " << profesor1.materia.nombre << endl;
    cout << "Carga Horaria: " << profesor1.materia.carga_horaria << "hs" << endl;

    cout << endl;

    cout << "Profesor 2:" << endl;
    cout << "Nombre: " << profesor2.nombre << endl;
    cout << "Cargo: " << profesor2.cargo << endl;
    cout << "Materia: " << profesor2.materia.nombre << endl;
    cout << "Carga Horaria: " << profesor2.materia.carga_horaria << "hs" << endl;

    return 0;
}
