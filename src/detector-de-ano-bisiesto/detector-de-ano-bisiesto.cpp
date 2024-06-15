#include <iostream>

using namespace std;

int bisiesto(int year) {
	
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() { 
    int year;
    cout << "Ingrese un año: ";
    cin >> year;
    if (bisiesto(year)) {
        cout << "Año Bisiesto" << endl;
    } else {
        cout << "Año No Bisiesto" << endl;
    }
    return 0;
}

