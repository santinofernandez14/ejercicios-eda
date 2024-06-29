#include <iostream>
using namespace std;

const int TAM_TABLERO = 8;

void inicializarTablero(char tablero[TAM_TABLERO][TAM_TABLERO]);
void mostrarTablero(char tablero[TAM_TABLERO][TAM_TABLERO]);
void moverPeon(char tablero[TAM_TABLERO][TAM_TABLERO]);
void moverAlfil(char tablero[TAM_TABLERO][TAM_TABLERO]);

int main() {
    char tablero[TAM_TABLERO][TAM_TABLERO];

    inicializarTablero(tablero);
    cout << "Tablero inicial:" << endl;
    mostrarTablero(tablero);

    moverPeon(tablero);
    cout << "Tablero despues de mover el peon:" << endl;
    mostrarTablero(tablero);

    moverAlfil(tablero);
    cout << "Tablero despues de mover el alfil:" << endl;
    mostrarTablero(tablero);

    return 0;
}

void inicializarTablero(char tablero[TAM_TABLERO][TAM_TABLERO]) {
   
    for (int i = 0; i < TAM_TABLERO; i++) {
        for (int j = 0; j < TAM_TABLERO; j++) {
            tablero[i][j] = ' ';
        }
    }

   
    for (int i = 0; i < TAM_TABLERO; i++) {
        tablero[1][i] = 'P'; 
        tablero[6][i] = 'P';
    }
    tablero[0][0] = tablero[0][7] = 'T'; 
    tablero[7][0] = tablero[7][7] = 'T';
    tablero[0][1] = tablero[0][6] = 'C'; 
    tablero[7][1] = tablero[7][6] = 'C';
    tablero[0][2] = tablero[0][5] = 'A'; 
    tablero[7][2] = tablero[7][5] = 'A';
    tablero[0][3] = 'Q'; 
    tablero[7][3] = 'Q';
    tablero[0][4] = 'K'; 
    tablero[7][4] = 'K';
}

void mostrarTablero(char tablero[TAM_TABLERO][TAM_TABLERO]) {
    for (int i = 0; i < TAM_TABLERO; i++) {
        for (int j = 0; j < TAM_TABLERO; j++) {
            cout << tablero[i][j] << ' ';
        }
        cout << endl;
    }
}

void moverPeon(char tablero[TAM_TABLERO][TAM_TABLERO]) {
   
    if (tablero[1][4] == 'P') {
        tablero[1][4] = ' ';
        tablero[2][5] = 'P';
    }
}

void moverAlfil(char tablero[TAM_TABLERO][TAM_TABLERO]) {
    
    if (tablero[1][4] == ' ') {
        
        if (tablero[0][5] == 'A') {
            tablero[0][5] = ' ';
            tablero[2][3] = 'A';
        }
    } else {
        cout << "El alfil no puede moverse porque el peon no se ha movido." << endl;
    }
}

