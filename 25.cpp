//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main (){
	
	float media,suma;
    int matriz[30][5];
	int cantidad[30];
	
	for(int i=0;i<30;i++){
		
		cout<<endl<<"Estudiante #"<<i+1<<endl;
		
		cout<<endl<<"ingrese la cantidad de notas que tiene (minimo 2 maximo 5 ): ";
		cin>>cantidad[i];
		
        while (cantidad[i]<2||cantidad[i]>5) {
        	
            cout<<endl<<"Cantidad invalida. Intente nuevamente: ";
            cin>>cantidad[i];}
			suma=0;
			
			
		for (int j=0;j<cantidad[i];j++){
			
			cout<<endl<<"ingrese las notas que tiene en la asignatura "<<j + 1 << ": ";
			cin>>matriz[i][j];
			suma+=matriz[i][j];
			
		}
		
		cout<<endl<< "Notas del estudiante #" << i + 1 << ": "<<endl;
		
        for (int j=0;j<cantidad[i];j++) {
            cout<<endl<<"* "<< matriz[i][j]<<endl;
        }
        cout << endl;
		
		media=suma/cantidad[i];
		cout<<"la media del alumno #"<<i + 1<< " es : "<<media<<endl;
}

	return 0;



}
