#include <iostream>
using namespace std;

int main() {
    int N;

    // 1. Pedir número
    cout << "Ingresa un número entero positivo: ";
    cin >> N;

    // 2. Generar serie de factoriales
    for (int i = 1; i <= N; ++i) {
        int factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}



