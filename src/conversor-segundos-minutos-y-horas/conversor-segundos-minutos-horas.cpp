#include<iostream>
using namespace std;

int main(){
	float segh, segm, s, h, m;
	
	cout<<"este es un programa que calcula el numero de segundos dado el numero de horas, minutos y segundos."<<endl;
	cout<<" ";
	
	cout<<"Ingresar número de horas"<<endl;
	cin>>h;
	
	segh = h*3600;
	
	cout<<" "<<endl;
	
	cout<<"El número de segundos es:"<<endl;
    cout<< segh;
	cout<<" "<<endl;
	
	cout<<"Insertar el número de minutos"<<endl;
	cin>>m;
	
	segm = m*60;
	
	cout<<" "<<endl;
	
	cout<<"El número de segundos es:"<<endl;
	cout<<segm<<endl;
	cout<<" "<<endl;
	
	cout<<"ingrese una cantidad de segundos que le será arrojada de regreso"<<endl;
	cin>>s;
	cout<<" "<<endl;
	
	cout<<"Su resultado es:"<<endl;
	cout<<s<<endl;
	
	return 0;
}
