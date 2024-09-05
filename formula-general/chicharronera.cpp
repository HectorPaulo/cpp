#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float a, b, c, x1, x2, discriminante;
	cout<<"Este programa obtiene las raíces de una ecuación cuadrática"<<endl;
	cout<<"";
	
	cout<<"Ingresar coeficiente del término cuadrático";
	cin>>a;
	cout<<"";
	if (a != 0){
	
	cout<<"Ingresar coeficiente del término lineal";
	cin>>b;
	cout<<"";
	
	cout<<"Ingresar coeficiente del término independiente";
	cin>>c;
	cout<<"";
	
	discriminante = (b*b)-(4*a*c);
	if (discriminante >= 0){
	
	x1 = (-b + sqrt(discriminante))/(2*a);
	
	x2 = (-b - sqrt(discriminante))/(2*a);
	
	cout<<"x1= "<<x1<<endl;
	cout<<" ";
	cout<<"x2= "<<x2<<endl;
	cout<<" ";
}
else{
	cout<< "El sistema tiene raices imaginarias"<<endl;
	cout<<" ";
	cout<<"El sistema no tiene raices reales"<<endl;
	cout<<" ";
	cout<<"No hay solucion"<<endl;
	cout<<" ";
}

}
else{
    cout<<"El sistema no es cuadratico"<<endl;
}
	return 0;
}
