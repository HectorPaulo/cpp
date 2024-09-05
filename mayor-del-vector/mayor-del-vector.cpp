#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main(void){

	setlocale(LC_ALL, "");	

	system("color 70");
	
	int i, n, mayor = 0, menor, posicion = 0, prom, m=0;
	float numeros[50];
	cout<<"Digite el número de elementos que va a tener el vector: ";
	cin>>n;
	for(i=0; i<n; i++){		
		cout<<i+1<<". Digite un número: "<<endl<<endl;;
		cin>>numeros[i];	
		
		m = m + numeros[i];
		
		if(numeros[i] > mayor){			
			mayor = numeros[i];			
		}
		
		if (i == 0 || numeros[i] < menor){ 
			menor = numeros [i];
			posicion = i;
		}
								
	}
	
	for(i = 0; i < n; i++){		
		cout<<"Vector. "<<numeros[i]<<endl;		
	}
		
	cout<<"El mayor elemento del vector es: "<<mayor<<endl;
	cout<<"El menor elemento del vector es: "<<menor<<endl;
	prom = (m)/n;
	cout<<"el promedio es: "<<prom<<endl;
	getch();
	return 0;
}

