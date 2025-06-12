//
// Created by Miguel on 10/06/2025.
//

/*
    Una tabla y ver cuantos numeros son negativos y cuales
    1. Preguntar cuantos numeros
    2. Se le pasa la longitud del array y los valores
	3. por cada valor se verifica si es mayor que 0 y si es así se cuenta
	4. mostrar cuantos valores son positivos y cuales son
 */

#include <iostream>
using namespace std;

int main(){
  int size = 0, count =0;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];
    if(arr[i]>0){
      count++;
      cout<< endl << "Element is positive "<<arr[i]<<endl;
    }
  }
  cout<<endl<<"The number of positivos elements in the table is: "<<count;
  return 0;
  }