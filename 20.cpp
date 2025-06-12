//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ALUMNOS = 40;
    vector<double> mediasAlumnos(NUM_ALUMNOS);
    double sumaClase = 0.0;

    cout << "=== CALCULO DE MEDIAS ===" << endl;
    cout << "Ingrese las notas de cada alumno (termine con -1)" << endl << endl;

    for (int i = 0; i < NUM_ALUMNOS; i++) {
        cout << "Alumno " << (i + 1) << ":" << endl;

        double nota, sumaAlumno = 0.0;
        int contadorNotas = 0;

        cout << "Ingrese notas (termine con -1): ";

        // lee notas
        while (cin >> nota && nota != -1) {
            sumaAlumno += nota;
            contadorNotas++;
        }

        // calcular media
        if (contadorNotas > 0) {
            mediasAlumnos[i] = sumaAlumno / contadorNotas;
            sumaClase += mediasAlumnos[i];
            cout << "Media del alumno " << (i + 1) << ": " << mediasAlumnos[i] << endl;
        } else {
            mediasAlumnos[i] = 0.0;
            cout << "No se ingresaron notas para el alumno " << (i + 1) << endl;
        }
        cout << endl;
    }

    // mostrar media
    double mediaClase = sumaClase / NUM_ALUMNOS;

    cout << "=== RESULTADOS ===" << endl;
    cout << "Media de la clase: " << mediaClase << endl << endl;

    cout << "Resumen por alumno:" << endl;
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        cout << "Alumno " << (i + 1) << ": " << mediasAlumnos[i] << endl;
    }

    return 0;
}