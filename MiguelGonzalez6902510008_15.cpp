//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;
	
	if(N==0){
		system("cls");
		cout<<"La cantidad de elementos debe ser mayor a 0";
		cout << "Ingrese la cantidad de elementos de nuevo: ";
    	cin >> N;
	}
	
    int L[N];  

    
    for (int i = 0; i < N; i++) {
    	system("cls");
    	cout << "Ingrese los " << i+1 << " elementos:";
        cin >> L[i];
    }

    int mayor = L[0];

    for (int i = 1; i < N; i++) {
        if (L[i] > mayor) {
            mayor = L[i];  
        }
    }

    cout << "El mayor valor es: " << mayor << endl;

    return 0;
}
