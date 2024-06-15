#include <iostream>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <fstream>

using namespace std;

void burbujaCar(char[50]);
void burbujaNom(string, string, string, string, string);
void minusculas(char[100]);
void posxy (int, int);
void marco (int, int, int, int);
void centra(string, int );
void color(int);
int burbujaNum(int, int, int, int, int);
string substr (string, int, int);
int strToint(string);
void marcomatriz(int, int, int, int);
void marcoxy(int, int , int , int );
float  strTofloat(string);
string floatTostr(float);
int entero(float valor);
float decimal(float valor);
string lPad(string,char,int);
string rPad(string,char,int);


void marcoxy(int filas, int columnas, int x, int y) {
    char c;
    for(int j=y; j<=(filas*2+y); j=j+2) {
        for(int i=x; i<=(columnas*15+x); i++) {
            c = 196;
            posxy(i,j);
            cout << c;
        }
    }
    for(int j=y; j<=(filas*2+y); j++) {
        for(int i=x; i<=(columnas*15+x); i=i+15) {
            c = 179;
            posxy(i,j);
            cout << c;
        }
    }
    c = 218; // esquina superior izquierda
    posxy(x,y);
    cout << c;
    c = 192; // esquina inferior izquierda
    posxy(x,y+(filas*2));
    cout << c;
    c = 191; // esquina superior derecha
    posxy(columnas*15+x,y);
    cout << c;
    c = 217; // esquina inferior derecha
    posxy(columnas*15+x, filas*2+y);
    cout << c;
    for(int j=1; j<(filas); j++) {
        for(int i=1; i<(columnas); i++) {
            // esquina superior
            c = 194;
            posxy(i*15+x, y);
            cout << c;
            // esquina inferior
            c = 193;
            posxy(i*15+x, filas*2+y);
            cout << c;
            // intersecciones
            c = 197;
            posxy(i*15+x, j*2+y);
            cout << c;
            // esquinas izquierda
            c = 195;
            posxy(x, j*2+y);
            cout << c;
            // esquina derecha
            c = 180;
            posxy(columnas*15+x, j*2+y);
            cout << c;
        }
    }
}





void marcomatriz(int x, int y, int filas , int columnas){
	char c;
	for(int j=y;j<=(filas*2+y); j=j+2){
		for(int i=x; i<=(columnas*10+x); i++){
			
		c=196;
		posxy(i,j);cout<<c;
		}
	}		
	for(int j=y;j<=(filas*2+y); j++){
	for(int i=x; i<=(columnas*10+x); i=i+10){
		
		c=179;
		posxy(i,j);cout<<c;
 }
	}	
	c=218;
	posxy(x,y);cout<<c;
	c=192;
	posxy(x,y+(filas*2));cout<<c;
	c=191;
	posxy(columnas*10+x,y);cout<<c;
	c=217;
	posxy(columnas*10+x, filas*2+y);cout<<c;
	
	
	for(int j=(1);j<(filas); j++){
		for(int i=(1); i<(columnas); i++){
	
			c=194;
			posxy(i*10+x,y );cout<<c;
			
			c=193;
			posxy(i*10+x, filas*2+y );cout<<c;	
		
			c=197;
			posxy(i*10+x, j*2+y );cout<<c;
		
			c=195;
			posxy(x,j*2+y);cout<<c;
			
			c=180;
			posxy(columnas*10+x, j*2+y );cout<<c;
		}		
	}		
	}

void marco (int x, int y, int col, int ren){
	
	char c;
	

	int colum=x+col;
	int rengl=y+ren;
	
	c=201;
	posxy(x, y);cout<<c;
	c=187;
	posxy(colum, y);cout<<c;
	c=200;
	posxy(x,rengl);cout<<c;
	c=188;
	posxy(colum,rengl);cout<<c;
	
	c=205;
	for (int i=x+1; i<colum; i++){
	posxy(i,y);cout<<c;
	posxy(i,rengl);cout<<c;
		
	}
	
	c=186;
	for (int i=y+1; i<rengl; i++){
	posxy(x,i);cout<<c;
	posxy(colum,i);cout<<c;
		
	}

}

void centra(string texto, int y){
	int nlen=texto.length();
	posxy(39-(nlen/2),y);cout<<texto;
}


void color(int x){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}


int strToint(string texto){
	const char *valor=texto.c_str();	
	int result=atoi(valor);
	return result;
}


string substr (string texto, int npos, int num){
	string result="";
	int nlen=texto.length();
	const char* cad=texto.c_str();
		
	for (int i=npos-1;i<(npos-1+num);i++){
		if (i<nlen)result+=cad[i];
	}
	return result;
}

int burbujaNum (int a, int b, int c, int d, int e){
 	int i, j, aux;
	int numeros[5]={a,b,c,d,e};
	for (i=0; i<5; i++){
		for (j=0;j<5;j++){
			if (numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}	
	}
	cout<<"Este es el orden de menor a mayor: ";
	for (i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
return 0;
 }
 
 void burbujaCar(char car[50]){
 	

 	for (int i=0; i<=49; i++){
		for (int j=65; j<=90; j++){
			if (car[i]==j){
				car[i]=j+32;
			}
		}
		}
		
	sort(car, car+50);
	
	for (int i=0; i<=49; i++){
		posxy(2+i,2);cout<<car[i];
	}
 }
 
 void burbujaNom(string a, string b, string c, string d, string e){
 	string nombres[5]={a,b,c,d,e};
 	
	 
    sort(nombres, nombres+5);
	posxy(3,3);cout<<"Ordenados alfabeticamente:";
    for(int i=0; i<5;i++){
    	posxy(3,5+i);cout<<nombres[i];
    }
 	
 }
 
void minusculas(char cadena[100]){
	
	for (int i=0; i<=99; i++){
		for (int j=65; j<=90; j++){
			if (cadena[i]==j){
				cadena[i]=j+32;
			}
		}
			
}
posxy(3,3);cout<<cadena;
	
}


void posxy (int x, int y){
	COORD coordenada;
	coordenada.X=x;
	coordenada.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordenada);
}

float  strTofloat(string cadena){
    float valor;
       stringstream paso(cadena);
       paso >> valor;

 

    if (!paso.fail()) {
        return valor;
    } else {
        cout << "La conversiÃ³n ha fallado." << endl;
        return 0;
    }

 

    
       return valor;
} 

string floatTostr(float valor) {
    char buffer[50];
    sprintf(buffer, "%.6f", valor);
    string cadena(buffer);
    return cadena;
}

 

int entero(float valor){

 

    int nEntero = static_cast<int>(valor);
    return nEntero;
}

 

float decimal(float valor){
 
    int nEntero=entero(valor);
    float nDecimal=valor-nEntero;
    return nDecimal;
}

string rPad(string texto,char chr,int n){
    string result=texto;
    int nlen=texto.length();
    for (int i=0;i<(n-nlen);i++) result+=chr;
    return result;
   
}

string lPad(string texto,char chr,int n){
    string result;
    int nlen=texto.length();
    for (int i=0;i<(n-nlen);i++) result+=chr;
	result+=texto;
    return result;
   
}