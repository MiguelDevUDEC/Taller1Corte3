//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int numAlumnos;

    cout << "=== ANALISIS DE ESTATURAS DE CLASE ===" << endl;
    cout << "Cuantos alumnos hay en la clase ";
    cin >> numAlumnos;

    double estaturas[numAlumnos];
    double sumaEstaturas = 0;

    cout << "\nIngrese las estaturas (en metros):" << endl;

    // estaturas y calcular suma
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Alumno " << (i + 1) << ": ";
        cin >> estaturas[i];
        sumaEstaturas += estaturas[i];
    }

    // Calcular media
    double mediaEstatura = sumaEstaturas / numAlumnos;

    // Contar alumnos por encima y por debajo de la media
    int masAltos = 0;
    int masBajos = 0;
    int iguales = 0;

    for (int i = 0; i < numAlumnos; i++) {
        if (estaturas[i] > mediaEstatura) {
            masAltos++;
        } else if (estaturas[i] < mediaEstatura) {
            masBajos++;
        } else {
            iguales++;
        }
    }

    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Media de estaturas: " << mediaEstatura << " metros" << endl;
    cout << "Alumnos mas altos que la media: " << masAltos << endl;
    cout << "Alumnos mas bajos que la media: " << masBajos << endl;
    cout << "Alumnos con estatura igual a la media: " << iguales << endl;

    cout << "\n=== DETALLE POR ALUMNO ===" << endl;
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Alumno " << (i + 1) << ": " << estaturas[i] << "m ";

        if (estaturas[i] > mediaEstatura) {
            cout << "(Mas alto)";
        } else if (estaturas[i] < mediaEstatura) {
            cout << "(Mas bajo)";
        } else {
            cout << "(Igual a la media)";
        }
        cout << endl;
    }

    return 0;
}
