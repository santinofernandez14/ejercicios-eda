/**
 * 
 * D. La función Hogwarts recibirá un puntero a cadena “hechizo”, y muestra por pantalla cuantas vocales y 
 * consonantes tiene. Teste con ‘Expelliarmus’, nos muestra: 5 vocales, 7 consonantes. Ej2. ‘Alohomora’
 * 
*/

#include <iostream>

void Hogwarts(const char* hechizo);

int main() {
    const char* hechizo1 = "Expelliarmus";
    const char* hechizo2 = "Alohomora";

    std::cout << "Probando con: " << hechizo1 << std::endl;
    Hogwarts(hechizo1);

    std::cout << "Probando con: " << hechizo2 << std::endl;
    Hogwarts(hechizo2);

    return 0;
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool esLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void Hogwarts(const char* hechizo) {
    int vocales = 0;
    int consonantes = 0;

    for (int i = 0; hechizo[i] != '\0'; ++i) {
        char c = toLowerCase(hechizo[i]);

        // Verificamos si el carácter es una vocal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
        // Verificamos si el carácter es una consonante
        else if (esLetra(c)) {
            consonantes++;
        }
    }

    std::cout << "El hechizo \"" << hechizo << "\" tiene " << vocales << " vocales y " << consonantes << " consonantes." << std::endl;
}
