#include <iostream>
#include <fstream>
#include "paulo.h"
using namespace std;

void escribir();
void pedir_datos();

string nombre;
int edad, matricula;
string texto;

int main() {
    pedir_datos();
    escribir();
    cout << endl << endl;
    system("pause");
    return 0;
}

void pedir_datos() {
    setlocale(LC_ALL, "");
    system("color 70");
    centrarStr("----------CREAR ARCHIVOS DE TEXTO----------", 2);
    posxy(3, 5);cout << "Este es un programa que guarda datos de una variable y crea un archivo externo en el que se guarda ese dato.";
    system("pause");
    system("cls");
    posxy(3, 10);cout<<"cheque la carpeta donde est� guardado este programa, hay un dato interesante esperando a ser leido";
}

void escribir() {
    ofstream archivo;
    string nombre_archivo;
    cout << "Digite el nombre del archivo: ";
    cin.ignore(); // Ignorar el car�cter de nueva l�nea en el b�fer de entrada
    getline(cin, nombre_archivo);
    archivo.open(nombre_archivo.c_str(), ios::out);
    if (!archivo) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "¿Qué onda, pepo? �Sab�as que las hormigas son capaces de llevar objetos hasta 50 veces su propio peso? Esto se debe a que poseen una estructura corporal especializada que les permite distribuir el peso de manera efectiva. Adem�s, las hormigas trabajan en equipo para transportar cargas m�s grandes, formando cadenas organizadas. Este impresionante rasgo de fuerza relativa en comparaci�n con su tama�o las convierte en uno de los insectos m�s asombrosos del reino animal.";
    archivo.close();
}
