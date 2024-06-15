#include <iostream>
#include<stdlib.h>
using namespace std;

 

struct listaNodo{  //Definición de la estructura
    int dato;       //Parte del nodo que contiene el dato
    struct listaNodo *next; //El apuntador al sucesor de cada nodo
    struct listaNodo *before; //El apuntador al anterior a cada nodo
    
};

 

typedef struct listaNodo LISTANODO; //Se crea el alias LISTNODE para el tipo struct listNode
typedef LISTANODO *apuntador_LISTANODO;

 

//Definición de funciones para insertar, eliminar y buscar
void insertar(apuntador_LISTANODO *,int); //insertar valor en lista
void imprimir(apuntador_LISTANODO *);  //Imprimir lista
void imprimir_anterior(apuntador_LISTANODO *,int);  //Imprimir lista
void imprimir_siguiente(apuntador_LISTANODO *,int);  //Imprimir lista
int eliminar(apuntador_LISTANODO *,int); //eliminar valor de lista
void buscar(apuntador_LISTANODO *,int);  //Imprimir lista

 

int main()
{
    apuntador_LISTANODO lista=NULL;
    insertar(&lista,7);
    insertar(&lista,5);
    insertar(&lista,10);
    insertar(&lista,2);
    insertar(&lista,1);
    insertar(&lista,6);
    insertar(&lista,15);
    imprimir(&lista);
    eliminar(&lista,1);
    imprimir(&lista);
    eliminar(&lista,15);
    imprimir(&lista);
    eliminar(&lista,6);
    imprimir(&lista);
    return 0;
} 