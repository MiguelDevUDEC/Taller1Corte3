//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n, m;
    cout << "Numero de filas: ";
    cin >> n;
    cout << "Numero de columnas: ";
    cin >> m;

    int tabla[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	system("cls");
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }

    int positivos = 0;
    int negativos = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tabla[i][j] > 0) {
                positivos++;
            } else if (tabla[i][j] < 0) {
                negativos++;
            }
        }
    }
	system("cls");
    cout << "\nElementos positivos: " << positivos << endl;
    cout << "Elementos negativos: " << negativos << endl;

    return 0;
}

