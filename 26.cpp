//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int m[2][2] = {{1,2},{3,4}};
    int escalar = 3;

    cout << "7.26 -> Matriz resultante:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << m[i][j] * escalar << " ";
        }
        cout << endl;
    }
    return 0;
}