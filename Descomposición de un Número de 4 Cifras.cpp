#include <iostream>
using namespace std;

int main() {
    int numero, millar, centena, decena, unidad;

    // 1. Pedir el número de 4 cifras
    cout << "Ingresa un número de 4 cifras: ";
    cin >> numero;

    // 2. Validar que tenga 4 cifras
    if (numero < 1000 || numero > 9999) {
        cout << "Error: Debes ingresar un número de 4 cifras." << endl;
        return 1;
    }

    // 3. Separar las cifras
    millar = numero / 1000;
    centena = (numero / 100) % 10;
    decena = (numero / 10) % 10;
    unidad = numero % 10;

    // 4. Mostrar cada cifra
    cout << "Las cifras del número " << numero << " son:" << endl;
    cout << millar << endl;
    cout << centena << endl;
    cout << decena << endl;
    cout << unidad << endl;

    return 0;
}
