#include <iostream>
using namespace std;

int main() {
    double inicio, razon, termino;
    int n;

    // 1. Pedir datos al usuario
    cout << "Ingresa el número inicial: ";
    cin >> inicio;
    cout << "Ingresa la razón: ";
    cin >> razon;
    cout << "Ingresa la cantidad de términos: ";
    cin >> n;

    // 2. Generar progresión
    termino = inicio;
    cout << "Progresión geométrica: ";
    for (int i = 1; i <= n; ++i) {
        cout << termino << " ";
        termino *= razon;
    }
    cout << endl;

    return 0;
}


