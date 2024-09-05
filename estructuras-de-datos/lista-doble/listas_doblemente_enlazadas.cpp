#include <iostream>
#include<stdlib.h>
using namespace std;

 //--------------------------------------------------------------------DECLARACIÓN DE ESTRUCTURAS-------------------------------------------------------------------------------


struct listaNodo{  //Definición de la estructura
    int dato;       //Parte del nodo que contiene el dato
    struct listaNodo *next; //El apuntador al sucesor de cada nodo
    struct listaNodo *before; //El apuntador al sucesor de cada nodo
};

  
typedef struct listaNodo LISTANODO; //Se crea el alias LISTNODE para el tipo struct listNode
typedef LISTANODO *apuntador_LISTANODO;

  //---------------------------------------------------------------------DECLARACIÓN DE FUNCIONES-------------------------------------------------------------------------------

//Definición de funciones para insertar, eliminar y buscar
void insertar(apuntador_LISTANODO *,int); //insertar valor en lista
void imprimir(apuntador_LISTANODO);  //Imprimir lista
int eliminar(apuntador_LISTANODO *,int); //eliminar valor de lista
void imprimir_anterior (apuntador_LISTANODO *inicio, int valor);
void imprimir_siguiente (apuntador_LISTANODO *inicio, int valor);

  //------------------------------------------------------------------------------MAIN-------------------------------------------------------------------------------

int main()
{
    apuntador_LISTANODO lista=NULL;
    insertar(&lista,2);
    insertar(&lista,5);
    insertar(&lista,10);
    insertar(&lista,7);
    imprimir(lista);
    eliminar(&lista,5);
    imprimir(lista);
    return 0;
}

//------------------------------------------------------------------------------BUSCAR-------------------------------------------------------------------------------

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

 //------------------------------------------------------------------------------INSERTAR-------------------------------------------------------------------------------

void insertar(apuntador_LISTANODO *inicio, int valor)
{
    
    apuntador_LISTANODO nuevo,previo,actual;
    nuevo=new LISTANODO();
    if(nuevo!=NULL){
        nuevo->dato=valor;
        nuevo->next=NULL;
        nuevo->before=NULL;
        previo=NULL;
        actual=*inicio;
        while(actual!=NULL && valor>actual->dato){
            previo=actual;
            actual=actual->next;
        }
        
        if(previo==NULL){  //Al principio
            nuevo->next= *inicio;

 

            if(actual!=NULL)
            {
                actual->before=nuevo;
            }
            nuevo->before=NULL;
            *inicio=nuevo;
        }
        else{
            previo->next=nuevo; //Final o medio
            nuevo->next=actual;
     
            if(actual!=NULL)
            {
                actual->before=nuevo;
            }
                   nuevo->before=previo;
            }
        
    
        
    }else{
        cout<<valor<<"No insertado"<<endl;
    }
}

 
//--------------------------------------------------------------------------------IMPRIMIR-------------------------------------------------------------------------------



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

 
 //------------------------------------------------------------------------------ELIMINAR-------------------------------------------------------------------------------



int eliminar(apuntador_LISTANODO *inicio, int valor)
{
    apuntador_LISTANODO previo, actual, temporal;
    if(valor==(*inicio)->dato){
        temporal=*inicio;
        *inicio=(*inicio)->next;
        (*inicio)->before=NULL;
        delete temporal;
        return valor;
    }
    else
    {
        previo=*inicio;
        actual=(*inicio)->next;
        while(actual!=NULL && actual->dato!=valor){
            previo=actual;
            actual=actual->next;
        }
        if(actual!=NULL){
            temporal=actual;
            previo->next=actual->next;
            (actual->next)->before=previo;
            delete temporal;
            return valor;
        }
        else
        {
            cout<<"No se encontro"<<endl;
        }
    }
    return 0;
}

 //------------------------------------------------------------------------------IMPRIMIR ANTERIOR-------------------------------------------------------------------------------


void imprimir_anterior (apuntador_LISTANODO *inicio, int valor){
    
        apuntador_LISTANODO previo, actual;
        if(valor == (*inicio)->dato){

            cout << "El valor: " << valor << "No tiene elemento anterior" << endl;

        }
        else{

            previo = *inicio;
            actual = (*inicio) -> next;
            while (actual != NULL && actual-> dato != valor){

                previo = actual;
                actual = actual -> next;

        }

        if (actual != NULL){

            cout << "El anterior de " << valor << " es: " << (actual -> before) -> dato << endl;

        }

        else{
            cout << "No existe el valor de " << valor << endl;
        }

    }
}

 //------------------------------------------------------------------------------IMPRIMIR SIGUIENTE-------------------------------------------------------------------------------


void imprimir_siguiente (apuntador_LISTANODO *inicio, int valor){
    
    apuntador_LISTANODO previo, actual;
    if(valor == (*inicio)->dato){

        cout << "El valor " << valor << "Tiene un valor siguiente " << (actual->next) -> dato << endl;
    }

    else{
            previo = *inicio;
            actual = (*inicio) -> next;
            while (actual != NULL && actual-> dato != valor){
                previo = actual;
                actual = actual -> next;
            }

            if (actual != NULL){
                cout << "El siguiente de: " << valor << " es " << (actual -> next) -> dato << endl;
        }

        else{

            cout << "No existe el valor de " << valor << endl;

        }


    }


}

//------------------------------------------------------------------------------BUSCAR SIGUIENTE-------------------------------------------------------------------------------

void buscarsiguiente(apuntador_LISTANODO *inicio, int valor) {
    if (*inicio==NULL) {
        cout<<"La lista esta vacia"<<endl;
        return;
    }

 

    apuntador_LISTANODO previo, actual;
    previo=NULL;
    actual=*inicio;

 

    while (actual!=NULL && actual->dato!=valor) {
        previo = actual;
        actual = actual->next;
    }

 

    if (actual!=NULL) {
        if (actual->next !=NULL) {
            cout<<"El valor siguiente de "<<actual->dato<<" es "<<(actual->next)->dato<<endl;
        } else {
            cout<<"No hay valor siguiente"<<endl;
        }
    } else {
        cout<<"No existe el valor "<<valor<<" en la lista"<<endl;
    }
}

apuntador_LISTANODO nuevo, previo, 