/*




1. Escribe un programa que pida tres nombres animales al usuario, y muestre su letra capital y longitud (strchr y strlen). Ejemplo: el usuario introduce como cadenas león, jirafa, y elefante. El programa mostrará por pantalla.
El número de letras para león es 4, letra ‘L’, para jirafa es 6, letra ‘J’; y para elefante es 8, con letra ‘E’.
Pasar la letra a MAYÚSCULA.
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string nombre[3];
    char letraMayuscula;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el nombre del animal: ";
        cin >> nombre[i];
    }

    for (int i = 0; i < 3; i++)
    {
        letraMayuscula = toupper(nombre[i][0]);

        const char* cstr = nombre[i].c_str();

        cout << "El nombre " << nombre[i] << " tiene " << strlen(cstr) << " letras, y la primera letra en mayuscula es: " << letraMayuscula << endl;
    }
    return 0;
}

/**
 * 
 * 
 * 
 * 
Escribe un programa que pida tres nombres animales al usuario, y muestre su letra capital y longitud (strchr y strlen).


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char animal1[50], animal2[50], animal3[50];

    // solicita al usuario tres nombres de animales
    printf("Ingrese el nombre del primer animal: ");
    scanf("%s", animal1);

    printf("Ingrese el nombre del segundo animal: ");
    scanf("%s", animal2);

    printf("Ingrese el nombre del tercer animal: ");
    scanf("%s", animal3);


    // muestra la letra capital y longitud de cada nombre de animal
    printf("\nDatos de los animales:\n");
    
    

    // Animal 1
    printf("Nombre del primer animal: %s\n", animal1);
    printf("Letra capital del primer animal: %c\n", toupper(animal1[0])); // convierte la primera letra a mayúscula
    printf("Longitud del primer animal: %ld\n", strlen(animal1));

    // Animal 2
    printf("\nNombre del segundo animal: %s\n", animal2);
    printf("Letra capital del segundo animal: %c\n", toupper(animal2[0])); 
    printf("Longitud del segundo animal: %ld\n", strlen(animal2));

    // Animal 3
    printf("\nNombre del tercer animal: %s\n", animal3);
    printf("Letra capital del tercer animal: %c\n", toupper(animal3[0])); 
    printf("Longitud del tercer animal: %ld\n", strlen(animal3));

    return 0;
}
  
*/
