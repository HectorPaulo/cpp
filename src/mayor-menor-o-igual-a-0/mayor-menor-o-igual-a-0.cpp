#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void){

    setlocale(LC_ALL, "");
    
    float n, m, M, i, c, l;
    
    n = 0;
    m = 0;
    c = 0;
    M = 0;
    i = 0;
    
    cout<<"Este programa informa cuántos números son mayores, menores e iguales a 0"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<" "<<endl;
    
    cout<<"Digite la cantidad de números que va a ingresar";
    cin>>c;
    
    cout<<"Su cantidad de números es: "<<c<<endl;
    
	l = 1;
	cout<<l;
	
	while (l <= c){
	
		
			cout<<"Ingrese un número"<<endl;
    		cin>>n;
    		
    		if (n<0) {
			
    	
    		m = m + 1;
    	
		    }
    	  	if (n>0){ 
    		M = M + 1;
    	
		    }
	
	
    	 if (n=0){
    		i = i + 1;
    			
	     }
	     	l = l + 1;

    
	}
	
    
		
    
    cout<<"La cantidad de números iguales a 0 es: "<<i<<endl;
    
    cout<<"La cantidad de números menores a 0 es: "<<m<<endl;
    
    cout<<"La cantidad de números mayores a 0 es: "<<M<<endl;
    
    return 0;



}
