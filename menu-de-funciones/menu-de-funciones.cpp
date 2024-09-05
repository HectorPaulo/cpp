#include <iostream>
#include <locale.h>

using namespace std;

int menu();
int main(void){
	
	setlocale(LC_ALL, "");
	
	int opcion;
	
	opcion = 1;
	
	while (opcion != 0){
		
		opcion = menu();
		
	}
	
return 0;	
}

int menu(){
	
	int opcion;
	cout<< "MENÚ DE OPCIONES"<<endl;
	cout<< "----------------"<<endl;
	cout<< "1. VALIDACIÓN DE FECHA"<<endl;
	cout<< "2. ¿AÑO BISIESTO?"<<endl;
	cout<< "3. CALCULAR LA EDAD"<<endl;
	cout<< "0. Salir"<<endl;
	
	cout<<" "<<endl;
	
	cout<<"Teclea tu opción";
	cin>>opcion;
	
	return opcion;
}
