#include <iostream>
using namespace std;

int main() {
    double base, resultado = 1;
    int exponente;

    // 1. Pedir base y exponente
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa un exponente negativo: ";
    cin >> exponente;

    if (exponente >= 0) {
        cout << "Error: el exponente debe ser negativo." << endl;
        return 1;
    }

    // 2. Convertir exponente a positivo y calcular potencia
    int expPos = -exponente;
    for (int i = 0; i < expPos; ++i) {
        resultado *= base;
    }

    // 3. Aplicar inversa para exponente negativo
    resultado = 1 / resultado;

    // 4. Mostrar resultado
    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
}


