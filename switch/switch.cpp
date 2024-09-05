#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float a, b;
	string sim;
	char si, no;
	
	cout<<"--------------------------------------------CALCULADORA DE DOS DIGITOS--------------------------------------------------"<<endl;
	
	cout<<"Digite dos numeros."<<endl;
	cin>>a>>b;
	cout<<" "<<endl;
	cout<<"Sus numeros son "<<a<<" y "<<b<<"."<<endl;
	
	cout<<"¿Gusta desplegar el menu de opciones?"<<endl;
	cin>>si;
	cout<<" "<<endl;
	
	si = 1;
	
	no = 0;
	
		if (si = si){
			
		cout<<"Ingrese el simbolo de la operacion que guste hacer: "<<endl;
		cout<<" "<<endl;
		cout<<">>>>MENU DE OPCIONES<<<<"<<endl;
	 	cout<<"Suma: +."<<endl;
		cout<<"Resta: -."<<endl;
		cout<<"Multiplicacion: *."<<endl;
		cout<<"Division: /."<<endl;
		cout<<"Potencia: p."<<endl;
		cin>>sim;
	
		}
		
		if (si = no){
		
		cout<<"Ingrese el simbolo de la operacion que guste hacer"<<endl;
		cin>>sim;
		
		}
		"+" == 6;
		"-" == 2;
		"*" == 3;
		"/" == 4;
		"p" == 5;
		
		switch(sim){
			case 6: cout<<(a + b)<<endl;
			case 2: cout<<(a - b)<<endl;
			case 3: cout<<(a * b)<<endl;
			case 4: cout<<(a / b)<<endl;
			case 5: cout<<pow(a,b)<<endl;
		}

	return 0;
}
