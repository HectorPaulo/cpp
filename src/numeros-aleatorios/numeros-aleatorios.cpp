#include <iostream>
#include <cstdlib>
#include <ctime>//en c++

using namespace std;

int main(){
	
	int valor;
	srand(time(NULL));
	valor = 1 + rand() % 100; //genera un valor entre 1 y 100
	cout<<"genera un valor entre 1 y 100  1 + rand() % 100 "<<valor<<endl;
	valor = 25 + rand() % 100; //genera un valor entre 25 y 124
	cout<<"Genera un valor entre 25y 124   25 + rand() % 100 "<<valor<<endl;
	valor = rand() % 51;
	cout<<"Genera un valor entre 0 y 50   rand() % 51  "<<valor<<endl;
	system("pause");
	return 0;
	}
