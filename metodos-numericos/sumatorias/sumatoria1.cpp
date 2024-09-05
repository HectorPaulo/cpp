#include <iostream>
#include <cmath>

int main()
{
    double sumatoria = 0.0;

    for (int n = 0; n <= 10000; ++n)
    {
        double termino = (double)(n - 1) / (n + 1);
        std::cout << n << "    " << termino << "    " << sumatoria << std::endl;
        sumatoria += termino;
    }

    if (sumatoria == 0)
    {
        std::cout << "\nConvergente\n";
    }
    else
    {
        std::cout << "\nDivergente\n";
    }

    return 0;
}