//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int A[] = {10, 20, 30, 40, 50};
    int B[5];

    for (int i = 0; i < 5; i++) {
        B[i] = A[i];
    }

    cout << "7.12 -> Copia: ";
    for (int i = 0; i < 5; i++) cout << B[i] << " ";
    cout << endl;
    return 0;
}
