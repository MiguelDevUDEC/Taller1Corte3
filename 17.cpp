//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int tabla[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }

    cout << "\nContenido de la tabla:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}