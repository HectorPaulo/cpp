#include "jonathan2.h"

float A[100][100];
float B[100][100];
int m, n;
int main(){
		posxy(2,2);cout<<"Ingrese el numero de filas: ";
	    cin>>m;
	    posxy(2,3);cout<<"Ingrese el numero de columnas: ";
	    cin>>n;
	    system("cls");
	    if (n==m){
    		marco(1,1,80,28);
   			 for(int fila=0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
            posxy(2+columna*3,2+fila*2);cin>>A[fila][columna];
             
        }}
     
		}
       posxy(2,10);cout<<"La suma con su transpuesta es: ";
        	for(int fila=0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
        	posxy(15+columna*3,2+fila*2);cout<<A[columna][fila];
        	B[fila][columna]=A[fila][columna]+A[columna][fila];
            posxy(2+columna*3,13+fila*2);cout<<B[fila][columna];
        }}
           	/*for(int fila=0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
            posxy(15+columna*3,2+fila*2);cout<<A[columna][fila];
           
        }}*/
        getch();
}

