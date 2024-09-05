//Combinaciones de 5 numeros diferentes ordenados de menor a mayor
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Vector de los numeros que voy a ocupar
    std::vector<int> num = {1, 2, 3, 4, 5};
    
    // Contador de combinaciones ----->
    int aux = 0;

    // Mostrar combinaciones -------->
    do {
        for (int num : num) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
        aux++;
    } while (std::next_permutation(num.begin(), num.end())); // <-----Para la siguiente prmutacion
    return 0;
}
