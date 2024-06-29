#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_EMPLEADOS = 4;
    const int NUM_MESES = 3;
    
    string nombres[NUM_EMPLEADOS];
    float sueldos[NUM_EMPLEADOS][NUM_MESES];
    float ingresosAcumulados[NUM_EMPLEADOS] = {0};
    float totalSueldos = 0;
    int indiceMayorIngreso = 0;

    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin >> nombres[i];
        for (int j = 0; j < NUM_MESES; j++) {
            cout << "Ingrese el sueldo del mes " << j + 1 << " para " << nombres[i] << ": ";
            cin >> sueldos[i][j];
            ingresosAcumulados[i] += sueldos[i][j];
        }
    }

   
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        totalSueldos += ingresosAcumulados[i];
        if (ingresosAcumulados[i] > ingresosAcumulados[indiceMayorIngreso]) {
            indiceMayorIngreso = i;
        }
    }

   
    cout << "Total pagado en sueldos a todos los empleados en los ultimos 3 meses: " << totalSueldos << endl;

   
    cout << "El empleado con mayor ingreso acumulado es: " << nombres[indiceMayorIngreso] << " con un total de " << ingresosAcumulados[indiceMayorIngreso] << endl;

    return 0;
}

