#include "paulo.h"
using namespace std;

 

struct listaNodo{  //Definición de la estructura
    int dato;       //Parte del nodo que contiene el dato
    struct listaNodo *next; //El apuntador al sucesor de cada nodo
};

 

typedef struct listaNodo LISTANODO; //Se crea el alias LISTNODE para el tipo struct listNode
typedef LISTANODO *apuntador_LISTANODO;

 

//Definición de funciones para insertar, eliminar y buscar
void insertar(apuntador_LISTANODO *,int); //insertar valor en lista
int eliminar (apuntador_LISTANODO * inicio, int valor); //eliminar valor
void imprimir(apuntador_LISTANODO);  //Imprimir lista
void buscar (apuntador_LISTANODO *, int);
 

int main()
{
    system("color 70");
    apuntador_LISTANODO lista=NULL;
    insertar(&lista,10);
    insertar(&lista,2);
    insertar(&lista,50);
    insertar(&lista,5);
    imprimir(lista);
    buscar(lista,5);
    return 0;
}

 

void insertar(apuntador_LISTANODO *inicio, int valor)
{
    
    apuntador_LISTANODO nuevo,previo,actual;
    nuevo=new LISTANODO();
    nuevo->dato = valor;
    nuevo->next=NULL;
    previo=*inicio;
    actual=*inicio;
        if (actual==NULL) { //Se verifica si la lista está vacia
            *inicio=nuevo;
        } 
       else {
            if (valor<actual->dato) { //Si se inserta el nuevo nodo al principio 
                nuevo->next=*inicio;
                *inicio=nuevo;
            } 
            else {
                    actual=*inicio;
                    previo=*inicio;
                while (actual->next!=NULL && valor>=actual->dato) { //Recorre los apuntadores
                    previo=actual;
                    actual=actual->next;
                }
                if (valor>=actual->dato) {//Se inserta al final
                    actual->next=nuevo;
                } else {
                    nuevo->next=actual;  //Se inserta en medio
                    previo->next=nuevo;
                }
            }
        }
    }

 


void imprimir(apuntador_LISTANODO actual)
{
    if(actual==NULL){
        cout<<"La lista esta vacia"<<endl;
    }
    else{
        cout<<"La lista es:\t"<<endl;
        while(actual!=NULL){
            cout<<"-->"<<actual->dato<<endl;
            actual=actual->next;
        }
        cout<<"NULL"<<endl;
    }
}



int eliminar (apuntador_LISTANODO * inicio, int valor)
{
    apuntador_LISTANODO previo, actual, temporal;
    if (valor == (*inicio) ->dato) {
        temporal = *inicio;
        *inicio=(*inicio)->next;
        delete temporal;
        return valor;
    }
    else
    {
        previo = *inicio;
        actual=(*inicio)->next;
        while(actual!=NULL && actual->dato!=valor) {
            previo=actual;
            actual=actual->next;
        }
        if (actual!=NULL){
            temporal = actual;
            previo->next = actual->next;
            delete temporal;
            return valor;
        }
        else {
            cout << "No se encontro" << endl;
        }
    }
    return 0;
}





void buscar (apuntador_LISTANODO * inicio, int valor){
    apuntador_LISTANODO actual;
    actual = new LISTANODO();
    int bandera = 0;
    actual = *inicio;
    while(actual != NULL && valor == actual -> dato){
        if (actual -> dato == valor){
            bandera=1;
        }
        actual=actual->next;
    }
    if(bandera == 0){
        cout<<"Elemento no encontrado"<<endl;
    }
    else{
        cout<<"Elemento encontrado"<<valor<<endl;
    }
}