#include <iostream>

using namespace std;

int main()
{
    int n, m, p;
    cout << "Ingrese el tamaño de la primera matriz (filas columnas): ";
    cin >> n >> m;
    cout << "Ingrese el tamaño de la segunda matriz (filas columnas): ";
    cin >> m >> p;
    
    // Declaración e inicialización de las matrices
    int A[n][m], B[m][p], C[n][p];
    cout << "Ingrese los valores de la primera matriz: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }
    cout << "Ingrese los valores de la segunda matriz: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> B[i][j];
        }
    }
    
    // Multiplicación de matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            C[i][j] = 0;
            for(int k = 0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Impresión de la matriz resultante
    cout << "El resultado de la multiplicación de las matrices es: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

