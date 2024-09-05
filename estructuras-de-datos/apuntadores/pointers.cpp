#include <iostream>
using namespace std;
int main(){
  int numero, *numeroPtr; // --> < * > + < variable > ==> apunta al valor en memoria, de la variable 
  numeroPtr = &numero; // --> < & > + variable ==> apunta a la ubicación en memoria, de la variable
  cout << "Introduce un numero: ";
  cin >> numero;
  cout << "el numero que usted ha ingresado es: " << numero << endl;
  cout << "*numeroPtr es: " << *numeroPtr << endl;
  cout << "&numero es: " << &numero << endl;
  cout << "--> < * > + < variable > ==> apunta al valor en memoria, de la variable." << endl;
  cout << "--> < & > + variable ==> apunta a la ubicación en memoria, de la variable." << endl;
  return 0;
}