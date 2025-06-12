//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
    float temperatura=0.0,suma=0,temMax=0,media=0;
    int cantidad =0;

    cout<<"ingrese la cantidad de temperaturas"<<endl;
    cin>>cantidad;
    float arreglo[cantidad];
    for(int i=0;i<cantidad;i++){
        cout<<"ingrese las temperaturas:" <<endl;
        cin>>arreglo[i];
        suma+=arreglo[i];
    }
    media=suma/cantidad;

    cout<<"la media de las temperaturas es:"<<media<<endl;
    for (int i=0;i<cantidad;i++) {
        if (arreglo[i]>media){
            cout<<"la temperatura "<<arreglo[i]<<" es mayor a la media"<<endl;
        }  if (arreglo[i]==media){
            cout<<"la temperatura "<<arreglo[i]<<"es igual a la media"<<endl;
        }
    }

    return 0;
}
