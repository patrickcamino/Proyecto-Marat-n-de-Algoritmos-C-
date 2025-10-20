#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 3 == 0) {
        cout << "El número " << numero << " es múltiplo de 3." << endl;
    } else {
        cout << "El número " << numero << " no es múltiplo de 3." << endl;
    }

    return 0;
}
