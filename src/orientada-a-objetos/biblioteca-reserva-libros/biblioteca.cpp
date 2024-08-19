#include <iostream>
#include <string>
using namespace std;

class Estudiante {
public:
    int matricula;
    string nombre;
    int edad;
    string carrera;
    string sexo;
    int semestre;

    void mostrarDatos() {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;
        cout << "Sexo: " << sexo << endl;
        cout << "Semestre: " << semestre << endl;
    }
};

class Bibliografia {
public:
    string titulo;
    string tipo; 
    string categoria; 
    
    void mostrarBibliografia() {
        cout << "Título: " << titulo << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Categoría: " << categoria << endl;
    }
};

class Biblioteca {
private:
    int reservaciones;
    static const int maxReservaciones = 3;

public:
    Biblioteca() : reservaciones(0) {}

    bool puedeReservar() {
        return reservaciones < maxReservaciones;
    }

    void reservarLibro(Estudiante& e, Bibliografia& b) {
        if (puedeReservar()) {
            reservaciones++;
            cout << "\nReserva realizada con éxito\n";
            mostrarFicha(e, b);
        } else {
            cout << "\nNo se pueden realizar más reservaciones. Ha alcanzado el límite de " << maxReservaciones << " reservaciones.\n";
        }
    }

    void mostrarFicha(Estudiante& est, Bibliografia& bib) {
        cout << "\n--- Ficha de Reserva ---\n";
        est.mostrarDatos();
        cout << "Bibliografía reservada:\n";
        bib.mostrarBibliografia();
        cout << "------------------------\n";
    }
};

int main() {
    cout << "\nBIBLIOTECA\n";
    cout << "\n--------------------------------\n";

    Estudiante estudiante;
    cout << "Ingrese su matrícula: ";
    cin >> estudiante.matricula;
    cout << "Ingrese su nombre: ";
    cin >> estudiante.nombre;
    cout << "Ingrese su edad: ";
    cin >> estudiante.edad;
    cout << "Ingrese el nombre de su carrera: ";
    cin >> estudiante.carrera;
    cout << "Género: ";
    cin >> estudiante.sexo;
    cout << "Ingrese el número de semestre: ";
    cin >> estudiante.semestre;

    Biblioteca biblioteca;

    string opciones[9] = {
        "C++ Programación Moderna",
        "Python para Dados Estrangeiros",
        "JavaScript: Una Guía Completa",
        "Revista de Investigación en Sistemas",
        "Enciclopedia de Matemáticas Avanzadas",
        "Manual de Ingeniería de Software",
        "Teoría de Bases de Datos",
        "Inteligencia Artificial: Fundamentos",
        "Programación en Java para Principiantes"
    };

    while (biblioteca.puedeReservar()) {
        Bibliografia bibliografia;
        
        cout << "\nSeleccione el título de la bibliografía:\n";
        for (int i = 0; i < 9; ++i) {
            cout << i + 1 << ". " << opciones[i] << endl;
        }

        int seleccion;
        cout << "Ingrese el número de la opción deseada: ";
        cin >> seleccion;

        if (seleccion < 1 || seleccion > 9) {
            cout << "\nOpción inválida. Intente nuevamente.\n";
            continue;
        }

        bibliografia.titulo = opciones[seleccion - 1];
        cout << "Ingrese el tipo (Libro, Revista, Enciclopedia): ";
        cin.ignore();
        getline(cin, bibliografia.tipo);
        cout << "Ingrese la categoría (Popular, Científica, Técnica): ";
        getline(cin, bibliografia.categoria);

        biblioteca.reservarLibro(estudiante, bibliografia);

        if (!biblioteca.puedeReservar()) {
            cout << "\nNo se pueden realizar más reservaciones.\n";
        } else {
            cout << "\n¿Desea hacer otra reservación? (s/n): ";
            char respuesta;
            cin >> respuesta;
            if (respuesta != 's' && respuesta != 'S') {
                break;
            }
        }
    }

    cout << "\nReservacion agregada con exito...\n";

    return 0;
}
