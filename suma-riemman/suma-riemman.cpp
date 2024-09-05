#include <iostream>
#include <math.h>
#include "paulo.h"

using namespace std;

double f(double x){
		return (x*x)+1;
	}
	double suma_de_riemman(int n){
		double a = 0;
		double b = 1;
		double dx = (b-a)/n;
		double sum = 0;
		for (int i = 0; i<n; i++){
			double x = a + i*dx;
			sum += f(x)*dx;
		}
		return sum;
	}
	
int main(){int n;
	setlocale(LC_ALL, "");
	//PORTADA
	system("color 70");
	centrarStr("SUMA DE RIEMMAN", 14);
	centrarStr("(para x**2 + 1)", 15);cout<<endl;
	posxy(22, 30);system("pause");
	system("cls");
	//FIN PORTADA
	//PEDIR N
	posxy(4,15);cout<<"Ingrese la cantidad de rectángulos que desea usar";
	posxy(4,16);cin>>n;
	posxy(22, 30);system("pause");
	//TERMINAR DE PEDIR N
		
		cout<<"La suma de Riemman es: ";
		cout<<suma_de_riemman(n)<<endl;
}
