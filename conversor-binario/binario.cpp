#include "paulo.h"

using namespace std;

void bin();

int main() {
    system("color 70");
    bin();
    return 0;
}

void bin(){
    int decimal;

    cout << "Ingrese un numero en decimal: ";
    cin >> decimal;

    if (decimal < 0) {
        cout << "Ingrese un numero positivo.";
        terminarPrograma();
    }

    if (decimal == 0) {
        cout << "0";
        terminarPrograma();
    }

    cout << "Numero binario: ";

    int binario[8];
    int i = 0;

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
}