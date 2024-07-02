/*



Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda de las 
personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura que guarda una 
persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.
  */
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

struct Fecha {
    int dia, mes, anio;
};

struct Persona {
    char nombre[20];
    int edad;
    float peso;
    Fecha fechaNacimiento;
   
};

struct Trabajador {
    Persona persona;
    float salario;
    
};

int main() {
    Trabajador empleado[1];

    Persona person[1];
    
	Persona veronica;
    strcpy(veronica.nombre, "Veronica");
    veronica.edad = 20;
    veronica.peso = 45;
    veronica.fechaNacimiento.dia = 2;
    veronica.fechaNacimiento.mes = 12;
    veronica.fechaNacimiento.anio = 1997;
   
    

    Trabajador esteban;
    strcpy(esteban.persona.nombre, "Esteban");
    esteban.persona.edad = 19;
    esteban.persona.peso = 60;
    esteban.salario = 351667.19;
   
    empleado[0] = esteban;
    person[0]=veronica;
	
  
    for (int i = 0; i < 1; i++) {
    	cout << "Informacion de la persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << person[i].nombre << endl;
        cout << "Edad: " << person[i].edad << endl;
        cout << "Peso: " << person[i].peso << endl;
        cout << "Fecha de nacimiento: " << person[i].fechaNacimiento.dia << "/"
            << person[i].fechaNacimiento.mes << "/" << person[i].fechaNacimiento.anio << endl;
        cout << "Informacion del trabajador " << i + 1 << ":" << endl;
        cout << "Nombre: " << empleado[i].persona.nombre << endl;
        cout << "Edad: " << empleado[i].persona.edad << endl;
        cout << "Peso: " << empleado[i].persona.peso << endl;
        cout << "Salario: $" << empleado[i].salario << endl;
        
    }

    return 0;
}
