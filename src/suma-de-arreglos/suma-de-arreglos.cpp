#include "paulo.h"
using namespace std;
int main(){

    centrarStr("SUMA DE NUMEROS EN UN ARREGLO", 2);
    int arreglo[]={1,2,3,4};
    int suma=0;
    for(int i=0;i<4;i++){
        suma+=arreglo[i];
    }
    
    cout<<"La suma es: "<<suma;
    
    return 0;
}