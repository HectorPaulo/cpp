#include <iostream>
#include <locale.h>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    setlocale(LC_CTYPE, "Spanish");
    int n;
    cout << "\n¿De qué tamanño quiere su triángulo de  Pascal?";
    cin >>n;
    cout << "\n";
    vector<vector<int>> pascal(n, vector<int> (2*n-1, 0));

    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j >= n + i - 1; j += 2) {
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
                    cout << "\033[35m" << setw(4) <<pascal[i][j] << "\033[0m";
                } else {
                    cout << setw(4) << pascal[i][j];
                }
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }
    return 0;
}