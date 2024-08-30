#include <iostream>
#include <cmath>

int main()
{
    double sumatoria = 0.0;
    double e = std::exp(1.0);
    for (int n = 1; n <= 10000; ++n)
    {
        double termino = 2 / (pow(n, 2) - 1);
        std::cout << n << "    " << termino << "    " << sumatoria << std::endl;
        sumatoria += termino;
    }

    if (sumatoria < 1e10)
    {
        std::cout << "\nConvergente\n";
    }
    else
    {
        std::cout << "\nDivergente\n";
    }

    return 0;
}