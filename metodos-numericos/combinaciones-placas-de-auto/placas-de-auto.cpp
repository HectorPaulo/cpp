#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Vector de tres números que voy a ocupar
    std::vector<int> num = {1, 2, 3};
    // Vector de dos letras que voy a ocupar
    std::vector<char> let = {'a', 'b'};

    // Contador de combinaciones
    int aux = 0;

    // Generar combinaciones
    do {
        for (char l1 : let) {                // Primera letra
            for (char l2 : let) {            // Segunda letra
                if (l1 != l2) {              // Asegurar que las letras sean diferentes
                    std::cout << l1 << l2 << num[0] << num[1] << num[2] << std::endl;
                    aux++;
                }
            }
        }
    } while (std::next_permutation(num.begin(), num.end())); // Para la siguiente permutación

    // Imprimir el número total de combinaciones
    std::cout << "Total de combinaciones: " << aux << std::endl;

    return 0;
}
