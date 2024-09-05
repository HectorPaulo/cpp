
#include <iostream>
#include <conio.h>
#include "marcopaulo.h"

using namespace std;

int main(){
	system("color 70");
	 int opcion;
    char respuesta;
	
    do {
        system("cls");
        
        marcopaulo(29,110,0,0);
        
        posxy(4,4);cout<<"Autoria de Paulo.";
        posxy(44, 2); cout << "*Encabezado intimidador*" << endl << endl;
        
        posxy(50, 6);cout << "0. Salir." << endl;
        posxy(50, 8);cout << "1. Pagina 1." << endl;
        posxy(50, 10);cout << "2. Pagina 2." << endl;
        posxy(50, 12);cout << "3. Pagina 3." << endl;
        posxy(50, 14);cout << "4. Pagina 4." << endl;
        posxy(50, 16);cout << "5. Pagina 5." << endl;
        posxy(50, 18);cout << "6. Pagina 6." << endl;
        posxy(50, 20); cout << "7. Pagina 7." << endl;
        posxy(50, 22);cout << "8. Pagina 8 ." << endl;
        posxy(50, 24);cout << "9. Pagina 9." << endl;
        posxy(50, 26);cout << "10. Pagina 10." << endl;

        posxy(60, 90);cout <<"|     Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
   
            case 0:{
                cout << "Programa terminado." << endl;
                return 0;
            default:
                posxy(45, 50);cout << "Opcion invalida. Seleccione una opcion valida." << endl; 
                break;
        	} //salir
        
            case 1:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
		        //posxy(61,2);cout<<" ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					posxy(65,2);cout<< "xd";
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 1
            case 2:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 2
            case 3:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 3
            
            case 4:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 4
            
            
            case 5:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }// case 5
            
            
            case 6:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 6
            
            
            case 7:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 7
            
            
            case 8:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 8
            
            
            case 9:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 9
            
            
            case 10:{
            	
            	system("cls");
        
		        marcopaulo(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcopaulo(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcopaulo(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcopaulo(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 10
			 
		        posxy(60, 90);cout << "Desea ver el menu de nuevo? (s/n): ";
	        	cin >> respuesta;
            
        
    } //switch
	        posxy(60, 90);cout << "Desea ver el menu de nuevo? (s/n): ";
	        cin >> respuesta;
	
	} while (respuesta == 's' || respuesta == 'S'); //fin do while
	
	getch();
	return 0;
} //int main(){}
