#include <iostream>
using namespace std;

int main() {
   int a = 0, b = 1, temp;
   int n;

   cout << "Ingresa la posicion de la serie de Fibonacci: ";
   cin >> n;

   for (int i = 0; i < n; i++) {
      temp = a;
      a = b;
      b += temp;
   }

   cout << "El numero correspondiente a la posicion " << n << " de la serie de Fibonacci es: " << a << endl;

   return 0;
}

