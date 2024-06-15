//Ordenamiento por inserciín

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "");
	
	system("color 70");
	
	int numeros[] = {4,2,3,1,5};
	int i, posicion, auxiliar;
	
	cout<<"ORDENAMIENTO POR INCERSIÓN."<<endl;
	cout<<"----------------------------"<<endl;
	
	for (i = 0; i < 5; i++){
		
		posicion = i;
		auxiliar = numeros[i];
		
		while((posicion > 0) && (numeros[posicion-1] > auxiliar)){
				
			numeros[posicion] = numeros[posicion - 1];
			posicion--;	

		}
		
		numeros[posicion] = auxiliar;
		
	}
	
	cout<<"Orden Ascendente: { ";
	for (i = 0; i < 5; i++){
		
		cout<<numeros[i]<<" ";
		
	}
	
	cout<<"}"<<endl;
	
	cout<<"Orden Descendente: { ";
	for(i = 4;i>= 0; i--){
		
		cout<<numeros[i]<<" ";
		
	}
	
	cout<<"}"<<endl;
	getch();
	return 0;
}
