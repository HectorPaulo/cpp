#include <iostream>

using namespace std;

int main() {
    int numero, factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    cout << "El factorial de " << numero << " es " << factorial << endl;
    return 0;
}
