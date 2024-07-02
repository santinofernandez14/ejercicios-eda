/*



Pevaco. Escribe un programa que pida tres cadenas al usuario, y muestre el resultado de concatenar las dos primeras letras
 de las cadenas introducidas, pero además que nos indique si las dos primeras cadenas son iguales.
Ejemplo: el usuario introduce como cadenas perro, vaca y cocodrilo. El programa mostrará por pantalla: 
“El resultado de concatenar las dos primeras letras de las cadenas es: “pevaco”. La primera cadena, perro, 
no es igual a la segunda cadena, vaca.” Use strcat
Si el usuario introdujera perro, perro, mulo, el programa debería mostrar: 
“El resultado de concatenar las dos primeras letras de las cadenas es pepemu. La primera cadena, perro,
 es igual a la segunda cadena, perro.”*/
 
 #include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char cadena1[50], cadena2[50], cadena3[50];
    char resultado[7]; // Para almacenar las dos primeras letras concatenadas más el carácter nulo
    bool sonIguales;

    // Solicitar al usuario tres cadenas
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);

    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);

    printf("Ingrese la tercera cadena: ");
    scanf("%s", cadena3);

    // Concatenar las dos primeras letras de las cadenas
    resultado[0] = cadena1[0];
    resultado[1] = cadena1[1];
    resultado[2] = cadena2[0];
    resultado[3] = cadena2[1];
    resultado[4] = cadena3[0];
    resultado[5] = cadena3[1];
    resultado[6] = '\0'; // Agregar el carácter nulo al final para indicar el fin de la cadena

    // Verificar si las dos primeras cadenas son iguales
    if (strcmp(cadena1, cadena2) == 0) {
        sonIguales = true;
    } else {
        sonIguales = false;
    }

    // Mostrar el resultado
    printf("El resultado de concatenar las dos primeras letras de las cadenas es: \"%s\".\n", resultado);

    if (sonIguales) {
        printf("La primera cadena, %s, es igual a la segunda cadena, %s.\n", cadena1, cadena2);
    } else {
        printf("La primera cadena, %s, no es igual a la segunda cadena, %s.\n", cadena1, cadena2);
    }

    return 0;
}
