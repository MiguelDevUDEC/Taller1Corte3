//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2; // eliminar el elemento en la posición 2 (índice 1)

    for (int i = pos - 1; i < n - 1; i++) {
        v[i] = v[i + 1];
    }
    n--;

    cout << "7.11 -> Vector sin elemento en pos " << pos << ": ";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
