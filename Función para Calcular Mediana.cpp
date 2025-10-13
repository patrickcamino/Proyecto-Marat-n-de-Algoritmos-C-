#include <iostream>
using namespace std;

// Función para calcular mediana
int mediana(int arr[], int n) {
    // Ordenamiento simple (burbuja)
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Retornar valor central
    return arr[n / 2];
}

int main() {
    int n;

    // 1. Pedir tamaño del array (impar)
    cout << "Ingresa la cantidad de números (impar): ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Error: el número debe ser impar." << endl;
        return 1;
    }

    int numeros[n];

    // 2. Pedir números al usuario
    for (int i = 0; i < n; ++i) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // 3. Calcular mediana
    int resultado = mediana(numeros, n);
    cout << "La mediana es: " << resultado << endl;

    return 0;
}


