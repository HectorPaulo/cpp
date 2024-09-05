#include<iostream>
using namespace std;


int main() {
	
	int i, m, n;
	cout<<"Quiere que su intervalo empiece en: "<<endl;
	cin>>i;
	cout<<"Y termine en: "<<endl;
	cin>>n;
	for (i; i <= n; i = i + 2 ) {
		
		m = m + 1;
	}
	cout << "Hay " << m << " Numeros pares entre 1 y 100" << endl;
	return 0;
}
