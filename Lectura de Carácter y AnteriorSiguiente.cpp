#include <iostream>
using namespace std;

int main() {
    char caracter;

    // 1. Pedir el carácter al usuario
    cout << "Ingresa un carácter: ";
    cin >> caracter;

    // 2. Calcular el anterior y siguiente
    char anterior = caracter - 1;
    char siguiente = caracter + 1;

    // 3. Mostrar los resultados
    cout << "Carácter ingresado: " << caracter << endl;
    cout << "Carácter anterior: " << anterior << endl;
    cout << "Carácter siguiente: " << siguiente << endl;

    return 0;
}
