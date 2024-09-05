#include<iostream>
using namespace std;

int main(){
	
	float a, b, c, porin1, porin2, porin3;
	string nom1, nom2, nom3;
	 cout<<"Este es un programa que asigna cargos a partir del porcentaje de inversion en una empresa."<<endl;
	 cout<<" ";
	 
	 cout<<"Ingresar primer nombre: ";
	 cin>>nom1;
	 cout<<"Ingresar cantidad de inversion: ";
	 cin>>a;
	 
	 cout<<"Ingresar primer nombre: ";
	 cin>>nom2;
	 cout<<"Ingresar cantidad de inversion: ";
	 cin>>b;
	 
	 cout<<"Ingresar primer nombre: ";
	 cin>>nom3;
	 cout<<"Ingresar cantidad de inversion: ";
	 cin>>c;
	 
	 porin1 = a / (a + b + c);
	 porin2 = b / (a + b + c);
	 porin3 = c / (a + b + c);
	 
	 if (a >= b && a >= c){
	 	
	 	cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
	 	
		 cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Dueno."<<endl;
	 	
	 	if (b >= c){
	 	
		 cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
	 		
	 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
	 		
		 }
		 
		 if (c >= b){
		 	
		 cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
		 	
		cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
		 	
		 }
	 }
	 
	 if (b>=a && b>=c){
	 	
	 	 cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Dueño"<<endl;
	 		
	 		if (a>=c){
	 			
	 			 cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Gerente"<<endl;
	 		
	 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
	 			
			 }
			 
			 if (c >= a){
			 	
			 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Gerente"<<endl;
		 	
		cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Inversor, no sea codo."<<endl;
			 	
			 }
	 	
	 }
	 
	 if (c >= a && c >= b){
	 	
	 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Dueño"<<endl;
	 		
	 		if (a>=b){
	 			
	 			 cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Gerente"<<endl;
	 		
	 	cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
	 			
			 }
			 
			 if (b >= a){
			 	
			 	cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
	 		
	 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
		 	
		cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
		 	
	 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Inversor, no sea codo."<<endl;
	 	}
	 	
	 }

	 return 0;
}
