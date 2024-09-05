//Una matriz cuadrada de n elementos, pedir al usuario el tama�o de la matriz, y sumar dos matrices
#include "jonathan2.h"

float A[100][100];
float B[100][100];
float C[100][100];

int main(){
    system("color 02");
 	int n,m;
 	
    cout<< "Ingrese el numero de filas: ";
    cin>> m;
    cout<<"Ingrese el numero de columnas: ";
    cin>>n;
    
    system("cls");
 
    		marcomatriz(1,1,m,n);
   			 for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(4+columna*10,2+fila*2);cin>>A[fila][columna];
        }
    } 
            marcomatriz(1,13,m,n);
   			for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(4+columna*10,14+fila*2);cin>>B[fila][columna];
        }
    }
    system("cls");
    posxy(2,2);cout<<"La suma es igual a : ";
        marcomatriz(2,5,m,n);
		 for(int fila = 0; fila<n; fila++){
        	for(int columna = 0; columna < m; columna++){
        		C[fila][columna] = A[fila][columna]+B[fila][columna];
            posxy(5+columna*10,6+fila*2);cout<<C[fila][columna];
        }
    } 
    
	
   
    getch();
    return 0;	
}
