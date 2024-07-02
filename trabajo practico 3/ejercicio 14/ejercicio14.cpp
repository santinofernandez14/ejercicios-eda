/*



Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país,
numero_medallas. En el main pedir que digite el número de atletas, y a medida que los carga, devuelva los datos
(Nombre, país) del atleta que ha ganado el mayor ‘número de medallas’*/

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Atleta
struct Atleta {
    string nombre;
    string pais;
    int numero_medallas;
};

int main() {
    int num_atletas;

    // Pedir al usuario el número de atletas
    cout << "Ingrese el numero de atletas: ";
    cin >> num_atletas;

    // Crear un arreglo de estructuras Atleta
    Atleta atletas[num_atletas];

    // Solicitar los datos para cada atleta
    for (int i = 0; i < num_atletas; ++i) {
        cout << "Atleta " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> atletas[i].nombre;
        cout << "Pais: ";
        cin >> atletas[i].pais;
        cout << "Numero de medallas: ";
        cin >> atletas[i].numero_medallas;
    }

    // Encontrar al atleta con el mayor número de medallas
    int max_medallas_index = 0;
    for (int i = 1; i < num_atletas; ++i) {
        if (atletas[i].numero_medallas > atletas[max_medallas_index].numero_medallas) {
            max_medallas_index = i;
        }
    }

    // Imprimir los datos del atleta con el mayor número de medallas
    cout<< endl;
	cout<< "El atleta con el mayor numero de medallas es:" << endl;
    cout << "Nombre: " << atletas[max_medallas_index].nombre << endl;
    cout << "Pais: " << atletas[max_medallas_index].pais << endl;
    cout << "Numero de medallas: " << atletas[max_medallas_index].numero_medallas << endl;

    return 0;
}
