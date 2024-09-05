#include "paulo.h"
using namespace std;
int main() {
    int y=8, *yPtr;
    yPtr=&y;
    cout<<"valor de y: "<<y<<endl;
    cout<<"dirección de y: "<<&y<<endl;
    cout<<"valor de yPtr: "<<yPtr<<endl;
    cout<<"valor de la variable a la que apunta *yPtr: "<<*yPtr<<endl;
    return 0;
}