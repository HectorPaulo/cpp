#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

//PROTOTIPO DE LA FUNCIÓN

bool esFechaValida(int anio, int mes, int dia)

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
	
	switch (opcion != 0){
		
		case 1:{
			
				bool esFechaValida(int anio, int mes, int dia){
			    if (mes < 1 || mes > 12) return false; 
			    if (dia < 1 || dia > 31) return false; 
			    
			    if (mes == 2) { 
			        if (dia > 29) return false; 
			        if (dia == 29 && (anio % 4 != 0 || (anio % 100 == 0 && anio % 400 != 0))) return false; 
			    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { 
			        if (dia > 30) return false;
			    }
			    
			    return true; 
			}
			
			int main() {
			    int anio, mes, dia;
			    cout << "Ingrese una fecha en formato AAAA MM DD: ";
			    cin >> anio >> mes >> dia;
			    
			    if (esFechaValida(anio, mes, dia)) {
			        cout << "Fecha valida" << endl;
			    } else {
			        cout << "Fecha invalida" << endl;
			    }
			    
			    return 0;
		}
			break;
		}
		
	} 
	getch ();
	return opcion;
}
