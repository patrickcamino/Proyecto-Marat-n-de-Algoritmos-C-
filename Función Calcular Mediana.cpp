#include <iostream>
#include <algorithm>
using namespace std;

// 1. Función para calcular la mediana
int calcularMediana(int arr[], int n) {
    sort(arr, arr + n); // Ordenar array
    return arr[n / 2];  // Retornar valor central
}

int main() {
    int n;
    cout << "Ingresa el tamaño del array (impar): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Error: el tamaño debe ser impar." << endl;
        return 1;
    }

    int arr[n];
    cout << "Ingresa los " << n << " números: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int mediana = calcularMediana(arr, n);
    cout << "La mediana es: " << mediana << endl;

    return 0;
}
