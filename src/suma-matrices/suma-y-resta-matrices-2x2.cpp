#include<iostream>
using namespace std;

int main() {
	float a1;
	float a2;
	float b1;
	float b2;
	float c;
	float c1;
	float c2;
	float x;
	float y;
	float yc;
	cout << " " << endl;
	cout << "Autoría de Héctor Paulo, prohibida su distribución" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Insertar sistema de ecuaciones 2x2 de la forma" << endl;
	cout << "A1x + B1y = C1" << endl;
	cout << "A2x + B2y = C2" << endl;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de A1" << endl;
	cin >> a1;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de B1" << endl;
	cin >> b1;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de C1" << endl;
	cin >> c1;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de A2" << endl;
	cin >> a2;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de B2" << endl;
	cin >> b2;
	cout << " " << endl;
	cout << "Insertar el valor de la constante de C2" << endl;
	cin >> c2;
	cout << " " << endl;
	c = ((a2)*(a1+b1))+((-a1)*(a2+b2));
	x = c;
	y = (c1-(b1*x))/(a1);
	cout << " " << endl;
	cout << " " << endl;
	cout << "La variable x es igual a" << endl;
	cout << x << endl;
	cout << " " << endl;
	cout << "La variable y es igual a" << endl;
	cout << y << endl;
	return 0;
}

