#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <string.h>

using namespace std;

int main(void){
    setlocale(LC_ALL, "");
    
    int residuo, nd, ms;
    
    cout<<"Este es un programa que solicita n�meros y se encarga de saber si el n�mero es divisible entre 5, el programa termina hasta que el usuario introduzca un 0."<<endl;
    cout<<" "<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<" ";
    
    
    
    while (nd!=0){
    	 cout<<"Introduzca un n�mero: ";
   cin>>nd;
   
   if(nd!=0){
	
	residuo=nd%5;
	
    if (residuo==0){
	
    cout<<"Tu n�mero s� es divisible entre 5"<<endl;
}

	if (residuo!=0){
		
		cout<<"Tu n�mero no es divisible sobre 5"<<endl;
		
	}
	
}
	
	if (nd == 0){
		
		cout<<"Presione 'Enter' para salir del programa."<<endl;
		
	}
	
}
    getch ();
    return 0;
}

