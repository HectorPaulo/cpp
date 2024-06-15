#include "paulo.h"
using namespace std;
int main() {
    int memoria, peso_del_so, nparticiones, memoria_ocupada;
    string programa;

    cout << "ASIGNACION DE MEMORIA" << endl;
    cout << endl;

    cout << "Inserte el tamano de la memoria: ";
    cin >> memoria;

    int memoria_inicial_total = memoria; 

    cout << "Con cuantas particiones gusta trabajar? ";
    cin >> nparticiones;
    cout << endl;

    cout << "Inserte el peso del sistema operativo: ";
    cin >> peso_del_so;
    cout << endl;

    memoria_ocupada += peso_del_so;

    for (int i = 1; i <= nparticiones; i++) {
        int tamano_particion;

        cout << "Inserte el tamano de la particion " << i << ": ";
        cin >> tamano_particion;

        if (tamano_particion > memoria) {
            cout << "El tamano de la particion excede la memoria disponible. Por favor, asignar un tamano de particion menor." << endl;
            i--;
            continue;
        }

        if (peso_del_so > tamano_particion) {
            cout << "El peso del sistema operativo excede el tamano de la particion. Por favor, asignar un tamano de particion mayor." << endl;
            i--;
            continue;
        }

        int espacio_libre = tamano_particion - peso_del_so;

        while (espacio_libre > 0) {
            cout << "¿Desea asignar un proceso?" << endl;
            cout << "0. No" << endl;
            cout << "1. Si" << endl;
            int opcion_proceso;
            cin >> opcion_proceso;

            if (opcion_proceso == 0) {
                break;
            } else if (opcion_proceso == 1) {
                cout << "Inserte el nombre del proceso: ";
                cin >> programa;
                int peso_del_programa;
                cout << "Inserte el peso del proceso: ";
                cin >> peso_del_programa;

                if (peso_del_programa <= espacio_libre) {
                    espacio_libre -= peso_del_programa;
                    memoria_ocupada += peso_del_programa; // Actualiza la memoria ocupada
                } else {
                    cout << "El peso del proceso excede el espacio libre de la particion. Por favor, asignar un peso de proceso menor." << endl;
                }
            } else {
                cout << "Opcion no valida. Intente nuevamente." << endl;
            }
        }

        memoria -= tamano_particion;
        if (memoria <= 0) {
            break;
        }
    }

    cout << endl;
    cout << "Memoria ocupada: " << memoria_ocupada << endl; 
    cout << "Memoria inicial: " << memoria_inicial_total << endl;
    cout << "Memoria disponible: " << (memoria_inicial_total - memoria_ocupada) << endl;

    return 0;
}

/*
MEMORIA: 2000
4 PARTICIONES

    1.- SO : 100 : 100
    2.- JAVA: 300 : 200
    3.- PAINT: 500 : 1000
    4.- WORD: 1100 : 700
    
*/