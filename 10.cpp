//
// Created by Miguel on 11/06/2025.
//

//LIBRERIAS
#include <iostream>
#include <cmath>

//ESPACIO DE TRABAJO STANDARD
using namespace std;
int main() {
    int fumadores = 0;
    int noFumadores = 0;
    char opcion;
    char confirmar;
    const int MAX_FUMADORES = 100;
    const int MAX_NOFUMADORES = 200;

    do {
        system("cls");

        cout << "===== RESERVA DE VUELO MADRID - CARACAS =====\n";
        cout << "a. Realizar reserva en zona de fumadores\n";
        cout << "b. Realizar reserva en zona de no fumadores\n";
        cout << "c. Anular una reserva\n";
        cout << "s. Salir del sistema\n";
        cout << "=============================================\n";
        cout << "Opcion: ";
        cin >> opcion;

        system("cls");

        if (opcion == 'a') {
            if (fumadores < MAX_FUMADORES) {
                fumadores++;
                cout << "Reserva en fumadores confirmada. Plaza #" << fumadores << endl;
            } else {
                cout << "No hay plazas disponibles en fumadores.\n";
            }
        } else if (opcion == 'b') {
            if (noFumadores < MAX_NOFUMADORES) {
                noFumadores++;
                cout << "Reserva en no fumadores confirmada. Plaza #" << (noFumadores + 100) << endl;
            } else {
                cout << "No hay plazas disponibles en no fumadores.\n";
            }
        } else if (opcion == 'c') {
            char tipo;
            cout << "¿Desea anular una reserva en zona (f) fumadores o (n) no fumadores?: ";
            cin >> tipo;
            if (tipo == 'f' && fumadores > 0) {
                fumadores--;
                cout << "Reserva anulada correctamente en fumadores.\n";
            } else if (tipo == 'n' && noFumadores > 0) {
                noFumadores--;
                cout << "Reserva anulada correctamente en no fumadores.\n";
            } else {
                cout << "No hay reservas para anular en esa zona.\n";
            }
        } else if (opcion == 's') {
            cout << "Saliendo del sistema...\n";
            break;
        } else {
            cout << "Opcion invalida. Intenta de nuevo.\n";
        }

        // Verificar si todas las plazas están llenas
        if (fumadores == MAX_FUMADORES && noFumadores == MAX_NOFUMADORES) {
            cout << "\nTodas las plazas han sido reservadas. Cerrando reservas...\n";
            break;
        }

        // Confirmar si desea continuar
        cout << "\nDesea volver al menu principal? (s/n): ";
        cin >> confirmar;

    } while (confirmar == 's');

    return 0;
}