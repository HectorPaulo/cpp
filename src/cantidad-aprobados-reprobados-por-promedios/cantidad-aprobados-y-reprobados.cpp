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
    
	int numcal, m, na, nr;
	na = 0;
	nr = 0;
	m = 1;
	
	float porap, porre, nm, nM, calif, califa, califr;
	califa = 0;
	califr = 0;
	
	cout<<"-------------------------------------------EVALUACIÓN DE CALIFICACIONES--------------------------------------------------- "<<endl;
	
	cout<<"¿cuántanas calificaciones quieres evaluar?"<<endl;
    cin>>numcal;
    
    while (m<=numcal){
    	
    	cout<<"Calificación"<<m<<": "<<endl;
    	
    cin>> calif;
    
    m = m + 1;
     if (calif >=6){
     	
     	cout<<"-Calificación aprobatoria-"<<endl;
     	na = na +1;
     	califa = califa + calif;
     	
	 }
	 
	 if(calif<6){
	 	
	 	cout<<"-Calificación reprobatoria-"<<endl;
	 	nr = nr +1;
	 	califr = califr + calif;
	 	
	 }
	}
	cout<<"La suma de las calificaciones aprobatorias es: "<<califa<<endl;
	
	cout<<"La suma de las calificaciones reprobatorias es: "<<califr<<endl;
	cout<<" "<<endl;
	
	cout<<"El número de aprobados es "<<na<<" y su promedio es: "<< (califa / numcal) <<endl;
	
	cout<<"El número de reprobados es "<<nr<<" y su promedio es "<< (califr / numcal) <<endl;
	cout<<" "<<endl;
	
	
//	cout<<"La calificación mayor es: "<<nM<<endl;

//	cout<<"La calificación menor es: "<<nm<<endl;
	cout<<" "<<endl;
	
	cout<<"El porcentaje de alumnos aprobados es: "<<(califa /numcal)*100<<"%"<<endl;
	
	cout<<"El porcentaje de alumnos reprobados es: "<<(califr/numcal)*100<<"%"<<endl;
    cout<<" "<<endl;
    
    
    
    getch ();
    return 0;
}

