#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int contador = 0;

    // 1. Pedir palabra
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // 2. Contar caracteres distintos
    for (int i = 0; i < palabra.length(); ++i) {
        bool esUnico = true;
        for (int j = 0; j < i; ++j) {
            if (palabra[i] == palabra[j]) {
                esUnico = false;
                break;
            }
        }
        if (esUnico)
            contador++;
    }

    // 3. Mostrar resultado
    cout << "Cantidad de caracteres distintos: " << contador << endl;

    return 0;
}


