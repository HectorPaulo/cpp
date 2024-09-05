#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(void){
    setlocale(LC_ALL, "");


using namespace std;

    int opcion;
    char respuesta;

    do {
        system("cls");
        cout<<"------------------------------------------------------------------------------------------"<<endl;
        cout << "Menu:" << endl;
        cout<<" "<<endl;
        cout << "1. Ecuación de la pendiente." << endl;
        cout << "2. Índice de masa corporal." << endl;
        cout << "3. Múltiplos" << endl;
        cout << "4. Números primos." << endl;
        cout << "5. Salir" << endl;
        cout<<"------------------------------------------------------------------------------------------"<<endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	
                double a, b, c, pendiente;

			    cout << "Introduzca el coeficiente a: ";
			    cin >> a;
			
			    cout << "Introduzca el coeficiente b: ";
			    cin >> b;
			
			    cout << "Introduzca el coeficiente c: ";
			    cin >> c;
			
			    pendiente = -a/b;
			
			    cout << "La pendiente de la recta es: " << pendiente << endl;
				
                break;
            case 2:
            	
            	float estatura, masa, imc;
            	
                cout << "Índice de masa corporal." << endl;
                cout<<"------------------------------------------------------------------------------------------"<<endl;
                
                cout<<"Este es un programa que arroja su estado de IMC (Índice de masa corporal) a partir de datos ingresados."<<endl<<endl;
                cout<<"Ingresar su estatura en metros (m)."<<endl;
                cin>>estatura;
                
                cout<<" "<<endl;
                
                cout<<"Ingresar su masa corporal en kilos (kg).";
                cin>>masa;
                
                imc = (masa / (estatura*estatura));
                
                cout<<"Su Índice de masa corporal (IMC) es: "<<imc<<"."<<endl;
                
                if (imc < 18.5){
                	
                	cout<<"Tienes muy bajo peso, te invito a comer después de la uni"<<endl;
                	
				}
				
				if (imc >= 18.5 && imc <= 24.9 ){
					
					cout<<"Tienes muy buen peso, muy bien."<<endl;
					
				}
				
				if (imc >= 25 && imc <= 26.9){
					
					cout<<"Tienes sobrepeso grado I."<<endl;
					
				}
				
				if (imc >=27 && imc <= 29.9){
					
					cout<<"Tienes sobrepeso grado II."<<endl;
					
				}
				
				if (imc>=30 && imc <= 34.3){
					
					cout<<"Tienes obesidad de tipo I."<<endl;
					
				}
				
				if (imc >= 35 && imc <= 39.9){
					
					cout<<"Tienes obesidad de tipo II."<<endl;
				
				}
				
				if (imc >= 40 && imc <= 49.9){
					
					cout<<"Tienes obesidad tipo III (Mórbida)."<<endl;
					
				}
                
                if (imc > 50){
                	
                	cout<<"Tienes obesidad de tipo IV (Extrema), cuídate."<<endl;
                	
				}
                
                break;
            case 3:{
                
           
			    int num1, num2, suma = 0, num_elementos = 0, num_pares = 0, num_impares = 0, num_divisibles_3 = 0;
			
			    cout << "Introduzca el primer número: ";
			    cin >> num1;
			
			    cout << "Introduzca el segundo número: ";
			    cin >> num2;
			
			    for (int i = num1; i <= num2; i += num1) {
			        suma += i;
			        num_elementos++;
			
			        if (i % 2 == 0) {
			            num_pares++;
			        } else {
			            num_impares++;
			        }
			
			        if (i % 3 == 0) {
			            num_divisibles_3++;
			        }
			    }
			
			    cout << "Suma: " << suma << endl;
			    cout << "Número de elementos: " << num_elementos << endl;
			    cout << "Pares: " << num_pares << endl;
			    cout << "Impares: " << num_impares << endl;
			    cout << "Divisibles entre 3: " << num_divisibles_3 << endl;

                break;
            }
            
            case 4:{
				
                cout << "Números primos." << endl;
                
                
			    int num = 1;
			
			    while (num != 0) {
			        cout << "Introduzca un número (0 para salir): ";
			        cin >> num;
			
			        if (num == 0) {
			            break;
			        }
			
			        bool es_primo = true;
			
			        for (int i = 2; i < num; i++) {
			            if (num % i == 0) {
			                es_primo = false;
			                break;
			            }
			        }
			
			        if (es_primo) {
			            cout << num << " es primo." << endl;
			        } else {
			            cout << num << " no es primo." << endl;
			        }
			
			    }
                
                break;
                
            }
            
            case 5:
                cout << "Programa terminado." << endl;
                return 0;
            default:
                cout << "Opcion invalida. Seleccione una opcion valida." << endl; 
                break;
        }

        cout << "Desea ver el menu de nuevo? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');
	
	getch ();
    return 0;
}
