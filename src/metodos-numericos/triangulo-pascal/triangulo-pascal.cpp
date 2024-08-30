#include <iostream>
#include <vector>
#include <iomanip>  

int main() {
    int n = 20;
    std::vector<std::vector<int>> pascal(n, std::vector<int>(2*n - 1, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = n - i - 1; j <= n + i - 1; j += 2) {
            if (j == n - i - 1 || j == n + i - 1) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j + 1];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            if (pascal[i][j] != 0) {
                if (pascal[i][j] % 2 == 0) {
                    
                    std::cout << "\033[35m" << std::setw(4) << pascal[i][j] << "\033[0m";
                } else {
                    std::cout << std::setw(4) << pascal[i][j];
                }
            } else {
                std::cout << "    ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
