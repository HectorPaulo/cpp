#include <iostream>
#include <locale.h>

int main() {
    char letra;
    setlocale(LC_ALL, "");
    std::cout << "CONVERSIÓN DE LETRAS MINÚSCULAS Y MAYÚSCULAS\n\n";
    do {
        std::cout << "Ingrese una letra: ";
        std::cin >> letra;
        if (letra>64 && letra<90){
            letra =  letra + 32;
            std::cout << char(letra) << std::endl;
        }

        else if (letra>96 && letra<123){
            letra = letra - 32;
            std::cout << char(letra) << std::endl;
        } else {
            std::cout << "El caracter ingresado no es válido." << std::endl;
        }
    } while(true);
    
    // char letra_mayuscula = letra + 26;
    // std::cout << "La letra ingresada en mayúscula es: " << letra_mayuscula << std::endl;

    // // Mostrar letras mayúsculas (A-Z)
    // std::cout << "Letras mayúsculas:" << std::endl;
    // for (int i = 65; i <= 90; i++) {
    //     std::cout << char(i) << " ";
    // }
    // std::cout << std::endl;

    // // Mostrar letras minúsculas (a-z)
    // std::cout << "Letras minúsculas:" << std::endl;
    // for (int i = 97; i <= 122; i++) {
    //     std::cout << char(i) << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "A partir de acá mi experimento\n";
    // std::cout << "Caracteres del 49 al 64 (caracteres anteriores invisibles)\n";
    // for (int i = 49; i < 65; i++) {
    //     std::cout << char(i) << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "A partir de acá mi experimento\n";
    // std::cout << "Caracteres del 91 al 96\n";
    // for (int i = 91; i < 96; i++) {
    //     std::cout << char(i) << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "TABLA DE CARACTERES ASCII\n\n";
    // for (int i = 49; i < 255; i++) {
    //     std::cout << char(i) << " ";
    // }

    return 0;
}
