#include <iostream>

using namespace std;

int main() {
    int altura;
    cout << "Ingrese la altura de la piramide: ";
    cin >> altura;
    
    
    for (int i = 1; i <= altura; i++) {
    	
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= i * 2 - 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}
