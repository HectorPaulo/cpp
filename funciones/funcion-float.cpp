#include <iostream>
#include <locale.h>

using namespace std;
float fx(float x);

int main(void){
	
	setlocale(LC_ALL, "");
	
	float x, y;
	int i;
	
	for (i = 0; i <= 10; i++){
		
		y = fx(i);
		cout<<"x = "<<i<<"f("<<i<<")"<<" = "<<y<<endl;		
	}	
	return 0;
	
}

float fx(float x){
	
	return 2*x*x+3*x+2;
}
