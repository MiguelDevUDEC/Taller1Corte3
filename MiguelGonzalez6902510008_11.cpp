//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;
int main() {
    int estudiantes;
    float sumaMedias = 0;

    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>estudiantes;

    for (int i= 0; i < estudiantes; i++) {
        float sumaNotasPorCreditos = 0;
        int sumaCreditos = 0;
        int faltas = 0;

        cout << "Estudiante #" << (i + 1) << endl;

        for (int j = 0; j < 8; j++) {
            char presento;

            cout << "�Presento el examen de la asignatura #" << (j + 1) << "? (s/n): ";
            cin >> presento;

            if (presento == 's' || presento == 'S') {
                float nota;
                int creditos;

                cout << "Nota asignatura #" << (j + 1) << ": ";
                cin >> nota;
                cout << "Cr�ditos: ";
                cin >> creditos;

                sumaNotasPorCreditos += nota * creditos;
                sumaCreditos += creditos;
            } else {
                cout<<"El estudiante NO presento el examen de la asignatura #" << (j + 1) << endl;
                faltas++;
            }
        }

        if (sumaCreditos > 0) {
            float mediaEst=sumaNotasPorCreditos/sumaCreditos;
            cout<<"Promedio estudiante #"<<(i + 1)<< ": "<<mediaEst<<endl;
            sumaMedias+=mediaEst;
        } else {
            cout<<"El estudiante #"<<(i + 1)<<"no tiene notas registradas."<<endl;
        }

        float porcentajeFaltas = (faltas / 8.0) * 100;
        cout << "Porcentaje de asignaturas no presentadas: " << porcentajeFaltas << "%" << endl;
    }

    float mediaSalon = sumaMedias / estudiantes;
    cout << "Promedio general del sal�n: " << mediaSalon << endl;

    return 0;
}
