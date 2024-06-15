#include<iostream>
using namespace std;

int main(){
	
	int n1, n2, n3, nm, nM;
	
	cout<<"Este es un programa que muestra el numero mas pequeño de tres previamente ingresados."<<endl;
	cout<<"";
	cout<<"";
	
	cout<<"Ingresar primer numero entero";
	cin>>n1;
	cout<<" ";
	
	cout<<"Ingresar segundo numero entero";
	cin>>n2;
	cout<<" ";
	
	cout<<"Ingresar tercer numero entero";
	cin>>n3;
	cout<<" ";
	
if (n1 <= n2 && n1 <= n3){
	
	nm = n1;
	
}

else if (n2 <= n1 && n2 <= n3){
	
	nm=n2;
	
}

else {

nm = n3;

}

if (n1 >= n2 && n1 >= n3){
	
	nM = n1;
	
}

else if (n2 >= n1 && n2 >= n3){
	
	nM=n2;
	
}

else {

nM = n3;

}

cout<<"Los tres numero previamente ingresados, ordenados del mayor al menor son: "<<endl;
cout<<nM<<endl;
cout<<" "<<endl;
cout<<nm<<endl;
cout<<" ";


	return 0;
}
