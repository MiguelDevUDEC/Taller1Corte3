//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;
int main (){
    int cant;
    float media=0,suma=0;
    cout<<"ingrese la cantidad de est: ";
    cin>>cant;
    string nombres[cant];
    float calif[cant];

    for (int i=0;i<cant;i++){
        cout<<"ingrese el nombre del estudiante # "<<i + 1<<" : ";
        cin>>nombres[i];
        cout<<"ingrese la calificacion obtenida en el examen: ";
        cin>>calif[i];
        suma+=calif[i];
    }
    media=suma/cant;


    cout<<"media del grupo: "<<media<<endl;
    for (int i=0;i<cant;i++) {
        float diferencia=calif[i]-media;
        cout<< nombres[i]<<" saco  "<< calif[i];
        cout <<"Diferencia con la media: "<<diferencia<<endl;
    }

    return 0;
}