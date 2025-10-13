#include <iostream>
using namespace std;

int main() {
    double a, r;
    int n;

    // 1. Pedir datos
    cout << "Ingresa el número inicial: ";
    cin >> a;
    cout << "Ingresa la razón: ";
    cin >> r;
    cout << "Ingresa la cantidad de términos: ";
    cin >> n;

    // 2. Generar progresión
    for (int i = 0; i < n; ++i) {
        double termino = a;
        for (int j = 0; j < i; ++j)
            termino *= r;
        cout << termino << " ";
    }
    cout << endl;

    return 0;
}




