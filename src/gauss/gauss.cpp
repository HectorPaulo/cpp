#include "jonathan2.h"
float A[8][8];

int main(){
	system("cls");
	int num=0;
	marco(1,1, 100,24);
	system("color 09");
	posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (GAUSS)";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	//poner posiciones de matriz
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
			posxy(2,7+x*2);cout<<"X"<<x+1;
			posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	//ingresar matriz
	posxy(10+num*10,5);cout<<"R";
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
 	}
	}
	
	
	for (int k=0; k<num; k++){
		for (int i=0; i<num; i++){
			if (i!=k){
				double factor=A[i][k] / A[k][k];
				for (int j=k; j<num+1; j++){
					A[i][j]-=factor*A[k][j];
				}
			}
		}
	}
	
   	for(int i=0; i<num; i++){ 
		float x= A[i][num] / A[i][i];	
		posxy(70,7+i*2);cout<<"x"<<i+1<<"= "<<x<<endl;
 	
	}    
        
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,20+fila*2);cout<<A[fila][columna];
 	}
	}
	
	getch();

}
