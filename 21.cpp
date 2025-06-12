//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    const int NUM_ALMACENES = 10;
    double ventas[NUM_ALMACENES];
    double sumaVentas = 0.0;

    cout << "=== CONTROL DE VENTAS DE ALMACENES ===" << endl;
    cout << "Ingrese las ventas del almacen:" << endl << endl;

    // Leer ventas de cada almacen
    for (int i = 0; i < NUM_ALMACENES; i++) {
        cout << "Almacen " << (i + 1) << ": ";
        cin >> ventas[i];
        sumaVentas += ventas[i];
    }

    // Calcular media de ventas
    double mediaVentas = sumaVentas / NUM_ALMACENES;

    cout << endl << "=== RESULTADOS ===" << endl;
    cout << "Media de ventas: " << mediaVentas << endl << endl;

    // Mostrar almacenes con ventas superiores a la media
    cout << "Almacenes con ventas superiores a la media:" << endl;
    bool hayAlmacenes = false;

    for (int i = 0; i < NUM_ALMACENES; i++) {
        if (ventas[i] > mediaVentas) {
            cout << "- Almacen " << (i + 1) << ": " << ventas[i] << endl;
            hayAlmacenes = true;
        }
    }

    if (hayAlmacenes) {
        cout << "Ningun almacen supera la media." << endl;
    }

    cout << endl << "=== RESUMEN COMPLETO ===" << endl;
    for (int i = 0; i < NUM_ALMACENES; i++) {
        cout << "Almacen " << (i + 1) << ": " << ventas[i];
        if (ventas[i] > mediaVentas) {
            cout << " (Superior a la media)";
        }
        cout << endl;
    }

    return 0;
}