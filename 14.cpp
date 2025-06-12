//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int N = 100;
    int vector[N];
    int suma = 0;

    
    for (int i = 0; i < N; ++i) {
    	system("cls");
    	cout << "Ingrese "<<i+1<<" numeros enteros:";
        cin >> vector[i];
        suma += vector[i];
    }

    double media = static_cast<double>(suma) / N;
	system("cls");
    cout << "Los valores almacenados son:\n";
    for (int i = 0; i < N; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;

    cout << "Suma total: " << suma << endl;
    cout << "Media aritmética: " << media << endl;

	return 0;
}
