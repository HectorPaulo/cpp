#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "¿Cuántos alumnos son?" << endl << endl;
    cin >> n;
    cin.ignore(); // Consumir el carácter de nueva línea

    string alumnos[n];

    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "Ingresa el nombre del alumno: " << endl;
        getline(cin, alumnos[i]);
    }

    system("cls");

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        int matematicas = 1 + rand() % 11;
        int espaol = 1 + rand() % 11;
        cout << "La calificación de: " << alumnos[i] << " en matemáticas es igual a: " << matematicas << endl;
        cout << "La calificación de: " << alumnos[i] << " en español es igual a: " << espaol << endl << endl;
    }

    system("pause");
    return 0;
}