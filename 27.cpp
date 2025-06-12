//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    float numeros[100];
    int cantidad = 0;
    float numero, suma = 0, media;

    // LEER DATOS
    cout << "Introduce los valores (-99 para finalizar): ";

    while (true) {
        cout << "Numero #" << (cantidad + 1) << ": ";
        cin >> numero;

        if (numero == -99) {
            break;
        }

        numeros[cantidad] = numero;
        suma += numero;
        cantidad++;
    }

    if (cantidad == 0) {
        cout << "No se ingresaron valores validos." << endl;
        return 0;
    }

    // CALCULAR MEDIA
    media = suma / cantidad;

    // RESULTADOS
    cout << "Cantidad de valores leidos: " << cantidad << endl;
    cout << "Suma de los valores: " << suma << endl;
    cout << "Media de los valores: " << media << endl;

    // MOSTRAR TABLA DE DESVIACIONES
    cout << "\nValor\tDesviacion respecto a la media\n";
    for (int i = 0; i < cantidad; i++) {
        float desviacion = numeros[i] - media;
        cout << numeros[i] << "\t" << desviacion << endl;
    }

    return 0;
}
