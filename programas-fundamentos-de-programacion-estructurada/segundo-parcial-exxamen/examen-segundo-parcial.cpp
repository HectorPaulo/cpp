
#include <cstdlib>
#include <ctime>	

using namespace std;
void portada ();
void indice ();
void pagina1 ();
void pagina2 ();
void pagina3 ();
void pagina4 ();
void pagina5 ();


int main () {
	
	setConsoleSize(120,28);
	portada ();
	
	

	
	
	
	
	
	return 0;
}

void portada () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");

	color (10);
	marcoxy(27,119,0,0);
	color (192);
	centrarStr("Examen segundo parcial", 10);
	centrarStr("Alumno: Daniel Yosef Santiago Garcia", 12);
	centrarStr("Asignatura:", 14);
	centrarStr("Fundamenos de Programacion Estructurada", 15);
	
	color (128); posxy (2,23); cout << "Presione '1' para ver el indice: [ ]";
	int n;
	posxy (36,23); cin >> n;
	
	if (n== 1) {
		indice ();
	}
	
}

void indice () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	
	color (10);
	marcoxy(27,119,0,0);
	color (224);
	centrarStr ("Bienvenido al indice del examen del segundo parcial.",2);
	centrarStr ("A continuacion se presentan los programas elaborados: ",3);
	
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
			pagina1();
			
			break;
		
		case 2:
			pagina2();
			break;
		
		case 3:
			
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
	
	color (128); posxy(1,25); cout << "Presiona presiona 1 para regresar al indice, o 2 para avanzar al siguiente programa: [ ]";
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	else if (opcionPagina == 2) {
		pagina2 ();
	}
}

void pagina2 () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	posxy(1,3);cout << "Escogiste el programa 2: ";
	
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

void pagina3 () {
	
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	posxy(1,3);cout << "Escogiste el programa 3: ";
	
	color (128); posxy(1,25); cout << "Presiona presiona 1 para regresar al indice, o 4 para avanzar al siguiente programa: [ ]";
	int opcionPagina;
	posxy(87,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	else if (opcionPagina == 4) {
		pagina4();
	}
	
}

void pagina4 () {
	color (15);
	setConsoleSize(120,28);
	system ("cls");
	color (10);
	marcoxy(27,119,0,0);
	
	posxy(1,3);cout << "Escogiste el programa 4: ";
	
	color (128); posxy(1,25); cout << "Presiona presiona 1 para regresar al indice, o 5 para avanzar al siguiente programa: [ ]";
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
	
	posxy(1,3);cout << "Escogiste el programa 5: ";
	
	color (128); posxy(1,25); cout << "Presiona presiona 1 para regresar al indice: [ ]";
	int opcionPagina;
	posxy(47,25); cin >> opcionPagina;
	
	if (opcionPagina == 1) {
		indice ();
	}
	
	
	
}



