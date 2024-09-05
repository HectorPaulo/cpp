#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    // Números a usar en las combinaciones (solo pares y el resto)
    std::vector<int> num = {2, 3, 4}; // Excluimos el 1

    // Contador de combinaciones
    int aux = 0;

    // Mostrar combinaciones
    do {
        // Verificar si la última posición es 2 o 4
        if (num.back() == 2 || num.back() == 4) {
            for (int n : num) {
                std::cout << n << " ";
            }
            std::cout << std::endl;
            aux++;
        }
    } while (std::next_permutation(num.begin(), num.end())); // Para la siguiente permutación

    std::cout << "Número total de combinaciones: " << aux << std::endl;
    return 0;
}
