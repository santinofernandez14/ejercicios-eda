
/*Escribe un programa que pida 2 nombres de pa�ses por teclado, nos dice cual tiene el nombre m�s largo(strlen), 
y permita elegir una opci�n: determinar si contiene �guay� (strstr), reemplazar el m�s corto en el m�s largo(strcpy), 
anexar el m�s largo al m�s corto(strcat). Luego muestra el resultado en pantalla.
Ejemplo: s1=Uruguay s2=Paraguay, tiene guay. Reemplaza s2=Uruguay por s2, y anexa y muestra s1=UruguayParaguay.*/





#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char pais1[100], pais2[100];

    // Solicitar los nombres de los pa�ses
    cout << "Introduce el nombre del primer pais: ";
    cin.getline(pais1, 100);
    cout << "Introduce el nombre del segundo pais: ";
    cin.getline(pais2, 100);

    // Determinar cu�l tiene el nombre m�s largo
    int len1 = strlen(pais1);
    int len2 = strlen(pais2);
    
    cout << "El pais con el nombre mas largo es: " << (len1 >= len2 ? pais1 : pais2) << endl;

    // Mostrar opciones al usuario
    cout << "Elige una opcion:" << endl;
    cout<<"1. determinar si tiene guay" <<endl;
    cout << "2. Reemplazar el mas corto en el mas largo" << endl;
    cout << "3. Anexar el mas largo al mas corto" << endl;
    int opcion;
    cin >> opcion;
    cin.ignore();  // Limpiar el buffer de entrada

    switch(opcion) {
        case 1:
            if (strstr(pais1, "guay") != NULL || strstr(pais2, "guay") != NULL) {
                cout << "Uno de los paises contiene 'guay'." << endl;
            } else {
                cout << "Ninguno de los paises contiene 'guay'." << endl;
            }
            break;
        case 2:
            if (len1 < len2) {
                strcpy(pais1, pais2);
                cout << "El pais mas corto ha sido reemplazado por el mas largo: " << pais1 << endl;
            } else {
                strcpy(pais2, pais1);
                cout << "El pais mas corto ha sido reemplazado por el mas largo: " << pais2 << endl;
            }
            break;
        case 3:
            if (len1 <= len2) {
                strcat(pais1, pais2);
                cout << "Los paises han sido anexados: " << pais1 << endl;
            } else {
                strcat(pais2, pais1);
                cout << "Los paises han sido anexados: " << pais2 << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

