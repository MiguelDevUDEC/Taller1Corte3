//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int N = 100;
    int vector[100];
    int suma = 0;

    cout << "Ingrese 100 numeros enteros:\n";
    for (int i = 0; i < N; ++i) {
        cin >> vector[i];
        suma += vector[i];
    }

    double media = static_cast<double>(suma) / N;

    cout << "Los valores almacenados son:\n";
    for (int i = 0; i < N; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;

    cout << "Suma total: " << suma << endl;
    cout << "Media aritmética: " << media << endl;

    return 0;
}
