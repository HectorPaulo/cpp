#include <iostream>
using namespace std;

int main() {
	
	float numtotal, alumap, alumre, poralumap, poralumre;
	
	cout << "Este es un algoritmo que muestra el porcentaje de alumnos aprobados y reprobados" << endl;
	cout << endl;
	
	cout << "Ingresar el número total de alumnos: ";
	cin >> numtotal;
	cout << endl;
	
	cout << "Ingresar el número de alumnos con calificación reprobatoria: ";
	cin >> alumre;
	cout << endl;
	
	cout << "Ingresar número de alumnos con calificación aprobatoria: ";
	cin >> alumap;
	cout << endl;
	
	poralumre = (alumre * 100) / numtotal;
	
	cout << "El porcentaje de alumnos reprobados es: " << poralumre << "%" << endl;
	cout << endl;

	poralumap = (alumap * 100) / numtotal;
	
	cout << "El porcentaje de alumnos aprobados es: " << poralumap << "%" << endl;
	cout << endl;
	
	cout << "Buen día" << endl;

	return 0;
}