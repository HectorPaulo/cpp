#include "jonathan2.h"
//programa que calcule una matriz de 3x3 y sume los elementos de la triangular superior
//los elementos de la triangular inferior y los elementos de la diagonal principal

void marcomatriz3x3();
float A[3][3];
void matriz();
void sumad();
void sumainf();
void sumasup();

int main(){
	system("color 02");
	marco(1,1,80,24);
	marcomatriz3x3();
	matriz();
	posxy(2,10);sumad();
	posxy(2,11);sumainf();
	posxy(2,12);sumasup();
	getch();
}

void matriz(){
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		posxy(3+4*columna,3+fila*2);cin>>A[fila][columna];				
}
}
}


void marcomatriz3x3(){

char c;	

c=218;	
posxy(2,2);cout<<c;	
c=191;
posxy(14,2);cout<<c;	
c=192;
posxy(2,8);cout<<c;
c=217;
posxy(14,8);cout<<c;	

c=196;
for (int i=0; i<11; i++){
	posxy(3+i,2);cout<<c;
	posxy(3+i,8);cout<<c;
	posxy(3+i,4);cout<<c;
	posxy(3+i,6);cout<<c;
}


c=179;
for (int i=0; i<5; i++){
	posxy(2,3+i);cout<<c;
	posxy(14,3+i);cout<<c;
	posxy(6,3+i);cout<<c;
	posxy(10,3+i);cout<<c;
	
}

c=197;
posxy(6,4);cout<<c;
posxy(10,4);cout<<c;
posxy(6,6);cout<<c;
posxy(10,6);cout<<c;
}


void sumad(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila==columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la diagonal principal es: "<<suma;			
}

void sumainf(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila>columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la triangular inferior es: "<<suma;			
}


void sumasup(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila<columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la triangular superior es: "<<suma;			
}
