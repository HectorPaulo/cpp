#include <iostream>
#include <conio.h>
#include "paulo.h"

using namespace std;

int main() {
    int n;
    char cadena[60];
    
    cout << "Ingrese una cadena de texto: ";
    cin.getline(cadena, 60);
    
    // Contar la cantidad de caracteres en la cadena
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    
    posxy(2, 2); cout << cadena;
    
    posxy(15, 6); cout << cadena << " tiene " << i << " caracteres." << endl;
    
    for (int j = 0; j < i; j++) {
        if (cadena[j] >= 'A' && cadena[j] <= 'Z') {
            cadena[j] += 32;
        }
        else if (cadena[j] >= 'a' && cadena[j] <= 'z') {
            cadena[j] -= 32;
        }
        
        posxy(3, 4 + j); cout << cadena[j];
    }
    
    getch();
    return 0;
}

