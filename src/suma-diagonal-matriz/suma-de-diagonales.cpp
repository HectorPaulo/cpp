//programa que capture una matriz de 3x3 y sume los elementos de la atriangular superior, inferior y los elemetos de la diagonal principal
#include <iostream>
#include "paulo.h"
using namespace std;

int main() {
    int matriz[3][3];
    int sumaDiagonal = 0, sumaTriangularSuperior = 0, sumaTriangularInferior = 0;
     
	system("color 70");
	float A[3][3];
	for(int fila = 0 ; fila < 3; fila++){
		for(int columna = 0; columna < 3; columna++){		
			posxy(columna*10,fila*5);cin>>matriz[fila][columna];		
		}
	}
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) {
                sumaDiagonal += matriz[i][j];
            }
            else if(i < j) { 
                sumaTriangularSuperior += matriz[i][j];
            } 
            else if(i > j) { 
                sumaTriangularInferior += matriz[i][j];
            }
        }
    }
    cout << "La suma de los elementos de la diagonal principal es: " << sumaDiagonal << endl;
    cout << "La suma de los elementos de la triangular superior es: " << sumaTriangularSuperior << endl;
    cout << "La suma de los elementos de la triangular inferior es: " << sumaTriangularInferior << endl;

    return 0;
}

