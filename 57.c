#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero >= 10 && numero <= 50) {
        cout << "El número está dentro del rango (10 - 50)." << endl;
    } else {
        cout << "El número está fuera del rango (10 - 50)." << endl;
    }

    return 0;
}
