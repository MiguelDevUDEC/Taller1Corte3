//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int plazas[300]={0};
    int opcion;
    int despegue=0;
    while (despegue == 0) {
        cout<<"----MENU DE RESERVAS----"<<endl;
        cout<<"1)Reservar plaza"<<endl;
        cout<<"2) Cancelar reserva"<<endl;
        cout<<"3) Ver estado de plazas"<<endl;
        cout<<"4) Despegar (cerrar reservas)"<<endl;
        cout<<"Ingrese una opcion: "<<endl;
        cin>>opcion;

        if (opcion==1) {
            int tipo;
            cout<<"�Desea plaza en zona de: 1) Fumadores (1-100) o 2) No fumadores (101-300)? ";
            cin>>tipo;

            int i=0;
            int reservado=0;

            if (tipo==1) {
                i=0;
                while (i<100 && reservado==0) {
                    if (plazas[i]==0) {
                        plazas[i]=1;
                        cout<<"Plaza"<<( i+ 1)<<"reservada."<<endl;
                       reservado=1;
                    }
                    i++;
                }
            } else if (tipo==2) {
                i=100;
                while (i<300 && reservado==0) {
                    if (plazas[i]==0) {
                        plazas[i]=1;
                        cout<<"Plaza "<<(i+1)<<"reservada."<<endl;
                        reservado=1;
                    }
                    i++;
                }
            }

            if (reservado==0) {
                cout<<"No hay plazas disponibles en esa zona.";
            }

        } else if (opcion==2) {
            int numero;
            cout<<"Ingrese el numero de plaza a cancelar (1-300): ";
            cin >> numero;

            if (numero>=1 && numero<= 300) {
                if (plazas[numero-1]==1) {
                    plazas[numero-1]=0;
                    cout<<"Plaza"<<numero<<"cancelada.";
                } else {
                    cout<<"Esa plaza no estaba reservada."<<endl;
                }
            } else {
                cout<<"numero de plaza invalido."<<endl;
            }

        } else if (opcion == 3) {
            int libres = 0;
            int i = 0;
            while (i < 300) {
                if (plazas[i] == 0) {
                    libres++;
                }
                i++;
            }
            cout<<"Plazas libres: "<<libres<<endl;
            cout<<"Plazas ocupadas: "<<(300-libres)<<endl;

        } else if (opcion==4) {
            despegue=1;
            cout<<"El avion va a despegar. Reservas cerradas."<<endl;
        } else {
            cout<<"Opcion invalida."<<endl;
        }
        int ocupadas=0;
        int i=0;
        while (i<300) {
            if (plazas[i]==1) {
                ocupadas++;
            }
            i++;
        }
        if (ocupadas==300) {
            cout<<"�El avion esta lleno! Reservas cerradas.";
            despegue=1;
        }
    }

    return 0;
}
