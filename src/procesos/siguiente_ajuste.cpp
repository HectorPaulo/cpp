#include "paulo.h"

using namespace std;

struct Particion {
    int espacio_libre;
    vector<pair<string, int>> procesos; // Nombre del proceso y su tamano
};

int main() {
    int memoria, peso_del_so, nparticiones;
    string programa;

    cout << "ASIGNACION DE MEMORIA" << endl;
    cout << endl;

    cout << "Inserte el tamano de la memoria: ";
    cin >> memoria;

    int memoria_inicial_total = memoria; // Se guarda la memoria inicial

    cout << "Con cuantas particiones gusta trabajar? ";
    cin >> nparticiones;
    cout << endl;

    cout << "Inserte el peso del sistema operativo: ";
    cin >> peso_del_so;
    cout << endl;

    vector<Particion> particiones(nparticiones);

    for (int i = 0; i < nparticiones; i++) {
        int tamano_particion;

        cout << "Inserte el tamano de la particion " << (i + 1) << ": ";
        cin >> tamano_particion;

        particiones[i].espacio_libre = tamano_particion - peso_del_so;
    }

    int memoria_ocupada = 0;

    while (true) {
        cout << "Inserte el nombre del proceso (o 'exit' para finalizar): ";
        cin >> programa;
        if (programa == "exit") {
            break;
        }

        int peso_del_programa;
        cout << "Inserte el peso del proceso: ";
        cin >> peso_del_programa;

        bool proceso_asignado = false;

        for (int i = 0; i < nparticiones; i++) {
            if (particiones[i].espacio_libre >= peso_del_programa) {
                particiones[i].procesos.push_back(make_pair(programa, peso_del_programa));
                particiones[i].espacio_libre -= peso_del_programa;
                memoria_ocupada += peso_del_programa;
                proceso_asignado = true;
                break;
            }
        }

        if (!proceso_asignado) {
            // Realizar la compactación aquí
            // ...
            // Luego volver a buscar una partición adecuada
        }
    }

    cout << endl;
    cout << "Memoria ocupada: " << memoria_ocupada << endl;
    cout << "Memoria inicial: " << memoria_inicial_total << endl;
    cout << "Memoria disponible: " << (memoria_inicial_total - memoria_ocupada) << endl;

    return 0;
}
