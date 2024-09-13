#include <iostream>
#include <cmath>
#include <vector>
#include <functional>

using namespace std;
// --> De preferencia ingresar valores iniciales:
//              -5,  7 y 4
double evaluar_polinomio(const vector<double> &coef, double x)
{
    double resultado = 0.0;
    int grado = coef.size() - 1;
    for (int i = 0; i <= grado; ++i)
    {
        resultado += coef[i] * pow(x, grado - i);
    }
    return resultado;
}

double evaluar_derivada(const vector<double> &coef, double x)
{
    double resultado = 0.0;
    int grado = coef.size() - 1;
    for (int i = 0; i < grado; ++i)
    {
        resultado += (grado - i) * coef[i] * pow(x, grado - i - 1);
    }
    return resultado;
}

double punto_fijo(function<double(double)> g, double x0, int max_iter = 100, double max_value = 1e10)
{
    for (int i = 0; i < max_iter; ++i)
    {
        double x1 = g(x0);
        if (fabs(x1) > max_value)
        { // --> no valores recursivos papu
            cout << "Valor excesivo alcanzado: x = " << x1 << ". Abandonando la iteración." << endl;
            return nan(""); // --> nan si llega al valor maximo
        }
        if (fabs(x1 - x0) < 1e-6)
        { // --> convergencia
            return x1;
        }
        x0 = x1;
    }
    return nan("");
}

function<double(double)> g_polinomio(const vector<double> &coef)
{
    return [&coef](double x)
    {
        return x - evaluar_polinomio(coef, x) / evaluar_derivada(coef, x);
    };
}

int main()
{
    int grado;
    vector<double> coef;
    int n_valores;
    vector<double> valores_iniciales;

    cout << "Introduce el grado del polinomio (2 a 7): ";
    cin >> grado;
    if (grado < 2 || grado > 7)
    {
        cout << "El grado del polinomio debe estar entre 2 y 7." << endl;
        return 1;
    }

    cout << "Introduce los coeficientes del polinomio de grado " << grado << " (de mayor a menor grado):" << endl;
    for (int i = 0; i <= grado; ++i)
    {
        double coeficiente;
        cout << "Coeficiente para x^" << (grado - i) << ": ";
        cin >> coeficiente;
        coef.push_back(coeficiente);
    }

    auto g = g_polinomio(coef);

    cout << "\n¿Cuántos valores iniciales deseas introducir? ";
    cin >> n_valores;

    cout << "Introduce los valores iniciales:\n";
    for (int i = 0; i < n_valores; ++i)
    {
        double valor;
        cout << "Valor inicial " << i + 1 << ": ";
        cin >> valor;
        valores_iniciales.push_back(valor);
    }

    vector<double> soluciones;

    for (double x0 : valores_iniciales)
    {
        double sol = punto_fijo(g, x0);
        if (!isnan(sol))
        {
            soluciones.push_back(sol);
            cout << "Solución aproximada para x0 = " << x0 << ": " << sol << endl;
        }
        else
        {
            cout << "El método no convergió para el valor inicial " << x0 << "." << endl;
        }
    }

    if (!soluciones.empty())
    {
        cout << "\nRaíces aproximadas: ";
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
