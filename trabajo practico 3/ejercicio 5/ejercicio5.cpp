/*



5. Se deben ingresa un par de frases por teclado, luego determine las mismas coinciden hasta la 5ta letra
(strncasecmp). Ejemplo: “La Vida es Bella” y “la VIRTUD de los grandes” coinciden. Nos dirá si además de
coincidir, contiene la subcadena “la” en ambas frases, solo una de ellas, o no la contiene. (use strstr).
*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
const int BYTES = 5;

int main()
{
    string frase1;
    string frase2;

    cout << "Ingrese la primera frase: ";
    getline(cin, frase1);

    cout << "Ingrese la segunda frase: ";
    getline(cin, frase2);

    if (strncasecmp(frase1.c_str(), frase2.c_str(), BYTES) == 0)
    {
        cout << "Las primeras 5 letras coinciden en ambas frases." << endl;

        if (strstr(frase1.c_str(), "la") && strstr(frase2.c_str(), "la"))
        {
            cout << "Ambas frases contienen la subcadena \"la\"." << endl;
        }
        else if (strstr(frase1.c_str(), "la"))
        {
            cout << "Solo la primera frase contiene la subcadena \"la\"." << endl;
        }
        else if (strstr(frase2.c_str(), "la"))
        {
            cout << "Solo la segunda frase contiene la subcadena \"la\"." << endl;
        }
        else
        {
            cout << "Ninguna de las frases contiene la subcadena \"la\"." << endl;
        }
    }
    else
    {
        cout << "Las primeras 5 letras no coinciden en ambas frases." << endl;
    }
    return 0;
}
/*




Se deben ingresa un par de frases por teclado, luego determine las mismas coinciden hasta la 5ta letra (strncasecmp). 
Ejemplo: “La Vida es Bella” y “la VIRTUD de los grandes” coinciden. Nos dirá si además de coincidir, 
contiene la subcadena “la” en ambas frases, solo una de ellas, o no la contiene. (use strstr).

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char frase1[MAX_LENGTH], frase2[MAX_LENGTH];

    // solicita al usuario que ingrese las dos frases
    printf("Ingrese la primera frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // Eliminar el caracter de nueva línea

    printf("Ingrese la segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; // Eliminar el caracter de nueva línea

    // compara las frases hasta la quinta letra
    if (strncasecmp(frase1, frase2, 5) == 0) {
        printf("Las primeras cinco letras de las frases coinciden.\n");
    } else {
        printf("Las primeras cinco letras de las frases no coinciden.\n");
    }

    // verifica si ambas frases contienen la subcadena "la", solo una de ellas o ninguna
    char *resultado1 = strstr(frase1, "la");
    char *resultado2 = strstr(frase2, "la");

    if (resultado1 != NULL && resultado2 != NULL) {
        printf("Ambas frases contienen la subcadena \"la\".\n");
    } else if (resultado1 != NULL) {
        printf("Solo la primera frase contiene la subcadena \"la\".\n");
    } else if (resultado2 != NULL) {
        printf("Solo la segunda frase contiene la subcadena \"la\".\n");
    } else {
        printf("Ninguna de las frases contiene la subcadena \"la\".\n");
    }

    return 0;
}
*/
