#include <iostream>
#include <string>

using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Persona {
    char nombre[20];
    int edad;
    float peso;
    Fecha fechaDeNacimiento;
};

struct Empleado {
    Persona persona;
    float salario;
    Fecha fechaDeContratacion;
};

void mostrarPersona(const Persona& p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Peso: " << p.peso << " kg" << endl;
    cout << "Fecha de Nacimiento: " << p.fechaDeNacimiento.dia << "/" << p.fechaDeNacimiento.mes << "/" << p.fechaDeNacimiento.anio << endl;
}

void mostrarEmpleado(const Empleado& e) {
    mostrarPersona(e.persona);
    cout << "Salario: $" << e.salario << endl;
    cout << "Fecha de Contratacion: " << e.fechaDeContratacion.dia << "/" << e.fechaDeContratacion.mes << "/" << e.fechaDeContratacion.anio << endl;
}

int main() {
    Persona veronica = { "Veronica", 20, 45.0, {2, 12, 1997} };

    Empleado esteban = { {"Esteban", 19, 60.0, {22, 7, 1998}}, 351667.19, {0, 0, 0} };

    cout << "Datos de Veronica:" << endl;
    mostrarPersona(veronica);
    cout << endl;

    cout << "Datos de Esteban:" << endl;
    mostrarEmpleado(esteban);
    cout << endl;

    Empleado trabajadores[3] = {
        esteban,
        {{"Maria", 25, 55.0, {15, 3, 1999}}, 450000.50, {1, 1, 2022}},
        {{"Juan", 30, 70.0, {10, 8, 1994}}, 500000.75, {1, 1, 2021}}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Datos del trabajador " << i + 1 << ":" << endl;
        mostrarEmpleado(trabajadores[i]);
        cout << endl;
    }

    return 0;
}
