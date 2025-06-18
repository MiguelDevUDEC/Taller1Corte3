//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD

using namespace std;
int main (){
    int matriz[4][4];
    int suma=0;
    cout<<"ingrese 16 elementos"<<endl;
    for(int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout<<"elemento["<< i <<"]["<< j <<"]"<<endl;
            cin>>matriz[i][j];}
    }

    for(int i=0;i<4;i++){
        suma+=matriz[i][i];
    }

    cout<<" la suma total de la diagonal principal es:"<<suma<<endl;
}
