//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int n, k;

    cout << "Ingrese la cantidad de elementos de la lista: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad inválida." << endl;
        return 1;
    }

    int* lista = new int[n]; // memoria dinámica
    
    for (int i = 0; i < n; ++i){
		system("cls");
    	cout << "Ingrese los " << n << " valores:";
        cin >> lista[i];
	}
	system("cls");
    cout << "Ingrese la posición k (comenzando desde 1): ";
    cin >> k;
	system("cls");
    if (k >= 1 && k <= n)
        cout << "El valor en la posición " << k << " es: " << lista[k - 1] << endl;
    else
        cout << "Posición fuera de rango." << endl;

    delete[] lista; // liberar memoria
	return 0;
}
