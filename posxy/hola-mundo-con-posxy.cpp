#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;
void posxy (int, int);
void delay(int secs);
int main(){
	
	char c;
		
	system("color 30");
	c = 201;
	posxy (1,1);cout<<c;
	c = 187;
	posxy (80, 1); cout<<c;
	c = 200;
	posxy (1, 24); cout<<c;
	c = 188;
	posxy (80, 24); cout<<c;
	
	c= 205;
	for (int i=2;i<80;i++){
		posxy (i, 1);cout<<c;
		posxy (i, 24);cout<<c;
	}
	posxy(5, 15);cout<<c;
	posxy(5, 5); cout<<"Hola, Mundo"<<endl<<endl;
	c = 64;
	posxy (10, 15);cout<<c<<endl<<endl;
	
	posxy(10, 10); cout<<"sí"<<endl;
	
	c = 186;
	for (int i=2; i<24;i++){
		posxy (1, i); cout<<c;
		posxy (80, i); cout<<c;
	}
	
	
	getch();
	

	return 0;
}

void posxy (int x, int y){
	COORD coordenada;
	coordenada.X=x;
	coordenada.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordenada);
}

void delay(int secs){
	for(int i = (time(NULL) + secs); time (NULL) != i; time(NULL));
}
