//
// Created by Miguel on 11/06/2025.
//
#include <iostream>
using namespace std ;
int main (){
    float arreglo[100],media=0,numero=0,suma=0;
    for (int i = 0 ; i < 100 ; i++){
        cout<<"Ingrese el  #" <<i+1<<" elemento de la lista: " ;
        cin>> arreglo[i];
        suma+=arreglo[i];		//se suman los datos ingresados
    }
    cout<<"la suma de todos los elementos es "<<suma<<endl;

    media=suma/ 100;  //y se calcula el promedio
    cout<<"La media aritmetica es: "<<media<<endl;

    return 0;
}
