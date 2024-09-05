#include "paulo.h"
using namespace std;

void cubo();

int main(){
    
	cubo();
    
    system("pause");
    return 0;
}

void cubo(){
	    float n;

    cout<<"inserte un numero:"<<endl;
    cin>>n;

    cout<<"el cubo de "<<n<<" es: "<<endl;
    cout<<n*n*n<<endl;
}
