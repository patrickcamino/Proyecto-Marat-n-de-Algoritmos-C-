#include <iostream>
using namespace std;

int main() {
    double numero;

    // 1. Pedir número
    cout << "Ingresa un número: ";
    cin >> numero;

    // 2. Verificar rangos
    if ((numero > 1 && numero < 10) || (numero >= 50 && numero <= 100))
        cout << "El número está dentro del rango permitido." << endl;
    else
        cout << "El número NO está dentro del rango permitido." << endl;

    return 0;
}
