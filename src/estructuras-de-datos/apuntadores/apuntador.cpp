#include "paulo.h"
using namespace std;
int main(){
    int numero, *numeroPtr;
    numeroPtr = &numero;
    cout<<"introduce un numero: ";
    cin>>numero;
    if(*numeroPtr%2==0){
        cout<<"el numero: "<<*numeroPtr<<" es par"<<endl;
    }
    else{
        cout<<"el numero: "<<*numeroPtr<<" es impar"<<endl;
    }
}