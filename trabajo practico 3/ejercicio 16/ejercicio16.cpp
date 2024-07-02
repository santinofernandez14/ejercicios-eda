/*



 16. Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres campos:
horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado por el Ciclista en
completar todas y cada una de las etapas. Mostrar para 3 de ellos, nombre completo, medallas, y tiempos en las etapas. */
#include <iostream>
#include <string>

using namespace std;

struct Etapa
{
    int horas;
    int minutos;
    int segundos;
};

Etapa calcularTiempoTotal(Etapa etapas[], int numEtapas)
{
    Etapa tiempoTotal = {0, 0, 0};

    for (int i = 0; i < numEtapas; ++i)
    {
        tiempoTotal.horas += etapas[i].horas;
        tiempoTotal.minutos += etapas[i].minutos;
        tiempoTotal.segundos += etapas[i].segundos;

        tiempoTotal.minutos += tiempoTotal.segundos / 60;
        tiempoTotal.segundos %= 60;
        tiempoTotal.horas += tiempoTotal.minutos / 60;
        tiempoTotal.minutos %= 60;
    }

    return tiempoTotal;
}

void mostrarDatosCiclista(string nombre, string medallas, Etapa etapas[], int numEtapas)
{
    cout << "Nombre: " << nombre << endl;
    cout << "Medallas: " << medallas << endl;
    cout << "Tiempo en las etapas:" << endl;

    for (int i = 0; i < numEtapas; ++i)
    {
        cout << "Etapa " << i + 1 << ": " << etapas[i].horas << " horas, "
             << etapas[i].minutos << " minutos, " << etapas[i].segundos << " segundos" << endl;
    }
}

int main()
{
    const int MAX_ETAPAS = 3;
    const int MAX_CICLISTAS = 3;

    int numEtapas;
    string nombres[MAX_CICLISTAS];
    string medallas[MAX_CICLISTAS];

    cout << "Ingrese el numero de etapas: ";
    cin >> numEtapas;

    Etapa etapas[numEtapas];

    for (int i = 0; i < MAX_CICLISTAS; ++i)
    {
        cout << "Ingrese el nombre del ciclista " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese las medallas del ciclista " << i + 1 << ": ";
        cin >> medallas[i];

        for (int j = 0; j < numEtapas; ++j)
        {
            cout << "Ingrese el tiempo para la etapa " << j + 1 << " del ciclista " << i + 1 << " (horas minutos segundos): ";
            cin >> etapas[j].horas >> etapas[j].minutos >> etapas[j].segundos;
        }
    }

    for (int i = 0; i < MAX_CICLISTAS; ++i)
    {
        Etapa tiempoTotal = calcularTiempoTotal(etapas, numEtapas);
        mostrarDatosCiclista(nombres[i], medallas[i], etapas, numEtapas);
        cout << "Tiempo total: " << tiempoTotal.horas << " horas, "
             << tiempoTotal.minutos << " minutos, " << tiempoTotal.segundos << " segundos" << endl;
        cout << endl;
    }
    return 0;
}
