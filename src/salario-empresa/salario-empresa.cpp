#include<iostream>

using namespace std;

int main(){
	
	float salario;
	int anti;
	
	cout<<"Este es un programa que incrementa el salario de un trabajador dependiendo del tiempo que lleve en la empresa"<<endl;
	
	cout<<"Ingresar salario actual: $"<<endl;
	cin>>salario;
	
	cout<<"Ingresar antiguedad del trabajador: "<<endl;
	cin>>anti;
	
	if (salario < 5000){
		
		if (anti >= 10){
			
			cout<<"Su salario ahora debe ser de "<<salario + (salario * 0.20)<<endl;
		}
	}
	
	if (salario < 5000){
		
		if (anti < 10){
			
			cout<<"Su salario ahora debe ser de "<<salario + (salario * 0.5)<<endl;
		}
	}
	
	if (salario >= 5000){
		
			
			cout<<"No hay sueldo nuevo pa ti <3"<<endl;
	}
	
	return 0;
}
