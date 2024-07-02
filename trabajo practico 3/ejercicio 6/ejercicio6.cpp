/*



Declare una estructura llamada struct DiscoCompacto, que guarde el título, Artista, numero de canciones, precio, año de lanzamiento.
 Use typedef para declarar el alias del struct como CD.
-      Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
-      Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10 letras. –
-      Luego compare si dos títulos son del mismo artista.*/

#include <stdio.h>
#include <string.h>

// estructura DiscoCompacto
typedef struct
{
    char titulo[100];
    char artista[100];
    int num_canciones;
    float precio;
    int ano_lanzamiento;
} CD;

// función para ingresar los datos de un CD
void ingresarDatosCD(CD *disco)
{

    printf("Ingrese el titulo del disco: ");
    fgets(disco->titulo, sizeof(disco->titulo), stdin);
    disco->titulo[strcspn(disco->titulo, "\n")] = 0; // elimina el caracter de nueva línea

    printf("Ingrese el nombre del artista: ");
    fgets(disco->artista, sizeof(disco->artista), stdin);
    disco->artista[strcspn(disco->artista, "\n")] = 0; // elimina el caracter de nueva línea

    printf("Ingrese el numero de canciones: ");
    scanf("%d", &disco->num_canciones);

    printf("Ingrese el precio: ");
    scanf("%f", &disco->precio);

    printf("Ingrese el anio de lanzamiento: ");
    scanf("%d", &disco->ano_lanzamiento);

    // limpiar el búfer del teclado después de leer los datos numéricos
    while (getchar() != '\n')
        ;
}

int main()
{
    // variables de tipo DiscoCompacto
    CD disco1, disco2, disco3;

    // ingresar los datos para cada disco
    printf("Ingresar datos para el disco 1:\n");
    ingresarDatosCD(&disco1);

    printf("\nIngresar datos para el disco 2:\n");
    ingresarDatosCD(&disco2);

    printf("\nIngresar datos para el disco 3:\n");
    ingresarDatosCD(&disco3);

    // mostrar el nombre de cada artista si la longitud del artista es mayor a 10 letras
    if (strlen(disco1.artista) > 10)
    {
        printf("\nArtista del disco 1: %s\n", disco1.artista);
    }
    if (strlen(disco2.artista) > 10)
    {
        printf("Artista del disco 2: %s\n", disco2.artista);
    }
    if (strlen(disco3.artista) > 10)
    {
        printf("Artista del disco 3: %s\n", disco3.artista);
    }

    // comparar si dos títulos son del mismo artista
    if (strcmp(disco1.artista, disco2.artista) == 0)
    {
        printf("\nLos discos 1 y 2 son del mismo artista.\n");
    }
    else
    {
        printf("\nLos discos 1 y 2 son de artistas diferentes.\n");
    }

    return 0;
}
