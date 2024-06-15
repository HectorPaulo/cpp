//arreglos segun ats
//Escribe un programa que defina un vector de números y calcule la suma de sus elementos
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	system("color 70");
	
	int numeros[5] = {1, 2, 3, 4, 5};
	int suma = 0;
	int multiplicacion = 0;
	
	for(int i = 0; i < 5; i++){//i se iguala a 0 porque los vectores empiezan en 0
	suma = suma + numeros[i];
	multiplicacion = numeros[i] * numeros[i++];
	
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	cout<<"La multiplicación acumulada del vector es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}

