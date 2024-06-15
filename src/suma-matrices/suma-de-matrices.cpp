
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 6;
const int COLS = 6;

int main() {
    int matrix[ROWS][COLS];

    srand(time(0)); // Inicializar generador de números aleatorios

    // Llenar matriz con números aleatorios menores o iguales a 10
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 11;
        }
    }

    // Imprimir matriz original
    cout << "Matriz original:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Suma de los números pares e impares de la matriz
    int sumPares = 0, sumImpares = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] % 2 == 0) {
                sumPares += matrix[i][j];
            } else {
                sumImpares += matrix[i][j];
            }
        }
    }

    cout << "Suma de los números pares: " << sumPares << endl;
    cout << "Suma de los números impares: " << sumImpares << endl;

    // Suma de cada columna de la matriz
    cout << "Suma de cada columna:\n";
    for (int j = 0; j < COLS; j++) {
        int sumCol = 0;
        for (int i = 0; i < ROWS; i++) {
            sumCol += matrix[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumCol << endl;
    }

    // Suma de cada fila de la matriz
    cout << "Suma de cada fila:\n";
    for (int i = 0; i < ROWS; i++) {
        int sumRow = 0;
        for (int j = 0; j < COLS; j++) {
            sumRow += matrix[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumRow << endl;
    }

    // Suma de los elementos de la diagonal principal
    int sumDiagPrinc = 0;
    for (int i = 0; i < ROWS; i++) {
        sumDiagPrinc += matrix[i][i];
    }
    cout << "Suma de los elementos de la diagonal principal: " << sumDiagPrinc << endl;

    // Suma de los elementos de la diagonal secundaria
    int sumDiagSec = 0;
    for (int i = 0; i < ROWS; i++) {
        sumDiagSec += matrix[i][COLS - i - 1];
    }
    cout << "Suma de los elementos de la diagonal secundaria: " << sumDiagSec << endl;
}
    // Transpuesta de la matriz


