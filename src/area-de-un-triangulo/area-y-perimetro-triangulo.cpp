#include<iostream>
using namespace std;

int main(){
	float radio, area, perimetro;
	
	cout<<"Este programa calcula el perimetro y el area de un circulo dado su radio"<<endl;
	cout<<"¿Que esperas para darme el radio de tu circulo?"<<endl;
	cin>>radio;
	
	perimetro = (3.141519*radio)*2;
	area = 3.141519*(radio*radio);
	
	cout<<"el area de tu circulo mal hecho es: "<<area<<endl;
	cout<<"y el perimetro es: "<<perimetro<<endl;
	
	return 0;
	
	}
