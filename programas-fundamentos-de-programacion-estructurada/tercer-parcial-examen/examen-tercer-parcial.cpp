#include "paulo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
void portada ();
void indice ();
void pagina1 ();
void pagina2 ();
void pagina3 ();
void pagina4 ();
void pagina5 ();
void pagina6 ();
void pagina7 ();

int main () {
	
	setConsoleSize(120,28);
	portada ();
	
	return 0;
}

void portada () {
	
	color (10);
	setConsoleSize(120,28);
	system ("cls");
	
	marcoxy(5,119,0,0);
	centrarStr("UNIVERSIDAD LA SALLE OAXACA",2);
	color (12);
	marcoxy(27,119,1,4);
	color (12);
	centrarStr(" EXAMEN PARCIAL II", 5);
	centrarStr("===========================", 6);
	centrarStr("Ingeniería en Software & Sistemas Computacionales.", 7);
	centrarStr("Segundo Semestre", 8);
	centrarStr("Fundamenos de Programacion Estructurada en C++.", 10);
	centrarStr("Marzo, 2023",11);
	centrarStr("Almuno: Hector Adrian Paulo Vazquez", 12);
	centrarStr("Profesor: Dr. Carlos Miguel.",13);
	centrarStr("Ejercicio 1",15);
	centrarStr("Portada con valor de dos puntos en el examen.",16);
	
	color (12); posxy (2,20); cout << "Presione '0' para ver el indice: [ ]";
	int n;
	posxy (36,20); cin >> n;
	
	if (n== 0) {
		indice ();
	}
	
}

void indice () {
	
	color (10);
	setConsoleSize(120,28);
	system ("cls");
	
	color (10);
	marcoxy(27,119,0,0);
	color (224);
	centrarStr ("Indice del Examen",2);
	centrarStr ("A continuacion se presentan los programas elaborados: ",3);
	
	posxy(1,11);cout<< "0. Terminar programa:";
	posxy(1,5);cout << "1. Programa 1: ";
	posxy(1,6);cout << "2. Programa 2: ";
	posxy(1,7);cout << "3. Programa 3: ";
	posxy(1,8);cout << "4. Programa 4: ";
	posxy(1,9);cout << "5. Programa 5: ";
	posxy(1,10);cout<< "6. Portada";
	
	color (128); posxy(1,24); cout << "Escoge una opcion: [ ]";
	
	int opcion;
	
	posxy(21,24);cin >> opcion;
	
	switch (opcion) {
		
		case 1:
			system("cls");
			pagina1();
			marcoxy(27,119,0,0);
			
			break;
		
		case 2:
			system("cls");
			pagina2();
			marcoxy(27,119,0,0);
			
			break;
		
		case 3:
			pagina3 ();
			break;
			
		case 4:
			pagina4 ();
			break;
			
		case 5:
			pagina5();
			break;
		
		case 6:
			portada();
			break;
		
		default:
		
		terminarPrograma();	
		
	}	
}

void pagina1 () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	posxy(1,3);cout << "Escogiste el programa 1: ";
	centrarStr("Menu de Opciones",3);
	centrarStr("==================",4);
	centrarStr("1. Ejercicio 3.",6);
	centrarStr("2. Ejercicio 4.",8);
	centrarStr("0. Ejercicio 5. (Salir)",10);
	
	color (128); posxy(1,25); cout << "Presiona 0 para regresar al indice, o el numero de la opcion que guste: ";
	color (128); posxy(1,23); cout << "Presiona 3 para ir al ejercicio siguiente: ";
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if(opcionPagina == 3){
		pagina2 ();
	}
	if (opcionPagina == 1) {
		
		pagina3 ();
	}
	if (opcionPagina == 2) {
		
		pagina4 ();
	}
	if (opcionPagina == 0) {
		
		indice ();
	}
	if (opcionPagina == 2) {
		
		color (12);
		setConsoleSize(120,28);
		system("cls");
		color (10);
		marcoxy(27,119,0,0);
		
		centrarStr("Haz elegido el ejercicio 4. (opcion 2)",1);
		color (128); posxy(1,25); cout << "Presiona 0 para regresar al indice o 1 para el menu anterior: ";
		int opcionPagina;
		posxy(87,25); cin>>opcionPagina;
	}		
}

void pagina2() {
	string oracion;

	color(15);
	setConsoleSize(120, 28);
	system("cls");
	color(10);
	marcoxy(27, 119, 0, 0);

	centrarStr("CADENA DE CARACTERES.", 3);
	centrarStr("=====================", 4);

	for (int i = 0; i < 3; i++) {
		posxy(3, 6); cout << "inserte alguna oracion: ";
		getline(cin, oracion);
		posxy(27, 6 + i * 2); cout << oracion;
	}

	color(128); posxy(1, 25); cout << "Presiona 1 para regresar al indice, o 3 para avanzar al siguiente programa: ";
	int opcionPagina;
	posxy(87, 25); cin >> opcionPagina;

	if (opcionPagina == 1) {
		indice();
	}

	else if (opcionPagina == 3) {
		pagina3();
	}
}


void pagina3 () {
	
	color (12);
	setConsoleSize(120,28);
	system ("cls");
	color (12);
	marcoxy(27,119,0,0);
	
	posxy(1,1);cout << "EJERCICIO 4: ";
	
	int n;
	posxy(2,2);cout << "Inserte el numero de alumnos:"<<endl<<endl;
	posxy(2,3);cin >> n;
	cin.ignore();
	
	string alumnos [n];
	
	
	for (int i=0; i<n; i++) {
		system ("cls");
		marcoxy(27,119,0,0);
		posxy(2,2);cout<< "Ingresa el nombre del alumno: "<<endl;
		posxy(2,3); getline (cin, alumnos[i]);
	}
	
	float examen[n], tareas[n];
	for (int i=0; i<n; i++) {
		system ("cls");
		marcoxy(27,119,0,0);
		posxy(2,2); cout<< "Dame la calificacion del examen de: " << alumnos[i];
		posxy(2,3);
		cin >> examen[i];
		posxy(2,4); cout << "Dame la calificacion de las tareas de: " << alumnos[i];
		posxy(2,5);
		cin >> tareas[i];
		
	}	
	system ("cls");
	float calificacion;
		marcoxy(27,119,0,0);
			posxy(5,5); cout << "Nombre";
			posxy(35,5); cout << "Examen";
			posxy(45,5); cout << "Tareas";
			posxy(55,5); cout << "Calificacion";
	
		for (int i=0; i<n; i++) {
			
			calificacion = examen[i] + tareas [i];
			posxy(5,6+i); cout << alumnos[i];
			posxy(35,6+i); cout << examen [i];
			posxy(45,6+i); cout << tareas[i];
			posxy(55,6+i); cout << calificacion;
		}		
	color (128); posxy(1,25); cout << "Presiona presiona 1 para regresar al indice, o 3 para avanzar al siguiente programa: [ ]";
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	
	else if (opcionPagina==3) {
		pagina3();
	}
}

void pagina4 () {
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	posxy(1,3);cout << "Escogiste el programa 4: ";
	
	color (128); posxy(1,25); cout << "Presiona 0 para regresar al indice, o 5 para avanzar al siguiente programa: ";
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	else if (opcionPagina== 5) {
		pagina5();
	}	
}

void pagina5 () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	centrarStr("FIN DELEXAMEN!!! ",15);
	
	system("color 70");
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	else if (opcionPagina== 5) {
		pagina5();
	}
	}	

