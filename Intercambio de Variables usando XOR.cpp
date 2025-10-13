#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 1. Pedir números
    cout << "Ingresa el primer número: ";
    cin >> a;
    cout << "Ingresa el segundo número: ";
    cin >> b;

    // 2. Intercambiar usando XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // 3. Mostrar resultados
    cout << "Después del intercambio:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
