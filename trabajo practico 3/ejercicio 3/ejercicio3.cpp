/*



Escribe un programa que pida al conductor la patente del vehículo consistente en
 2 letras al inicio, 3 números, y 2 letras más al final.
 Al ingresarla, se debe cargar anexando un guion (separada por guiones). Ejemplo: AE-529-QZ. Usa strtok,
 para separar los 3 grupos, y mostrarlos individualmente. Validar la longitud de los grupos. Use strlen y strcat.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 50

int main()
{
    char patente[MAX_LENGTH];

    printf("Ingrese la patente del vehiculo (formato: LL-NNN-LL): ");
    scanf("%s", patente);

    if (strlen(patente) != 9)
    {
        printf("La patente ingresada no tiene el formato correcto. Debe tener 7 caracteres.\n");
        return 1; // Salir del programa con codigo de error
    }

    char *grupo;
    char grupo1[3], grupo2[4], grupo3[3];

    grupo = strtok(patente, "-");
    strcpy(grupo1, grupo);

    grupo = strtok(NULL, "-");
    strcpy(grupo2, grupo);

    grupo = strtok(NULL, "-");
    strcpy(grupo3, grupo);

    if (strlen(grupo1) != 2 || strlen(grupo2) != 3 || strlen(grupo3) != 2)
    {
        printf("La patente ingresada no tiene el formato correcto.\n");
        return 1; // Salir del programa con codigo de error
    }

    printf("\nGrupo 1: %s\n", grupo1);
    printf("Grupo 2: %s\n", grupo2);
    printf("Grupo 3: %s\n", grupo3);

    return 0;
}
