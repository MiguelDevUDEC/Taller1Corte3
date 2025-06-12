//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int MAX = 100;
    double valores[MAX];
    int cantidad = 0;
    double entrada;

    

    while (cantidad < MAX) {
    	system("cls");
    	cout << "   Ingrese valores numericos (finalice con -99)";
    	cout<<endl<<"Ingrese el valor #"<<cantidad+1<<": ";
        cin >> entrada;
        if (entrada == -99) break;
        valores[cantidad] = entrada;
        cantidad++;
    }

    if (cantidad == 0) {
    	system("cls");
        cout << "No se ingresaron valores." << endl;
        return 0;
    }

    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += valores[i];
    }
    double media = suma / cantidad;
	system("cls");
    cout << "\nCantidad de valores leidos: " << cantidad << endl;
    cout << "Suma: " << suma << endl;
    cout << "Media: " << media << endl;

    cout << "\nValor\tDesviacion respecto a la media\n";
    for (int i = 0; i < cantidad; i++) {
        cout << valores[i] << "\t" << (valores[i] - media) << endl;
    }

    return 0;
}
