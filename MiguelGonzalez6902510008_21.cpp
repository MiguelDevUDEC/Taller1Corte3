//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;
int main (){
	
	int al=10;
	float suma,media;
	int ventas[al];
	
	cout<<"Ingrese las ventas mensuales de los "<<al<<" almacenes: "<<endl;
	
	for (int i=0;i<al;i++){
		
		cout<<endl<<"almacen "<< i+1<<": ";
		cin>>ventas[i];
		suma+=ventas[i];
	}
	media=suma/al;
	system("cls");
	cout<<endl<<"la media de ventas es : "<<media<<endl;
	cout<<endl<<"Almacenes con ventas mayores a la media: "<<endl;
    for (int i= 0;i< al; i++) {
        if (ventas[i]>media) {
            cout<<"Almacen "<<(i + 1)<<": "<<ventas[i]<<endl;
        }
    }

    return 0;
}
