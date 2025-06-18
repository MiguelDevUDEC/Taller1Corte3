//
// Created by Miguel on 10/06/2025.
//Miguel Gonzalez 6902510008
//

/*
    1. Tenemos 2 variables del tipo int i & j, luego tenemos un array[10]
    2. i=1
    3. j=2
    4.  A[I] ← J
    5. A[J] ← I
    6. A[J+I] ← I + J
    7. I ← A[I] + A[J]
    8. A[3] ← 5
    9. J ← A[I] - A[J]
    10. Mostrar los valores de i & j
 */

#include <iostream>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main(){
    int i, j;
    int a[11];
    i = 1;
    j = 2;

    a[i] = j;
    a[j] = i;
    a[j+i] = i + j;

    i = a[i] + a[j];
    a[3] = 5;

    j= a[i] - a[j];

    cout << "El valor final de I es: " << i << endl;
    cout << "El valor final de J es: " << j << endl;


    	return 0;
}

