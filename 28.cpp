//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include <string>

using namespace std;
int main() {
   	int size;
    size = 5;
    string alumnos[size] =  {"Ana", "Carlos", "Luis", "Maria", "Pedro"};
    string nombreBuscado;
    bool encontrado = false;

   
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
        cout<<endl<< "El alumno " << nombreBuscado << " SI se encuentra en la lista." << endl;
    } else {
        cout<<endl<< "El alumno " << nombreBuscado << " NO se encuentra en la lista." << endl;
    }

    return 0;
}
