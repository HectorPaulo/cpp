#include "jonathan2.h"
float A[8][8];
float B[8][8];
float C[8][1];
float D[8][8];
float pivote;

int main (){
	system("cls");
	int num=0;
	system("color 09");
	posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (METODO INVERSA)";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	if(num>7){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}
 	if(num<=0){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}

	
	if (num<8){
		
	for(int i=0;i<num;i++){
	for(int j=0;j<num;j++){
	if(i==j) B[i][j]=1;
	else B[i][j]=0;
}}

	//poner posiciones de matriz
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+num*10,5);cout<<"R";
	//ingresar matriz
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
 	}
	}
	for (int i=0; i<num; i++){
		if (A[i][i]==0){
	  	bool change=false;
	  	 for (int j= i+1; j<num; j++){
            if (A[j][i]!=0){
                for (int k=0; k<num; k++){
                    double temp=A[i][k];
                    A[i][k]=A[j][k];
                    A[j][k]=temp;
                    temp=B[i][k];
                    B[i][k]=B[j][k];
                    B[j][k]=temp;
                }
                change=true;
                break;
                
            }
         
        }
	  }	
	}
	
	for(int fila_pivote=0; fila_pivote<num; fila_pivote++){
		pivote= A[fila_pivote][fila_pivote];

		for (int columna=0; columna<num;columna++){
		A[fila_pivote][columna]=(A[fila_pivote][columna])/pivote;
		B[fila_pivote][columna]=(B[fila_pivote][columna])/pivote;
	}
	for (int fila=fila_pivote+1;  fila<num;fila++){
			pivote = (A[fila][fila_pivote])*-1;
			for (int columna = 0; columna<num; columna++){
				A[fila][columna] = pivote * A[fila_pivote][columna] + A[fila][columna];
				B[fila][columna] = pivote * B[fila_pivote][columna] + B[fila][columna];
		}
	}

}


	for (int fila_pivote=num; fila_pivote>= 0;fila_pivote--){
		for(int fila=fila_pivote-1; fila>=0; fila--){
			pivote=A[fila][fila_pivote]*-1;
			for(int columna=0; columna<num;columna++){
				A[fila][columna]=pivote*A[fila_pivote][columna]+A[fila][columna];
				B[fila][columna]=pivote*B[fila_pivote][columna]+B[fila][columna];

			}
		}
	}
	
	for (int i=0; i<num; i++){
		C[i][0]=A[i][num];	
	}
	
	


//Imprimir resultados



    for(int fila=0; fila<num; fila++){ 
        for(int columna = 0; columna<num; columna++){
            for(int i=0; i<num; i++){
                D[fila][columna] += B[fila][i]*C[i][columna];
            }
    
        }
        }
         
	system("cls");
	posxy(5,2);cout<<"Matriz inversa:";
	marcomatriz(5,6,num, num);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;	
	}
	
 	for(int fila=0; fila<num; fila++){
		for(int columna=0; columna<num; columna++){	
		posxy(8+columna*10,7+fila*2);cout<<B[fila][columna];
 	}
	}
	
	posxy(60,2);cout<<"Resultados del sistema de ecuaciones:";
	for(int i=0;i<num;i++){
			posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<D[i][0];
			cout<<endl;	
		}

getch();
}
}
