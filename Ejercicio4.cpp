//
// Created by Miguel on 11/06/2025.
//

/*
Leer una matriz de 3 por 3 elementos y calcular la suma de cada una de sus filas y columnas, dejando dichos resultados en dos vectores, uno de la suma de las filas y otro de las columnas.
    1. Crea una matrix 3X3
    2. Pregunta al usuario si quiere ingresar los numeros o los quiere random
    3. Suma las filas y  dejar la suma en un array
    4. Suma columnas y dejar la suma en vector
 */

#include <iostream>
using namespace std;

int main(){

  int sumFilas=0, sumCols=0;
  int filas[3], cols[3];

  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<  "Enter the element: ";
    cin>> arr[i][j];
    }
  }

  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      cout<< arr[i][j];
    }
    cout<<"\n";
  }

  for(int i=0;i<3;i++){
    sumFilas = 0;
    for(int j=0;j<3;j++){
      sumFilas += arr[i][j];
    }
    filas[i] = sumFilas;
  }
  for(int i=0;i<3;i++){
    sumCols = 0;
    for(int j=0;j<3;j++){
      sumCols += arr[j][i];
    }
    cols[i] = sumCols;
  }

  for (int i=0;i<3;i++) {
    cout<< "Sum fila " << i << " = " <<  filas[i];
    cout<< "\n";
    cout<< "sum cols " << i << " = " <<  cols[i] << endl;
  }

  return 0;
  }
