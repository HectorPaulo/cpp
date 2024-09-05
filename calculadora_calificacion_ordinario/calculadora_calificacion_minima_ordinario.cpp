#include <iostream>
using namespace std;

int main() {
    float parcial1, parcial2, parcial3;
    float calificacionSemestralDeseada;
    
    cout << "__________________-CALCULADORA DE CALIFICACION APROXIMADA SEMESTRAL-____________________" << endl;
    cout << "" << endl;
    cout << "Ingresar calificación semestral deseada: ";
    cin >> calificacionSemestralDeseada;
    cout << "" << endl;
    cout << "Ingresar calificaciones: " << endl;
    cout << "" << endl;
    cout << "Parcial 1: ";
    cin >> parcial1;
    cout << "Parcial 2: ";
    cin >> parcial2;
    cout << "Parcial 3: ";
    cin >> parcial3;
    cout << "" << endl;
    
    float promedioParciales = (parcial1 * 0.20) + (parcial2 * 0.20) + (parcial3 * 0.20);
    
    float calificacionMinimaExamenOrdinario = (calificacionSemestralDeseada - promedioParciales) / 0.40;

    cout << "Calificacion semestral aproximada necesaria para aprobar: " << calificacionMinimaExamenOrdinario << endl;

    return 0;
}
