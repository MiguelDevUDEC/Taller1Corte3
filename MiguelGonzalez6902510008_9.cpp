//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    int n=0, k=0, x=0;

    cout << "Ingrese la cantidad de elementos de la lista: ";
    cin >> n;



    if (n <= 0) {
        cout << "Cantidad inválida." << endl;
        return 1;
    }

    int lista [n]; // memoria dinámica

    //Se llenara automaticamente la matriz con numeros desde 1 hasta n
    cout<<"Se llenara automaticamente la matriz con numeros desde 1 hasta n" << endl;
    for (int i = 0, number=0; i < n; i++) {
        lista[i] = number++;
    }




    cout << "Ingrese la posición k (comenzando desde 0): ";
    cin >> k;

    if (k >= 1 && k < n){
        cout << "Ingrese el valor de x    " << endl;
        cin >> x;
        lista[k] = x;
        cout << "Valor cambiado "  << endl;
        }
    else{
        cout << "Posición fuera de rango." << endl;
    }

    cout<<"Valores del vector: "<<endl;
    for (int i = 0; i < n; ++i){
      cout << lista[i] << endl;
      }

    return 0;
}