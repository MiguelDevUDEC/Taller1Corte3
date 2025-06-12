//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    const int MAX = 100;
    int vec[MAX];
    int N, x, k;

    // Leer el tamaño del vector
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> N;

    // Leer el contenido del vector original
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    // Leer el valor a insertar y la posicion
    cout << "Ingrese el valor que desea insertar: ";
    cin >> x;

    cout << "Ingrese la posicion (1 a " << N + 1 << ") en la que desea insertar: ";
    cin >> k;

    // Validar la posicion
    if (k < 1 || k > N + 1) {
        cout << "Posicion no valida." << endl;
        return 0;
    }

    // Mover elementos hacia la derecha desde la posicion k-1
    for (int i = N; i >= k; i--) {
        vec[i] = vec[i - 1];
    }

    // Insertar el valor x en la posicion deseada
    vec[k - 1] = x;
    N++; // aumentar el tamaño lógico del vector

    // Mostrar el vector resultante
    cout << "Vector resultante: ";
    for (int i = 0; i < N; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}