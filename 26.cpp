//
// Created by Miguel on 11/06/2025.
//

#include<stdlib.h>
#include <iostream>
using namespace std;
int main (){
    int cant;
    float media=0,suma=0;
    cout<<"ingrese la cantidad de estudiantes: ";
    cin>>cant;
    string nombres[cant];
    float calif[cant];

    for (int i=0;i<cant;i++){
    	
    	system("cls");
        cout<<endl<<"ingrese el nombre del estudiante # "<<i + 1<<" : ";
        cin>>nombres[i];
        cout<<"ingrese la calificacion obtenida en el examen: ";
        cin>>calif[i];
        suma+=calif[i];
    }
    media=suma/cant;

	system("cls");

    cout<<"media del grupo: "<<media<<endl;
    for (int i=0;i<cant;i++) {
        float diferencia=calif[i]-media;
        cout<<endl<< nombres[i]<<" saco  "<< calif[i];
        cout<<endl<<"Diferencia con la media: "<<diferencia<<endl;
    }

    return 0;
}
