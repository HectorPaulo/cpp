#include<math.h>
#include<iostream>

using namespace std;

int main() {
	
	float a;
	
	float b;
	
	float c;
	
	string sim;
	
	cout << "Esta es una calculadora" << endl;
	cout << " " << endl;
	
	cout << "ingrese el símbolo de la operación que desea hacer." << endl;
	cout << " " << endl;
	
	cout << "si desea desplegar el menu de ociones de operacion escriba si, si no quiere desplegarlo escriba no" << endl;
	cin >> sim;
	cout << " " << endl;
	
	if ((sim=="si")) {
		
		cout << "menu de opciones:" << endl;
		
		cout << "suma : +" << endl;
		
		cout << "resta : -" << endl;
		
		cout << "multiplicacion : *" << endl;
		
		cout << "division : /" << endl;
		
		cout << "potencia : p" << endl;
		
	}
	cin >> sim;
	
	cout << " " << endl;
	
	if ((sim=="no")) {
		
		if ((sim=="+")) {
			
			cout << "Ingrese el primer numero que desea sumar" << endl;
			
			cin >> a;
			
			cout << " " << endl;
			
			cout << "Ingrese el segundo numero que desea sumar" << endl;
			
			cin >> b;
			
			cout << " " << endl;
			
			c = a+b;
			
			cout << c << endl;
			
		}
		
		if ((sim=="p")) {
			
			cout << "Ingrese el primer numero que desea elevar" << endl;
			
			cin >> a;
			
			cout << " " << endl;
			
			cout<< "Ingrese la potencia"<<endl;
			
			cin>>b;
		
			c = pow(a,b);
		
			cout << c << endl;
			
		}
		if ((sim=="-")) {
			
			cout << "Ingrese el primer numero que desea restar" << endl;
			
			cin >> a;
			
			cout << " " << endl;
			
			cout << "Ingrese el segundo numero que desea restar" << endl;
			
			cin >> b;
			
			cout << " " << endl;
			
			c = a-b;
			
			cout << c << endl;
			
		}
		
		if ((sim=="*")) {
			
			cout << "Ingrese el primer numero que desea multiplicar" << endl;
			
			cin >> a;		
			cout << " " << endl;
			
			cout << "Ingrese el segundo numero que desea multiplicar" << endl;
			
			cin >> b;			
			cout << " " << endl;
			
			c = a*b;
			
			cout << c << endl;
			
		}
		
		if ((sim=="/")) {
			
			cout << "Ingrese el primer numero que desea dividir" << endl;
			
			cin >> a;			
			cout << " " << endl;
			
			cout << "Ingrese el segundo numero que desea dividir" << endl;
			
			cin >> b;			
			cout << " " << endl;
			
			if ((a==0)) {
				
				if ((b==0)) {
					
					cout << "No se puede hacer una division sobre 0" << endl;
					
				} else {
					
					c = a/b;
					
					cout << c << endl;
					
				}
				
			}
			
		}
		
	}
	
	if ((sim=="+")) {
		
		cout << "Ingrese el primer numero que desea sumar" << endl;
		
		cin >> a;
		
		cout << " " << endl;
		
		cout << "Ingrese el segundo numero que desea sumar" << endl;
		
		cin >> b;		
		cout << " " << endl;
		c = a+b;
		
		cout << c << endl;
		
	}
	
	if ((sim=="p")) {
		
		cout << "Ingrese el primer numero que desea elevar" << endl;
		
		cin >> a;		
		cout << " " << endl;
		
		cout<< "Ingrese la potencia"<<endl;
		
		cin>>b;
		
		c = pow(a,b);
		
		cout << c << endl;
		
	}
	
	if ((sim=="-")) {
		
		cout << "Ingrese el primer numero que desea restar" << endl;
		
		cin >> a;				
		cout << " " << endl;
		
		cout << "Ingrese el segundo numero que desea restar" << endl;
		
		cin >> b;		
		cout << " " << endl;
		
		c = a-b;
		
		cout << c << endl;
		
	}
	
	if ((sim=="*")) {
		
		cout << "Ingrese el primer numero que desea multiplicar" << endl;
		
		cin >> a;
		cout << " " << endl;
		
		cout << "Ingrese el segundo numero que desea multiplicar" << endl;
		
		cin >> b;
		cout << " " << endl;
		
		c = a*b;
		
		cout << c << endl;
		
	}
	
	if ((sim=="/")) {
		
		cout << "Ingrese el primer numero que desea dividir" << endl;
		cin >> a;
		cout << " " << endl;
		
		cout << "Ingrese el segundo numero que desea dividir" << endl;
		cin >> b;
		cout << " " << endl;
		
		if ((a==0)) {
			
			if ((b==0)) {
				
				cout << "No se puede hacer una division sobre 0" << endl;
				
			} else {
				
				c = a/b;
				
				cout << c << endl;
				
			}
			
		}
		
	}
	
	return 0;
}

