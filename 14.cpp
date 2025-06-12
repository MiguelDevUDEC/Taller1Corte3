//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n / 2; i++) {
        int tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }

    cout << "7.13 -> Invertido: ";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
