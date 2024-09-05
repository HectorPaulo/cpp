#include <iostream> // Incluye la librer�a iostream, que proporciona entrada y salida est�ndar

using namespace std; // Permite utilizar los identificadores est�ndar de la librer�a iostream sin la necesidad de especificar std::

struct Fraccion { // Define una estructura Fraccion para representar fracciones
    int numerador; // Miembro para almacenar el numerador de la fracci�n
    int denominador; // Miembro para almacenar el denominador de la fracci�n
};

Fraccion simplificarFraccion(Fraccion fraccion) { // Funci�n que simplifica una fracci�n
    int mcd = 1; // Inicializa el m�ximo com�n divisor en 1
    int menor = min(fraccion.numerador, fraccion.denominador); // Encuentra el menor valor entre el numerador y denominador de la fracci�n

    for (int i = 2; i <= menor; ++i) { // Itera desde 2 hasta el menor valor
        if (fraccion.numerador % i == 0 && fraccion.denominador % i == 0) { // Verifica si i es divisor com�n de numerador y denominador
            mcd = i; // Actualiza el m�ximo com�n divisor
        }
    }

    fraccion.numerador /= mcd; // Divide el numerador por el m�ximo com�n divisor
    fraccion.denominador /= mcd; // Divide el denominador por el m�ximo com�n divisor

    return fraccion; // Devuelve la fracci�n simplificada
}

Fraccion multiplicarFraccion(Fraccion fraccion1, Fraccion fraccion2) { // Funci�n que multiplica dos fracciones
    Fraccion resultado; // Crea una nueva fracci�n para almacenar el resultado de la multiplicaci�n
    resultado.numerador = fraccion1.numerador * fraccion2.numerador; // Multiplica los numeradores
    resultado.denominador = fraccion1.denominador * fraccion2.denominador; // Multiplica los denominadores

    return simplificarFraccion(resultado); // Simplifica y devuelve el resultado de la multiplicaci�n
}

void derivarPolinomio(Fraccion polinomio[], int grado, Fraccion resultado[]) { // Funci�n que calcula la derivada de un polinomio
    for (int i = 0; i < grado; ++i) { // Itera sobre los t�rminos del polinomio original (hasta el grado - 1)
        resultado[i].numerador = polinomio[i].numerador * (grado - i); // Multiplica el coeficiente por el exponente correspondiente
        resultado[i].denominador = polinomio[i].denominador; // El denominador permanece igual
    }
}

void mostrarPolinomio(Fraccion polinomio[], int grado) { // Funci�n que muestra el polinomio en forma de fracciones
    for (int i = 0; i <= grado; ++i) { // Itera sobre los t�rminos del polinomio (hasta el grado)
        cout << polinomio[i].numerador << "/" << polinomio[i].denominador; // Muestra el coeficiente del t�rmino
        if (i < grado) { // Si no es el �ltimo t�rmino
            cout << "x^" << grado - i; // Muestra el exponente correspondiente
        }
        if (i < grado) { // Si no es el �ltimo t�rmino
            cout << " + "; // Muestra el s�mbolo de suma
        }
    }

    cout << endl; // Salto de l�nea al final
}

int main() { // Funci�n principal del programa
    int grado; // Variable para almacenar el grado del polinomio
    cout << "Ingrese el grado del polinomio: ";
    cin >> grado; // Lee el grado del polinomio desde la entrada est�ndar

    Fraccion polinomio[grado + 1]; // Arreglo para almacenar los coeficientes del polinomio (tama�o grado + 1)

    cout << "Ingrese los coeficientes del polinomio:" << endl;
    for (int i = 0; i <= grado; ++i) { // Itera sobre los t�rminos del polinomio (hasta el grado)
        cout << "Coeficiente x^" << grado - i << ": ";
        cin >> polinomio[i].numerador; // Lee el coeficiente del t�rmino desde la entrada est�ndar
        polinomio[i].denominador = 1;  // El usuario solo ingresa el numerador, el denominador se asume como 1
    }

    Fraccion derivada[grado]; // Arreglo para almacenar la derivada del polinomio (tama�o grado)
    derivarPolinomio(polinomio, grado, derivada); // Calcula la derivada del polinomio ingresado

    cout << "La derivada del polinomio ingresado es:" << endl;
    mostrarPolinomio(derivada, grado - 1); // Muestra la derivada del polinomio

    return 0; // Finaliza el programa con �xito
}

