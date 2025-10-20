#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;

    cout << "Ingrese el primer número (dividendo): ";
    cin >> num1;

    cout << "Ingrese el segundo número (divisor): ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
    } else {
        resultado = num1 / num2;
        cout << "El resultado de la división es: " << resultado << endl;
    }

    return 0;
}
