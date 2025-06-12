//
// Created by Miguel on 11/06/2025.
//

/*
 1. Crear un array de 181 elementos del tipo bool
 2. menu de despegue, agregar asientos, eliminar
 3. Lista de espera
 */

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    int PLAZAS_DISPONIBLES = 180;
    int noFumadores = 1;
    int fumadores = 61;
    int plazaCancelar = 0;
    double timeRestante = 1;
    int option = 0, option2 = 0;
    bool plazas[181] = {false};

    while (PLAZAS_DISPONIBLES > 0 && timeRestante > .5) {
        cout << "**************************" << endl;
        cout << "1. Reservar asiento" << endl;
        cout << "2. Cancelar una reserva por asiento" << endl;
        cout << "3. Abrir lista de espera" << endl;
        cin >> option;
        switch (option) {
            case 1:
                option2 = 0;
                //system("cls");
                cout << "**************************" << endl;
                cout << "1. Reservar asiento No fumadores" << endl;
                cout << "2. Reservar asiento Fumadores" << endl;
                cin >> option2;
                if (option2 == 1 && noFumadores <= 60) {
                    //system("cls");
                    cout << "**************************" << endl;
                    if (plazas[noFumadores] == true) {
                        for (int i = 1; i <= 60; i++) {
                            if (plazas[i] == false) {
                                cout << "Plaza reservada en asiento no fumadores, # " << i << endl;
                                plazas[i] = true;
                                break;
                            }
                        }
                    } else {
                        cout << "Plaza reservada en asiento no fumadores, # " << noFumadores << endl;
                        plazas[noFumadores] = true;
                    }
                    noFumadores++;
                    cout << "Cuantas horas faltan para el despegue del avion (1 hora = 1, 1/2 hora = 0.5): ";
                    cin >> timeRestante;
                } else if (option2 == 2 && fumadores <= 180) {
                    //system("cls");
                    cout << "**************************" << endl;
                    if (plazas[fumadores] == true) {
                        for (int i = 61; i <= 180; i++) {
                            if (plazas[i] == false) {
                                cout << "Plaza reservada en asiento fumadores, # " << i << endl;
                                plazas[i] = true;
                                break;
                            }
                        }
                    } else {
                        cout << "Plaza reservada en asiento  fumadores, # " << fumadores << endl;
                        plazas[fumadores] = true;
                    }

                    fumadores++;
                    cout << "Cuantas horas faltan para el despegue del avion (1 hora = 1, 1/2 hora = 0.5): ";
                    cin >> timeRestante;
                } else if (option2 <= 3) {
                    //system("cls");
                    cout << "**************************" << endl;
                    cout << "Opcion fuera del limite de opciones";
                } else {
                    //system("cls");
                    cout << "**************************" << endl;
                    cout << "Limite de plazas donde quieres reservar alcanzado" << endl;
                }
                break;
            case 2:
                option2 = 0, plazaCancelar = 0;
                //system("cls");
                cout << "**************************" << endl;
                cout << "1. Cancelar Reserva asiento No fumadores";
                cout << "2. Cancelar Reserva asiento Fumadores";
                cin >> option2;
                if (option2 == 1 && noFumadores > 0) {
                    //system("cls");
                    cout << "**************************" << endl;
                    cout << "Ingrese el numero del asiento que desea cancelar: ";
                    cin >> plazaCancelar;
                    if (plazas[plazaCancelar] == true && plazaCancelar <= 60) {
                        //system("cls");
                        plazas[plazaCancelar] = false;
                        cout << "**************************" << endl;
                        noFumadores--;
                        cout << "Asiento " << plazaCancelar << " Cancelado con exito, ahora esta libre " << endl;
                        cout << "Cuantas horas faltan para el despegue del avion (1 hora = 1, 1/2 hora = 0.5): ";
                        cin >> timeRestante;
                    } else {
                        //system("cls");
                        cout << "**************************" << endl;
                        cout << "No puede cancelar esta reserva" << endl;
                    }
                } else if (option2 == 2 && fumadores > 61) {
                    //system("cls");
                    cout << "**************************" << endl;
                    cout << "Ingrese el numero del asiento que desea cancelar: " << endl;
                    cin >> plazaCancelar;
                    if (plazas[plazaCancelar] == true && (plazaCancelar >= 61 && plazaCancelar <= 180)) {
                        //system("cls");
                        plazas[plazaCancelar] = false;
                        cout << "**************************" << endl;
                        fumadores--;
                        cout << "Asiento " << plazaCancelar << " Cancelado con exito, ahora esta libre " << endl;
                        cout << "Cuantas horas faltan para el despegue del avion (1 hora = 1, 1/2 hora = 0.5): ";
                        cin >> timeRestante;
                    } else {
                        //system("cls");
                        cout << "**************************" << endl;
                        cout << "No puede cancelar esta reserva" << endl;
                    }
                } else {
                    //system("cls");
                    cout << "**************************" << endl;
                    cout << "Opcion invalida" << endl;
                }
                break;

            case 3:
                timeRestante = 0;
                //system("cls");
                cout << "**************************" << endl;
                cout << "Cuantas horas faltan para el despegue del avion (1 hora = 1, 1/2 hora = 0.5): ";
                cin >> timeRestante;
                break;
        }
    }

    cout<< "El avion paso a la fase de espera, acontinuacion se informaran los asientos que estan en lista de espera" << endl;
    for (int i = 1; i <= 180; i++) {
        if (plazas[i] == true) {
            cout << "La plaza # "<< i << " Esta en lista de espera" << endl;
        }
    }


    return 0;
}
