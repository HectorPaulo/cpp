#include <iostream>
#include <conio.h>

using namespace std;

struct lista {
    int dato;
    struct lista *next;
    struct lista *before;
};

typedef struct lista LISTA;
typedef LISTA *apuntador_lista;
void insertarAlFinal(apuntador_lista *inicio, int valor);
void imprimir(apuntador_lista actual);
void eliminar(apuntador_lista *inicio, int valor);

int main () {
    system ("cls");
    apuntador_lista nuevoNodo = NULL;    

    int totPag;
    cout << endl << "Ingrese la cantidad de Frames: " <<endl; 
    int Frames; cin >> Frames; 
    cout << "Digita la cantidad de paginas del proceso: "; cin >> totPag;
    cout << endl << "Ingrese el numero de pagina: "<<endl; 
    
    for (int i =1; i<=totPag; i++){
        int aux;
        cin >> aux;
        insertarAlFinal(&nuevoNodo,aux);
    }

    int vector [totPag]={-1,-1,-1}, PD=0, HIT=0;

    /// Int Frames = n;

    apuntador_lista actual =nuevoNodo;
    int posicionLista = 0; 
    int posicionReemplazo=0;
    system("cls");
    cout << "Matriz de paginacion: " << endl;
    while (actual != NULL) {
        bool encontrado = false;

        for (int j = 0; j < Frames; j++) { 
            if (vector[j] == actual->dato) {
                encontrado = true;
                HIT++;
                break;
            }
        }

        if (!encontrado) {
            if (posicionLista < Frames) { 
                vector[posicionLista] = actual->dato;
                PD++;
            } else {
                vector[posicionReemplazo] = actual->dato;
                PD++;
                posicionReemplazo = (posicionReemplazo + 1) % Frames; 
            }
            posicionLista++;
        }

        for (int j = 0; j < Frames; j++) { 
            cout << vector[j] << "  ";
        } 
        cout << endl;

        actual = actual->next;
    }

    float PageMiss = (static_cast<float>(PD)/static_cast<float>(totPag)) * 100.0f;
    float PageHit = (static_cast<float>(HIT)/static_cast<float>(totPag)) * 100.0f;
    cout << endl << "Hubo un total de " << PD << " Page Defaults"<<endl;
    cout << "Hubo un total de " << HIT << " Hits"<<endl;
    cout << "Page Miss: " << PageMiss <<"%" <<endl;
    cout << "Page Hit: " << PageHit<<"%";
    


    getch();
    return 0;
}

void insertarAlFinal(apuntador_lista *inicio, int valor) {
    apuntador_lista nuevo = new LISTA();
    if (nuevo != NULL) {
        nuevo->dato = valor;
        nuevo->next = NULL;

        if (*inicio == NULL) {
            nuevo->before = NULL;
            *inicio = nuevo;
        } else {
            apuntador_lista actual = *inicio;
            while (actual->next != NULL) {
                actual = actual->next;
            }
            actual->next = nuevo;
            nuevo->before = actual;
        }
    } else {
        cout << valor << " No insertado" << endl;
    }
}

void imprimir(apuntador_lista actual)
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

void eliminar(apuntador_lista *inicio, int valor) {
    apuntador_lista previo = NULL;
    apuntador_lista actual = *inicio;

    // Caso especial: lista vacía
    if (actual == NULL) { cout << "Lista vacia. No se puede eliminar." << endl;
        return;
    }
    // Buscar el nodo a eliminar
    while (actual != NULL && actual->dato != valor) {  previo = actual;
        actual = actual->next;
    }
    // Si el valor no se encontró
    if (actual == NULL) { cout << "Elemento no encontrado en la lista." << endl;
        return;
    }
    // Eliminar el nodo encontrado
    // Caso 1: Nodo en el medio
    if (previo != NULL) { previo->next = actual->next;
        if (actual->next != NULL) { (actual->next)->before = previo;
        }
    }
    // Caso 2: Nodo al principio
    else {  *inicio = actual->next; if (*inicio != NULL) {
            (*inicio)->before = NULL;
        }
    }
    //cout << "Elemento eliminado correctamente." << endl;
    delete actual;
}
