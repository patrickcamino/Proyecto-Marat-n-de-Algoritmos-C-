#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // 1. Pedir los dos números
    cout << "Ingresa el primer número entero positivo: ";
    cin >> num1;
    cout << "Ingresa el segundo número entero positivo: ";
    cin >> num2;

    // 2. Validar que sean positivos
    if (num1 <= 0 || num2 <= 0) {
        cout << "Error: Ambos números deben ser positivos." << endl;
        return 1;
    }

    // 3. Verificar si uno es múltiplo del otro
    if (num1 % num2 == 0)
        cout << num1 << " es múltiplo de " << num2 << endl;
    else if (num2 % num1 == 0)
        cout << num2 << " es múltiplo de " << num1 << endl;
    else
        cout << "Ninguno de los dos números es múltiplo del otro." << endl;

    return 0;
}
