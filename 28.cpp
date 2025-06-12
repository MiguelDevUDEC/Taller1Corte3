//
// Created by Miguel on 11/06/2025.
//
//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    const int N = 5; // Número de nombres en la lista
    string alumnos[N] = {"Ana", "Carlos", "Luis", "Maria", "Pedro"};
    string nombreBuscado;
    bool encontrado = false;

    // Leer nombre a buscar
    cout << "Ingrese el nombre del alumno a buscar: ";
    cin >> nombreBuscado;

    // Buscar en el arreglo
    for (int i = 0; i < N; i++) {
        if (alumnos[i] == nombreBuscado) {
            encontrado = true;
            break; // Si lo encuentra, sale del ciclo
        }
    }

    // Mostrar resultado
    if (encontrado) {
        cout << "El alumno " << nombreBuscado << " SI se encuentra en la lista." << endl;
    } else {
        cout << "El alumno " << nombreBuscado << " NO se encuentra en la lista." << endl;
    }

    return 0;
}
