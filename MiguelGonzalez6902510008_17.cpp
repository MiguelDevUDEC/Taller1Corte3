//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int n=3,m=4;
    int tabla[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	system("cls");
        	cout<<"Ingresar valores de la tabla "<<n<<"x"<<m<<endl;
            cout<<endl << "Elemento [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
        }
    }
	system("cls");
    cout << "\nContenido de la tabla:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << tabla[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
