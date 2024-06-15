#include<iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(void){

    setlocale(LC_ALL, "");
	 
	 int L;
	 string letra, numero;
    cout<<"-------------------------------------------------T E C L A D O-------------------------------------------------------"<<endl;
	
	cout<<"Si quiere escribir una letra escriba 1, si es un número escriba 0."<<endl;

	cin>>L;
	
	if (L==1){
		
		cout<<"DIGITE UNA LETRA: "<<endl;
		cin>>letra;
		
		cout<<"El teclado dice que su letra es: "<<letra<<endl;
		cout<<" "<<endl;
		cout<<"Denada"<<endl;
		
	}
	
	if (L==0){
		
		cout<<"DIGITE UN NÚMERO: "<<endl;
		cin>>numero;
		
			cout<<"El teclado dice que su número es: "<<numero<<endl;
		cout<<" "<<endl;
		cout<<"Denada"<<endl;
	}
	
    return EXIT_SUCCESS;
    
    return 0;
}

