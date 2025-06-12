//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int j = 0; j < 3; j++) {
        int temp = m[0][j];
        m[0][j] = m[2][j];
        m[2][j] = temp;
    }

    cout << "7.25 -> Matriz con primera y tercera fila intercambiadas:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}