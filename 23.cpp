//
// Created by Miguel on 11/06/2025.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL_PLAZAS = 180;
    const int PLAZAS_NO_FUMADOR = 60;
    const int PLAZAS_FUMADOR = 120;

    bool plazas[TOTAL_PLAZAS + 1] = {false};
    int reservasNoFumador = 0;
    int reservasFumador = 0;

    cout << "=== SISTEMA DE RESERVAS DE AVION ===" << endl;
    cout << "Plazas disponibles:" << endl;
    cout << "- No fumador: 1 a 60 (" << PLAZAS_NO_FUMADOR << " plazas)" << endl;
    cout << "- Fumador: 61 a 180 (" << PLAZAS_FUMADOR << " plazas)" << endl;
    cout << "Comandos: 'reservar', 'estado', 'cerrar', 'salir'" << endl << endl;

    string comando;
    bool sistemaAbierto = true;

    while (sistemaAbierto) {
        cout << "Ingrese comando: ";
        cin >> comando;

        if (comando == "reservar") {
            char tipoSeccion;
            cout << "Seccion (n=no fumador, f=fumador): ";
            cin >> tipoSeccion;

            if (tipoSeccion == 'n' || tipoSeccion == 'N') {
                int plazaAsignada = 0;
                for (int i = 1; i <= 60; i++) {
                    if (!plazas[i]) {
                        plazas[i] = true;
                        plazaAsignada = i;
                        reservasNoFumador++;
                        break;
                    }
                }

                if (plazaAsignada > 0) {
                    cout << "Plaza asignada: " << plazaAsignada << " (No fumador)" << endl;
                } else {
                    cout << "No hay plazas disponibles en seccion no fumador" << endl;
                }

            } else if (tipoSeccion == 'f' || tipoSeccion == 'F') {

                int plazaAsignada = 0;
                for (int i = 61; i <= 180; i++) {
                    if (!plazas[i]) {
                        plazas[i] = true;
                        plazaAsignada = i;
                        reservasFumador++;
                        break;
                    }
                }

                if (plazaAsignada > 0) {
                    cout << "Plaza asignada: " << plazaAsignada << " (Fumador)" << endl;
                } else {
                    cout << "No hay plazas disponibles en seccion fumador" << endl;
                }
            } else {
                cout << "Seccion invalida. Use 'n' para no fumador o 'f' para fumador" << endl;
            }

        } else if (comando == "estado") {
            cout << "\n=== ESTADO ACTUAL ===" << endl;
            cout << "No fumador: " << reservasNoFumador << "/" << PLAZAS_NO_FUMADOR << " ocupadas" << endl;
            cout << "Fumador: " << reservasFumador << "/" << PLAZAS_FUMADOR << " ocupadas" << endl;
            cout << "Total: " << (reservasNoFumador + reservasFumador) << "/" << TOTAL_PLAZAS << " ocupadas" << endl;
            cout << "Plazas disponibles: " << (TOTAL_PLAZAS - reservasNoFumador - reservasFumador) << endl << endl;

        } else if (comando == "cerrar") {
            cout << "\n=== CERRANDO RESERVAS ===" << endl;
            cout << "El sistema se cierra 30 minutos antes de la salida." << endl;
            cout << "Se abre la lista de espera para plazas no confirmadas." << endl;
            sistemaAbierto = false;

        } else if (comando == "salir") {
            sistemaAbierto = false;

        } else {
            cout << "Comando no reconocido. Use: reservar, estado, cerrar, salir" << endl;
        }


        if (reservasNoFumador + reservasFumador == TOTAL_PLAZAS) {
            cout << "\n¡el avion esta completo! Todas las plazas han sido reservadas." << endl;
            cout << "Se abre automaticamente la lista de espera." << endl;
            sistemaAbierto = false;
        }
    }

    cout << "\n=== RESUMEN FINAL ===" << endl;
    cout << "Reservas finalizadas:" << endl;
    cout << "- No fumador: " << reservasNoFumador << "/" << PLAZAS_NO_FUMADOR << endl;
    cout << "- Fumador: " << reservasFumador << "/" << PLAZAS_FUMADOR << endl;
    cout << "- Total: " << (reservasNoFumador + reservasFumador) << "/" << TOTAL_PLAZAS << endl;

    return 0;
}
