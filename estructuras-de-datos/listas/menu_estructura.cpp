#include <iostream>
using namespace std;

struct listaNodo {
    int dato;
    struct listaNodo* next;
    struct listaNodo* before;
};

typedef struct listaNodo LISTANODO;
typedef LISTANODO* apuntador_LISTANODO;

void insertar(apuntador_LISTANODO* inicio, int valor);
void imprimir(apuntador_LISTANODO* inicio);
int eliminar(apuntador_LISTANODO* inicio, int valor);
void imprimir_anterior(apuntador_LISTANODO* inicio, int valor);
void imprimir_siguiente(apuntador_LISTANODO* inicio, int valor);
void insertar_circular(apuntador_LISTANODO* inicio, int valor);
void imprimir_circular(apuntador_LISTANODO* inicio);
int eliminar_circular(apuntador_LISTANODO* inicio, int valor);
void imprimir_anterior_circular(apuntador_LISTANODO* inicio, int valor);
void imprimir_siguiente_circular(apuntador_LISTANODO* inicio, int valor);

int main() {
    apuntador_LISTANODO listaSimple = NULL;
    apuntador_LISTANODO listaCircular = NULL;

    insertar(&listaSimple, 7);
    insertar(&listaSimple, 5);
    insertar(&listaSimple, 10);
    insertar(&listaSimple, 15);
    imprimir(&listaSimple);
    eliminar(&listaSimple, 5);
    imprimir(&listaSimple);

    insertar_circular(&listaCircular, 7);
    insertar_circular(&listaCircular, 5);
    insertar_circular(&listaCircular, 10);
    insertar_circular(&listaCircular, 15);
    imprimir_circular(&listaCircular);
    eliminar_circular(&listaCircular, 5);
    imprimir_circular(&listaCircular);

    return 0;
}

void insertar(apuntador_LISTANODO* inicio, int valor) {
    apuntador_LISTANODO nuevo, previo, actual;
    nuevo = new LISTANODO();
    nuevo->dato = valor;
    nuevo->next = NULL;
    previo = NULL;
    actual = *inicio;

    while (actual != NULL) {
        previo = actual;
        actual = actual->next;
    }

    if (previo == NULL) {
        *inicio = nuevo;
    } else {
        previo->next = nuevo;
    }
}

void imprimir(apuntador_LISTANODO* inicio) {
    apuntador_LISTANODO actual;
    actual = *inicio;

    if (actual == NULL) {
        cout << "La lista está vacía" << endl;
    } else {
        cout << "La lista es:" << endl;
        while (actual != NULL) {
            cout << "-->" << actual->dato;
            actual = actual->next;
        }
        cout << "-->NULL" << endl;
    }
}

int eliminar(apuntador_LISTANODO* inicio, int valor) {
    apuntador_LISTANODO previo = NULL, actual = *inicio;

    while (actual != NULL && actual->dato != valor) {
        previo = actual;
        actual = actual->next;
    }

    if (actual != NULL) {
        if (previo == NULL) {
            *inicio = actual->next;
        } else {
            previo->next = actual->next;
        }

        int datoEliminado = actual->dato;
        delete actual;
        return datoEliminado;
    } else {
        cout << "No se encontró el valor" << endl;
        return 0;
    }
}

void insertar_circular(apuntador_LISTANODO* inicio, int valor) {
    apuntador_LISTANODO nuevo = new LISTANODO();
    nuevo->dato = valor;
    nuevo->next = *inicio;
    nuevo->before = NULL;

    if (*inicio == NULL) {
        *inicio = nuevo;
        nuevo->before = nuevo;
    } else {
        apuntador_LISTANODO ultimo = (*inicio)->before;
        nuevo->before = ultimo;
        ultimo->next = nuevo;
        (*inicio)->before = nuevo;
    }
}

void imprimir_circular(apuntador_LISTANODO* inicio) {
    apuntador_LISTANODO actual = *inicio;

    if (actual == NULL) {
        cout << "La lista está vacía" << endl;
        return;
    }

    cout << "La lista es:" << endl;
    do {
        cout << "-->" << actual->dato;
        actual = actual->next;
    } while (actual != *inicio);
    cout << "-->NULL" << endl;
}

int eliminar_circular(apuntador_LISTANODO* inicio, int valor) {
    apuntador_LISTANODO previo = NULL, actual = *inicio;

    do {
        if (actual->dato == valor) {
            if (previo == NULL) {
                *inicio = actual->next;
            } else {
                previo->next = actual->next;
            }

            int datoEliminado = actual->dato;
            delete actual;
            return datoEliminado;
        }
        previo = actual;
        actual = actual->next;
    } while (actual != *inicio);

    cout << "No se encontró el valor" << endl;
    return 0;
}
