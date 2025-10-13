#include <iostream>
using namespace std;

int main() {
    double numero, valorAbsoluto;

    // 1. Pedir número
    cout << "Ingresa un número: ";
    cin >> numero;

    // 2. Calcular valor absoluto
    if (numero < 0)
        valorAbsoluto = -numero;
    else
        valorAbsoluto = numero;

    // 3. Mostrar resultado
    cout << "El valor absoluto es: " << valorAbsoluto << endl;

    return 0;
}




