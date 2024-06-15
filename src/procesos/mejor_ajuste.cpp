#include "paulo.h"
using namespace std;

struct Proceso {
    string nombre;
    int tamano;
};

struct Particion {
    int espacio_libre;
    vector<Proceso> procesos; 
};

int main() {
    int memoria, nparticiones;

    cout << "ASIGNACION DE MEMORIA" << endl;
    cout << endl;

    cout << "Inserte el tamano de la memoria: ";
    cin >> memoria;

    cout << "Con cuantas particiones desea trabajar? ";
    cin >> nparticiones;
    cout << endl;

    vector<Particion> particiones(nparticiones);

    for (int i = 0; i < nparticiones; i++) {
        int tamano_particion;

        cout << "Inserte el tamano de la particion " << (i + 1) << ": ";
        cin >> tamano_particion;

        particiones[i].espacio_libre = tamano_particion;
    }

    while (true) {
        string programa;
        int peso_del_programa;

        cout << "Inserte el nombre del programa (o '0' para finalizar): ";
        cin >> programa;
        if (programa == "0") {
            break;
        }

        cout << "Inserte el tamano del programa: ";
        cin >> peso_del_programa;

        bool proceso_asignado = false;

        for (int i = 0; i < nparticiones; i++) {
            if (particiones[i].espacio_libre >= peso_del_programa) {
                particiones[i].procesos.push_back({programa, peso_del_programa});
                particiones[i].espacio_libre -= peso_del_programa;
                proceso_asignado = true;
                cout << "Programa asignado a la particion " << (i + 1) << endl;
                break;
            }
        }

        if (!proceso_asignado) {
            cout << "No hay particion disponible para el programa '" << programa << "'" << endl;
        }
    }

    //PARTICIÓN NUEVA
    int memoria_sobrante = 0;
    for (const auto& particion : particiones) {
        memoria_sobrante += particion.espacio_libre;
    }

    if (memoria_sobrante > 0) {
        particiones.push_back({memoria_sobrante, {}});
        cout << "Se ha creado una nueva particion con la memoria sobrante." << endl;
    }

    cout << endl;
    cout << "Estado de las particiones:" << endl;
    for (int i = 0; i < particiones.size(); i++) {
        cout << "Particion " << (i + 1) << ": Espacio libre = " << particiones[i].espacio_libre << endl;
        cout << "  Procesos en la particion:" << endl;
        for (const auto& proceso : particiones[i].procesos) {
            cout << "  - " << proceso.nombre << ": Tamano = " << proceso.tamano << endl;
        }
    }

    return 0;
}
