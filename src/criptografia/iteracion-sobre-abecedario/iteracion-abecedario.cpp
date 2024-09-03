#include <iostream>
#include <vector>

int main() {
    std::vector<char> abecedario = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n;
    std::cout << "Ingresa el valor de n: ";
    std::cin >> n;

    char letra = abecedario[n % abecedario.size()];

    std::cout << "La letra correspondiente es: " << letra << std::endl;

    return 0;
}