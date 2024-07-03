#include <iostream>
#include <cstring> // Para funciones como strcpy, strcat, strlen, strstr, strchr, strcasecmp
#include <cctype>  // Para función tolower
using namespace std;

int main() {
    // Inicializar palabra1 con 'palabra'
    char palabra1[100] = "palabra";
    
    // Ingresar otra parte de la palabra1
    cout << "Ingrese otra parte de la palabra1: ";
    char extra[100];
    cin.getline(extra, 100);
    
    // Anexar la nueva parte a palabra1
    strcat(palabra1, " ");
    strcat(palabra1, extra);
    
    cout << "Resultado: " << palabra1 << endl;
    
    int opcion;
    do {
        cout << "\nOpciones:\n";
        cout << "1. Determinar la longitud de la cadena\n";
        cout << "2. Solicitar otra cadena y verificar si es subcadena o anexarla\n";
        cout << "3. Solicitar otra letra y verificar si está en la cadena\n";
        cout << "4. Comparar con 'Examen de EDA'\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer

        switch (opcion) {
            case 1: {
                cout << "La longitud de la cadena es: " << strlen(palabra1) << endl;
                break;
            }
            case 2: {
                char otraCadena[100];
                cout << "Ingrese otra cadena: ";
                cin.getline(otraCadena, 100);
                
                if (strstr(palabra1, otraCadena)) {
                    cout << "La cadena ingresada es una subcadena de la primera.\n";
                } else {
                    cout << "La cadena ingresada no es una subcadena.\n";
                    char concatenada[200];
                    strcpy(concatenada, palabra1);
                    strcat(concatenada, "-");
                    strcat(concatenada, otraCadena);
                    cout << "Nueva cadena: " << concatenada << endl;
                    if (strlen(concatenada) > strlen(palabra1)) {
                        cout << "La nueva cadena es más larga que la original.\n";
                    } else {
                        cout << "La cadena original es más larga o igual de larga que la nueva.\n";
                    }
                }
                break;
            }
            case 3: {
                char letra;
                cout << "Ingrese una letra: ";
                cin >> letra;
                cin.ignore(); // Limpiar el buffer
                
                if (strchr(palabra1, letra)) {
                    cout << "La letra está en la cadena.\n";
                } else {
                    cout << "La letra no está en la cadena.\n";
                }
                break;
            }
            case 4: {
                char frase[] = "Examen de EDA";
                char entrada[100];
                cout << "Ingrese una cadena: ";
                cin.getline(entrada, 100);
                
                bool iguales = true;
                if (strlen(frase) != strlen(entrada)) {
                    iguales = false;
                } else {
                    for (int i = 0; i < strlen(frase); i++) {
                        if (tolower(frase[i]) != tolower(entrada[i])) {
                            iguales = false;
                            break;
                        }
                    }
                }
                
                if (iguales) {
                    cout << "La cadena ingresada es igual a 'Examen de EDA'.\n";
                } else {
                    cout << "La cadena ingresada no es igual a 'Examen de EDA'.\n";
                }
                break;
            }
            case 0: {
                cout << "Saliendo del programa...\n";
                break;
            }
            default: {
                cout << "Opcion no válida, intente de nuevo.\n";
                break;
            }
        }
    } while (opcion != 0);
    
    return 0;
}

