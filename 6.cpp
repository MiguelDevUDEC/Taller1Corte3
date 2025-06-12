//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    const int TAM = 60;
    int vector[TAM];
    int positivos = 0, negativos = 0, ceros = 0;


    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];


        if (vector[i] > 0) {
            positivos++;
        } else if (vector[i] < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }


    cout << "\nCantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;

    return 0;
}