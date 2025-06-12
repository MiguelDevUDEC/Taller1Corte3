//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3}, B[] = {4, 5, 6};
    int producto = 0;

    for (int i = 0; i < 3; i++) {
        producto += A[i] * B[i];
    }

    cout << "7.15 -> Producto escalar: " << producto << endl;
    return 0;
}