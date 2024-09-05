#include<iostream>

using namespace std;

int main(){
	
	int numz;
	float precioT, preciod, precioz, descuento;
	
	precioz = 80;
	
	cout<<"Este es un programa que asigna descuentos en la barata de liverpool a partir de la cantidad de pares de zapatos que se compraron"<<endl;
	
	cout<<"El precio por par de zapatos es $80"<<endl;
	
	cout<<"¿Cuantos pares de zapatos compraste?";
	cin>>numz;
	
	if(numz < 10){
		
		cout<<"No hay desceunto para ti, compra mas, no seas codo.";
	}
	
	if (numz >= 10){
		if (numz <= 20){
		
		cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.15)<<endl;
	}
		}
	
	if (numz >= 20){
		if (numz < 30){
		
		cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.25)<<endl;
		
	}
	
}

	if (numz >= 30){
	
		cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.40)<<endl;
			
	}
return 0;

}
