//
// Created by Miguel on 12/06/2025.
//

#include <iostream>
using namespace std;

int main() {
    char categoria;
    int plazaF = 61;
    int plazaN = 1;
    bool listaEspera = false;

    while (!listaEspera) {
        cout << "Ingrese categoria de reserva (F para fumador, N para no fumador): ";
        cin >> categoria;

        if (categoria == 'F' || categoria == 'f') {
            if (plazaF <= 180) {
                cout << "Plaza asignada: " << plazaF << " (Fumador)" << endl;
                plazaF++;
            } else {
                cout << "Plazas fumador agotadas." << endl;
            }
        } else if (categoria == 'N' || categoria == 'n') {
            if (plazaN <= 60) {
                cout << "Plaza asignada: " << plazaN << " (No fumador)" << endl;
                plazaN++;
            } else {
                cout << "Plazas no fumador agotadas." << endl;
            }
        } else {
            cout << "Categoria invalida." << endl;
        }

        char seguir;
        cout << "Desea continuar? (s/n): ";
        cin >> seguir;

        if (seguir != 's' && seguir != 'S') {
            listaEspera = true;
            cout << "Lista de espera abierta." << endl;
        }
    }

    return 0;
}