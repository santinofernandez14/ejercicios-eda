/**
 * 
 * 12. Realice una función que, dada una matriz y un número de fila de la matriz, devuelva con la función masPeque,
 * el menor de los elementos almacenados en dicha fila al main. masPeque llama en el if a la función filaValida
 * 
*/

#include <iostream>
#include <limits> // para usar numeric_limits
using namespace std;


const int TAMANIO = 4;

//  verifica si la fila es válida
bool filaValida(int fila) {
    return fila >= 0 && fila < TAMANIO;
}

//  encuentra el menor elemento en una fila de la matriz
int masPeque(int matriz[TAMANIO][TAMANIO], int fila) {
    if (!filaValida(fila)) {
        cout << "Fila no válida" << endl;
        return -1; // devolvemos un valor indicativo de error
    }

    int menor = numeric_limits<int>::max(); // inicializa con valor máximo posible

    for (int j = 0; j < TAMANIO; j++) {
        if (matriz[fila][j] < menor) {
            menor = matriz[fila][j];
        }
    }

    return menor;
}

// funcion para mostrar la matriz
void mostrarMatriz(int matriz[TAMANIO][TAMANIO]) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < TAMANIO; i++) {
        for (int j = 0; j < TAMANIO; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matriz[TAMANIO][TAMANIO] = {
        {6, 8, 1, 3},
        {7, 2, 5, 4},
        {6, 9, 0, 8},
        {4, 7, 2, 5}
    };

  
    mostrarMatriz(matriz);

    int fila;
    cout << "Ingrese el numero de fila (0 a " << TAMANIO - 1 << "): ";
    cin >> fila;

    int menor = masPeque(matriz, fila);
    if (menor != -1) {
        cout << "El menor elemento de la fila " << fila << " es: " << menor << endl;
    }

    return 0;
}
