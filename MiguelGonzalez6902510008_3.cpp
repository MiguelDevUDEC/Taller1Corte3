//
// Created by Miguel on 11/06/2025.
//

/*
 Rellenar una matriz indentidad 4x4
 Nota: Debido a la poca expecificaiones del ejercicio, le preguntaremos al usuario si quiere ingresar los numeros o quiere que se generen de manera aleatoria con numeros dentro del rango 1 - 16
 */

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){

    int size=4, option=0;
    int arr[size][size];

    cout<<
          "1. Enter for yourself the values."
       << endl << "2. Generate random numbers in the range 0 to 16, with 16 elements" << endl;
    cin>>option;

    switch(option){
      case 1:
        for(int i=0;i<size;i++){
          for(int j=0;j<size;j++) {
            cout<<endl<<"Enter the element of the array: ";
            cin>>arr[i][j];
          }
        }
        break;

       case 2:
          srand(time(NULL));
         for(int i=0;i<size;i++){
          for(int j=0;j<size;j++) {
            arr[i][j]=rand()%17;
          }
         }
         break;
         default:
           cout<<"Invalid option"<<endl;
           break;
    }

    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++) {

      cout<<arr[i][j] << " ";
      }
      cout<<endl;
    }

    return 0;

  }
