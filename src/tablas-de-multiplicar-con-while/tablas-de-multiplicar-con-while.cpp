#include<iostream>
using namespace std;

int main() {
	int i;
	int n;
	n = 1;
	cout << "este es un programa que imprime las 10 tablas de multiplicar" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Las tablas de multiplicar son:" << endl;
	while (n<=10) {
		i = 1;
		while (i<=10) {
			cout << n << " x " << i << " = " << n*i << endl;
			i = i+1;
		}
		cout << " " << endl;
		n = n+1;
	}
	return 0;
}

