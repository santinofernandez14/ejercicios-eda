/* 



18. Defina una estructura que permita cargar el d�a y las temperaturas m�xima y m�nima de ese d�a. Luego defina un arreglo 
en el que cargara todos estos datos para un mes. Realice un programa que cargue la estructura antes definida y calcule 
el promedio de temperaturas m�ximas y el promedio de temperaturas m�nimas del mes. */
#include <iostream>
using namespace std;

struct TemperaturaDia {
    int dia;
    float temperaturaMaxima;
    float temperaturaMinima;
};

int main() {
    const int DIAS_EN_MES = 30; 
    TemperaturaDia temperaturasMes[DIAS_EN_MES];

    // Cargar datos para cada d�a del mes
    for (int i = 0; i < DIAS_EN_MES; ++i) {
        cout << "Ingrese datos para el dia " << i + 1 << ":" << endl;
        cout << "Temperatura maxima: ";
        cin >> temperaturasMes[i].temperaturaMaxima;
        cout << "Temperatura minima: ";
        cin >> temperaturasMes[i].temperaturaMinima;
    }

    // Calcular promedio de temperaturas m�ximas
    float sumaMaximas = 0;
    for (int i = 0; i < DIAS_EN_MES; ++i) {
        sumaMaximas += temperaturasMes[i].temperaturaMaxima;
    }
    float promedioMaximas = sumaMaximas / DIAS_EN_MES;

    // Calcular promedio de temperaturas m�nimas
    float sumaMinimas = 0;
    for (int i = 0; i < DIAS_EN_MES; ++i) {
        sumaMinimas += temperaturasMes[i].temperaturaMinima;
    }
    float promedioMinimas = sumaMinimas / DIAS_EN_MES;

    cout << "Promedio de temperaturas maximas del mes: " << promedioMaximas << endl;
    cout << "Promedio de temperaturas minimas del mes: " << promedioMinimas << endl;

    return 0;
}
