//Realizar un programa con vector que gusrde n�meros del 1 al 20 e imprima sus elementos en orden descendente.
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "paulo.h"

using namespace std;

int main(){
	
	system("color 70");
	
	int i, numeros[20], mayor = 0, largo, ancho, x, y;
	
		
 del 1-20 de la forma {	posxy(20, 3);cout<<"Este es un programa que muestra un vector con numeros a, b, c}."<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	
    posxy(45, 5);cout << "Ingrese el largo del marco: ";
    cin >> largo;
    posxy(45, 8);cout << "Ingrese el ancho del marco: ";
    cin >> ancho;
    posxy(45, 11);cout << "Ingrese la coordenada x de la esquina superior izquierda: ";
    cin >> x;
    posxy(45, 14);cout << "Ingrese la coordenada y de la esquina superior izquierda: ";
    cin >> y;

	x = ancho + 20;
	y = largo + 20;

    // Imprimir espacios en blanco para mover el cursor a la posici�n deseada
    for (int i = 0; i < y; i++) {
        cout << endl;
    }
    for (int i = 0; i < x; i++) {
        cout << " ";
    }

    // Imprimir marco superior
    cout << char(201);
    for (int i = 0; i < ancho - 2; i++) {
        cout << char(205);
        
    }
    cout << char(187) << endl;

    // Imprimir bordes verticales y espacios en blanco en el interior del marco
    for (int i = 0; i < largo - 2; i++) {
        for (int j = 0; j < x; j++) {
            cout << " ";
        }
        cout << char(186);
        for (int j = 0; j < ancho - 2; j++) {
            cout << " ";
        }
        cout << char(186) << endl;
    }

    // Imprimir marco inferior
    for (int i = 0; i < x; i++) {
        cout << " ";
    }
    cout << char(200);
    for (int i = 0; i < ancho - 2; i++) {
        cout << char(205);
    }
    cout << char(188) << endl;

	numeros[0] = 20;
	numeros[1] = 19;
	numeros[2] = 18;
	numeros[3] = 17;
	numeros[4] = 16;
	numeros[5] = 15;
	numeros[6] = 14;
	numeros[7] = 13;
	numeros[8] = 12;
	numeros[9] = 11;
	numeros[10] = 9;
	numeros[11] = 8;
	numeros[12] = 7;
	numeros[13] = 6;
	numeros[14] = 5;
	numeros[15] = 4;
	numeros[16] = 3;
	numeros[17] = 2;
	numeros[18] = 1;
	numeros[19] = 0;
	
	for(i = 0; i < 20; i++){
		
		posxy(x+2, y--); cout<<"{"<<numeros[i]<<"}"<<endl; 
		
	}
	
	if(i > mayor){
		
		mayor = i;
		
	}
	
	getch();
	return 0;
}


