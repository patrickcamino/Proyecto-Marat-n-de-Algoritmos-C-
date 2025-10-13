#include <iostream>
using namespace std;

int main() {
    int N;

    // 1. Pedir número
    cout << "Ingresa un número entero positivo: ";
    cin >> N;

    // 2. Generar patrón
    for (int i = N; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


