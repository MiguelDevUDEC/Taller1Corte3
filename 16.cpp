//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	
	int n,sumaP=0,sumaI=0;
	
	cout<<"ingrese el tamanio de la lista : ";
	cin>>n;
	
	int L[n];
	
	for (int i=0;i<n;i++){
		system("cls");
		cout<<"ingrese el elemento "<<i<<": ";
		cin>>L[i];
	 
		if (L[i]%2==0){
			
			sumaP+=L[i];
			
		} else {
			
			sumaI+=L[i];
			
		}
	}
	system("cls");
	cout<<"La suma de los numeros pares es: "<<sumaP<<endl;
	cout<<"La suma de los numeros impares es: "<<sumaI<<endl;
	return 0;

	
}
