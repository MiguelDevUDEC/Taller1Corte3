//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    const int TOTAL_NUMEROS = 100;
    int numeros[TOTAL_NUMEROS];


    for (int i = 0; i < TOTAL_NUMEROS; i++) {
    	
    	system("cls");
    	cout << "=== BUSCAR VALOR MAXIMO ===" << endl;
    	cout << "Ingrese " << TOTAL_NUMEROS << " numeros enteros:" << endl;
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    int maximo = numeros[0];
    int posicion = 0;

    for (int i = 1; i < TOTAL_NUMEROS; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
            posicion = i;
        }
    }
	system("cls");
    cout << endl << "=== RESULTADO ===" << endl;
    cout << "Valor maximo: " << maximo << endl;
    cout << "Posicion en la tabla: " << (posicion + 1) << endl;
    cout << "indice del array: " << posicion << endl;

    return 0;
}
