/*



15. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos decimal: nota1, nota2, nota3; y otro llamada
alumno que tendrá los siguientes miembros: matricula, nombre, sexo, asistencia; hacer que la estructura promedio este
anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por último
imprimir sus datos incluido su promedio. Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre.
  */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Promedio
{
  float nota1;
  float nota2;
  float nota3;
};

struct Alumno
{
  char matricula[20];
  char nombre[20];
  char sexo[20];
  char asistencia[20];
  Promedio prom;
} alumno1, alumno2;

int main()
{
  float promedio_alumno, promedio_alumno2, a, b;
  cout << "ingrese su matricula " << endl;
  cin.getline(alumno1.matricula, 20, '\n');
  cout << "ingrese su nombre " << endl;
  cin.getline(alumno1.nombre, 20, '\n');
  cout << "ingrese su sexo " << endl;
  cin.getline(alumno1.sexo, 20, '\n');
  cout << "ingrese su aistencia " << endl;
  cin.getline(alumno1.asistencia, 20, '\n');

  cout << "\n";
  cout << "notas del alumno " << endl;

  cout << "nota 1 ";
  cin >> alumno1.prom.nota1;
  cout << "nota 2 ";
  cin >> alumno1.prom.nota2;
  cout << "nota 3 ";
  cin >> alumno1.prom.nota3;

  promedio_alumno = alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3;
  a = promedio_alumno / 3;
  cin.ignore();
  cout << "ingrese matricula " << endl;
  cin.getline(alumno2.matricula, 20, '\n');
  cout << "ingrese su nombre " << endl;
  cin.getline(alumno2.nombre, 20, '\n');
  cout << "ingrese su sexo " << endl;
  cin.getline(alumno2.sexo, 20, '\n');
  cout << "ingrese su aistencia " << endl;
  cin.getline(alumno2.asistencia, 20, '\n');

  cout << "\n";
  cout << "notas del alumno " << endl;

  cout << "nota 1 ";
  cin >> alumno2.prom.nota1;
  cout << "nota 2 ";
  cin >> alumno2.prom.nota2;
  cout << "nota 3 ";
  cin >> alumno2.prom.nota3;

  promedio_alumno2 = alumno2.prom.nota1 + alumno2.prom.nota2 + alumno2.prom.nota3;
  b = promedio_alumno2 / 3;

  cout << "\n";
  cout << "\n";
  cout << "datos del alumno " << endl;
  cout << "\n";
  cout << "matricula " << alumno1.matricula << endl;
  cout << "nombre " << alumno1.nombre << endl;
  cout << "sexo " << alumno1.sexo << endl;
  cout << "asistencia " << alumno2.asistencia << endl;
  cout << "promedio " << a;

  cout << "\n";
  cout << "\n";
  cout << "datos del alumno " << endl;
  cout << "\n";
  cout << "matricula " << alumno2.matricula << endl;
  cout << "nombre " << alumno2.nombre << endl;
  cout << "sexo " << alumno2.sexo << endl;
  cout << "asistencia " << alumno2.asistencia << endl;
  cout << "promedio " << b << endl;
  cout << "\n";
  if (a > b)
  {
    cout << "el alumno con mejor promedio es " << alumno1.nombre << endl;
  }
  else
  {
    cout << "el alumno con mejor promedio es " << alumno2.nombre << endl;
  }
}
