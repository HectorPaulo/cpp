 	#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout<<"Este es un programa que muestra el numero mas pequeño de tres previamente ingresados."<<endl;
	
	cout<<"Ingresar primer numero entero"<<endl;
	cin>>a;

	cout<<"Ingresar segundo numero entero"<<endl;
	cin>>b;

	cout<<"Ingresar tercer numero entero"<<endl;
	cin>>c;
	
	cout<<"Los números ordenados del mayor al menor son:"<<endl;
	
		if (a >= b){
	
	if (a >= c){
		
		cout<<a<<endl;
		
		if (b >= c){
			
			cout<<b<<endl;
			
			cout<<c<<endl;
		}
		
		if (c >= b){
			
			cout<<c<<endl;
			
			cout<<b<<endl;
		}
	}
}

	if (b >= a){
	
	if (b >= c){
		
		cout<<b<<endl;
		
		if (a >= c){
			
			cout<<a<<endl;
			
			cout<<c<<endl;
		}
		
		if (c >= a){
			
			cout<<c<<endl;
			
			cout<<a<<endl;
		}
	}
}

	if (c >= a){
	
	if (c >= b){
		
		cout<<c<<endl;
		
		if (a >= b){
			
			cout<<a<<endl;
			
			cout<<b<<endl;
		}
		
		if (b >= a){
			
			cout<<b<<endl;
			
			cout<<b<<endl;
			
		}
	}
}
    return 0;
    
}
