//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main(){
    int matriz[10][10];
    int numero=1;

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            matriz[i][j]=numero*numero;
            numero++;
        }
    }
    cout<<"Matriz de cuadrados del 1 al 100:"<<endl;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
