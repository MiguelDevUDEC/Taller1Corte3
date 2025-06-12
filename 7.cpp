//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    const int TAM = 4;
    int matriz[TAM][TAM];
    int sumaDiagonal = 0;

    // Leer los datos de la matriz
    cout << "Ingrese los elementos de una matriz 4x4:" << endl;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

            // Si estamos en la diagonal principal
            if (i ==
             j) {
                sumaDiagonal += matriz[i][j];
             }
        }
    }

    // Mostrar la suma de la diagonal principal
    cout << "\nLa suma de los elementos de la diagonal principal es: " << sumaDiagonal << endl;

    return 0;
}