//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
     int TAM = 10;
    int vector[TAM];
    int suma = 0;
    float media;


    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
        suma += vector[i];
    }


    media = (float)suma / TAM;


    cout << "\nLa suma total de los elementos es: " << suma << endl;
    cout << "La media aritmetica es: " << media << endl;

    return 0;
}