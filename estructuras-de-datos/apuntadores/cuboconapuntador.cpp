#include "paulo.h"
using namespace std;
int main(){
    
    int numero, *numeroPtr;
    numeroPtr = &numero;

    cout<<"introduce un numero: ";
    cin>>numero;

    cout<<"el cubo del numero es: "<<(*numeroPtr)*(*numeroPtr)*(*numeroPtr)<<endl;

    return 0;
}