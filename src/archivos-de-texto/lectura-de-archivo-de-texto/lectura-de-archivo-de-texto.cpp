#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream archivo("ejemplo.txt");
    if (archivo.is_open()) {
    	
        archivo.close();
        cout << "La escritura en el archivo se realizó correctamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
    system("pause");
    return 0;
}

