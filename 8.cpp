//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
    float t[50],nueva[50];
    int k;
    cout<<"ingrese 50 numeros reales distintos de 0:";	//numeros positivos o negativos,el numero que escoja dividira todo
    for (int i=0;i<50;i++){
        cin>>t[i];
        if (t[i]==0){
            cout<<"numero invalido."<<endl;
        }
    }
    cout<<"ingrese la posicion de la variable k entre (0 y 49)";  // Se pide la posicion k (entre 0 y 49) que se usara para dividir
    cin>>k;

    for (int j=0;j<50;j++){  // dividiendo cada elemento de t por t[k]
        nueva[j]=t[j]/t[k]; //Cada nuevo valor es el resultado de t[j] dividido entre t[k]
    }
    cout << "Nuevo vector:" << endl; //se imprime el nuevo vector
    for (int i=0;i<50;i++) {
        cout<<"nuevo["<<i<<"]="<<nueva[i]<<endl;
    }

    return 0;
}