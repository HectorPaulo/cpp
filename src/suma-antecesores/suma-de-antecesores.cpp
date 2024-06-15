#include <iostream>
using namespace std;

int main() {
   int num, sum=0;
   cout << "Ingresa un número entero: ";
   cin >> num;

   for(int i=1; i<num; i++) {
      sum += i;
      cout << i << " + ";
   }

   cout << num-1 << " = " << sum << endl;
   return 0;
}

