#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // 1. Pedir los lados
    cout << "Ingresa el primer lado: ";
    cin >> a;
    cout << "Ingresa el segundo lado: ";
    cin >> b;
    cout << "Ingresa el tercer lado: ";
    cin >> c;

    // 2. Validar lados positivos
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error: Los lados deben ser positivos." << endl;
        return 1;
    }

    // 3. Verificar desigualdad triangular
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "No es un triángulo válido." << endl;
        return 1;
    }

    // 4. Determinar tipo de triangulo
    if (a == b && b == c)
        cout << "Triángulo Equilátero." << endl;
    else if (a == b || a == c || b == c)
        cout << "Triángulo Isósceles." << endl;
    else
        cout << "Triángulo Escaleno." << endl;

    return 0;
}
