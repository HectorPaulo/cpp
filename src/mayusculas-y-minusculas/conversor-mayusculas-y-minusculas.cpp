#include <iostream>
#include <string>
using namespace std;

	string mayusculas(string texto) {
    string resultado = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c >= 'a' && c <= 'z') {
            resultado += c - 'a' + 'A';
        } else {
            resultado += c;
        }
    }
    return resultado;
}

string minusculas(string texto) {
    string resultado = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') {
            resultado += c - 'A' + 'a';
        } else {
            resultado += c;
        }
    }
    return resultado;
}

int main() {
    string texto = "hOlA mUnDo";
    cout << "Texto original: " << texto << endl;

    string texto_en_mayusculas = mayusculas(texto);
    cout << "Texto en mayusculas: " << texto_en_mayusculas << endl;

    string texto_en_minusculas = minusculas(texto);
    cout << "Texto en minusculas: " << texto_en_minusculas << endl;
return 0;
}
