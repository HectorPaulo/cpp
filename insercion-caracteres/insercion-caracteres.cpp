#include <iostream>
#include <string>
#include <vector>

using namespace std;

void insertionSort(vector<string>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<string> arr = {"perro", "gato", "pez", "pajaro"};
    insertionSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

