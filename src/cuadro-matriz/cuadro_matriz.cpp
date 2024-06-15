#include  "jonathan2.h"

void matriz3x3();

int main(){
	
matriz3x3();	
marco(1,1,80,24);
system ("color 04");

float A[3][3];
for(int fila=0; fila<3; fila ++){
	for(int columna=0; columna<3; columna++){	
		posxy(3+4*columna,3+fila*2);cin>>A[fila][columna];
	}		
}

getch();
return 0;	
}


void matriz3x3(){

char c;	

c=218;	
posxy(2,2);cout<<c;	
c=191;
posxy(14,2);cout<<c;	
c=192;
posxy(2,8);cout<<c;
c=217;
posxy(14,8);cout<<c;	

c=196;
for (int i=0; i<11; i++){
	posxy(3+i,2);cout<<c;
	posxy(3+i,8);cout<<c;
	posxy(3+i,4);cout<<c;
	posxy(3+i,6);cout<<c;
}


c=179;
for (int i=0; i<5; i++){
	posxy(2,3+i);cout<<c;
	posxy(14,3+i);cout<<c;
	posxy(6,3+i);cout<<c;
	posxy(10,3+i);cout<<c;
	
}

c=197;
posxy(6,4);cout<<c;
posxy(10,4);cout<<c;
posxy(6,6);cout<<c;
posxy(10,6);cout<<c;
}
