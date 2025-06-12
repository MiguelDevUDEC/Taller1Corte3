//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
using namespace std;

int main() {
	
	int alu=40;
    float sumasalon = 0;
    float notas[alu][alu];         
	int  cantidad[alu];

    
    for (int i=0;i<alu;i++) {
    	
        float sumaindv=0; 
		    
	    cout<<endl<<"Ingrese la cantidad de notas que tiene en la asignatura: ";
	    cin>>cantidad[i];
        cout<<endl<<"estudiante "<<i+1<<":"<<endl;
        
        for (int j=0;j<cantidad[i];j++) {
            cout<<endl<<"Ingrese la nota "<<j+1<<": ";
            cin>>notas[i][j];
            sumaindv+=notas[i][j];
        }

        float mediaindv=sumaindv/cantidad[i];
        
        cout<<endl<<"La media del estudiante es: "<<mediaindv<<endl;

        sumasalon+=mediaindv;  
    }

    float mediagrupal=sumasalon/alu;
    
    cout<<endl<<"La media de la clase es: "<<mediagrupal<<endl;

    return 0;
}
