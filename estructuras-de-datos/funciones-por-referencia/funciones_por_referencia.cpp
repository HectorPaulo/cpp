#include "paulo.h"
#include <stdlib.h>

using namespace std;
void cubo_por_referencia(int *);
int main(){
    int *numeroPtr;
    int numero;
    cout<<"Valor de numero: /t"<<numero<<endl;
    cubo_por_referencia(&numero);
    cout<<"El nuevo valor del numero es: "<<numero<<endl;
    return 0;
}
void cubo_por_referencia(int *nPtr){
    *nPtr=(*nPtr)*(*nPtr)*(*nPtr);
}