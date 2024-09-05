#include <iostream> // Incluye la librería iostream, que proporciona entrada y salida estándar

using namespace std; // Permite utilizar los identificadores estándar de la librería iostream sin la necesidad de especificar std::

struct Fraccion { // Define una estructura Fraccion para representar fracciones
    int numerador; // Miembro para almacenar el numerador de la fracción
    int denominador; // Miembro para almacenar el denominador de la fracción
};

Fraccion simplificarFraccion(Fraccion fraccion) { // Función que simplifica una fracción
    int mcd = 1; // Inicializa el máximo común divisor en 1
    int menor = min(fraccion.numerador, fraccion.denominador); // Encuentra el menor valor entre el numerador y denominador de la fracción

    for (int i = 2; i <= menor; ++i) { // Itera desde 2 hasta el menor valor
        if (fraccion.numerador % i == 0 && fraccion.denominador % i == 0) { // Verifica si i es divisor común de numerador y denominador
            mcd = i; // Actualiza el máximo común divisor
        }
    }

    fraccion.numerador /= mcd; // Divide el numerador por el máximo común divisor
    fraccion.denominador /= mcd; // Divide el denominador por el máximo común divisor

    return fraccion; // Devuelve la fracción simplificada
}

Fraccion multiplicarFraccion(Fraccion fraccion1, Fraccion fraccion2) { // Función que multiplica dos fracciones
    Fraccion resultado; // Crea una nueva fracción para almacenar el resultado de la multiplicación
    resultado.numerador = fraccion1.numerador * fraccion2.numerador; // Multiplica los numeradores
    resultado.denominador = fraccion1.denominador * fraccion2.denominador; // Multiplica los denominadores

    return simplificarFraccion(resultado); // Simplifica y devuelve el resultado de la multiplicación
}

void derivarPolinomio(Fraccion polinomio[], int grado, Fraccion resultado[]) { // Función que calcula la derivada de un polinomio
    for (int i = 0; i < grado; ++i) { // Itera sobre los términos del polinomio original (hasta el grado - 1)
        resultado[i].numerador = polinomio[i].numerador * (grado - i); // Multiplica el coeficiente por el exponente correspondiente
        resultado[i].denominador = polinomio[i].denominador; // El denominador permanece igual
    }
}

void mostrarPolinomio(Fraccion polinomio[], int grado) { // Función que muestra el polinomio en forma de fracciones
    for (int i = 0; i <= grado; ++i) { // Itera sobre los términos del polinomio (hasta el grado)
        cout << polinomio[i].numerador << "/" << polinomio[i].denominador; // Muestra el coeficiente del término
        if (i < grado) { // Si no es el último término
            cout << "x^" << grado - i; // Muestra el exponente correspondiente
        }
        if (i < grado) { // Si no es el último término
            cout << " + "; // Muestra el símbolo de suma
        }
    }

    cout << endl; // Salto de línea al final
}

int main() { // Función principal del programa
    int grado; // Variable para almacenar el grado del polinomio
    cout << "Ingrese el grado del polinomio: ";
    cin >> grado; // Lee el grado del polinomio desde la entrada estándar

    Fraccion polinomio[grado + 1]; // Arreglo para almacenar los coeficientes del polinomio (tamaño grado + 1)

    cout << "Ingrese los coeficientes del polinomio:" << endl;
    for (int i = 0; i <= grado; ++i) { // Itera sobre los términos del polinomio (hasta el grado)
        cout << "Coeficiente x^" << grado - i << ": ";
        cin >> polinomio[i].numerador; // Lee el coeficiente del término desde la entrada estándar
        polinomio[i].denominador = 1;  // El usuario solo ingresa el numerador, el denominador se asume como 1
    }

    Fraccion derivada[grado]; // Arreglo para almacenar la derivada del polinomio (tamaño grado)
    derivarPolinomio(polinomio, grado, derivada); // Calcula la derivada del polinomio ingresado

    cout << "La derivada del polinomio ingresado es:" << endl;
    mostrarPolinomio(derivada, grado - 1); // Muestra la derivada del polinomio

    return 0; // Finaliza el programa con éxito
}

