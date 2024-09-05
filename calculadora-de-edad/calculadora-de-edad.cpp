#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool esFechaValida(int anio, int mes, int dia) {
    if (mes < 1 || mes > 12 || dia < 1) {
        return false;
    }
    switch (mes) {
        case 2:
            if (esBisiesto(anio)) {
                return dia <= 29;
            } else {
                return dia <= 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return dia <= 30;
        default:
            return dia <= 31;
    }
}

int calcularEdad(int anioNac, int mesNac, int diaNac, int anioActual, int mesActual, int diaActual) {
    int edad = anioActual - anioNac;
    if (mesActual < mesNac || (mesActual == mesNac && diaActual < diaNac)) {
        edad--;
    }
    return edad;
}

int main() {
    int anioNac, mesNac, diaNac;
    int anioActual, mesActual, diaActual;

    // Solicitar fecha de nacimiento
    cout << "Ingresa tu fecha de nacimiento (en formato DD/MM/AAAA): ";
    scanf("%d/%d/%d", &diaNac, &mesNac, &anioNac);

    // Validar fecha de nacimiento
    if (!esFechaValida(anioNac, mesNac, diaNac)) {
        cout << "La fecha de nacimiento ingresada es invalida." << endl;
        return 1;
    }

    // Solicitar fecha actual
    cout << "Ingresa la fecha actual (en formato DD/MM/AAAA): ";
    scanf("%d/%d/%d", &diaActual, &mesActual, &anioActual);

    // Validar fecha actual
    if (!esFechaValida(anioActual, mesActual, diaActual)) {
        cout << "La fecha actual ingresada es invalida." << endl;
        return 1;
    }

    // Calcular edad
    int edad = calcularEdad(anioNac, mesNac, diaNac, anioActual, mesActual, diaActual);

    // Verificar si naci� en a�o bisiesto
    if (esBisiesto(anioNac)) {
        cout << "La edad de la persona es " << edad << " a�os y naci� en un a�o bisiesto." << endl;
    } else {
        cout << "La edad de la persona es " << edad << " a�os y no naci� en un a�o bisiesto." << endl;
    }

    return 0;
}

