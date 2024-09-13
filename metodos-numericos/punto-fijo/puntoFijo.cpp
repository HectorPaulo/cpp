#include <iostream>
#include <cmath>
#include <vector>
#include <functional>

using namespace std;

double a = 1.0;
double b = -6.543;
double c = -31.975266;
double d = 179.65217;

double punto_fijo(function<double(double)> g, double x0, int max_iter = 100, double max_value = 1e10)
{
    for (int i = 0; i < max_iter; ++i)
    {
        double x1 = g(x0);
        if (fabs(x1) > max_value)
        { // --> no valores excesivos
            cout << "Valor excesivo alcanzado: x = " << x1 << ". Abandonando la iteración." << endl;
            return nan(""); // --> Retorna NaN si se excede el valor máximo
        }
        if (fabs(x1 - x0) < 1e-6)
        { // --> convergencia
            return x1;
        }
        x0 = x1;
    }
    return nan("");
}

function<double(double)> g_cubica(double a, double b, double c, double d)
{
    return [a, b, c, d](double x)
    {
        return x - (a * pow(x, 3) + b * pow(x, 2) + c * x + d) / (3 * a * pow(x, 2) + 2 * b * x + c);
    };
}

int main()
{
    auto g = g_cubica(a, b, c, d);

    vector<double> soluciones;
    vector<double> valores_iniciales = {-5.0, 7.0, 4.0};

    for (double x0 : valores_iniciales)
    {
        double sol = punto_fijo(g, x0);
        if (!isnan(sol))
        {
            soluciones.push_back(sol);
            cout << "Solución aproximada: " << sol << endl;
        }
        else
        {
            cout << "El método no convergió para el valor inicial " << x0 << "." << endl;
        }
    }

    if (!soluciones.empty())
    {
        cout << "Raíces aproximadas: ";
        for (double raiz : soluciones)
        {
            cout << raiz << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No se encontraron raíces." << endl;
    }

    return 0;
}
