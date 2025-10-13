#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    int contador = 0;

    // 1. Pedir frase
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    // 2. Contar espacios
    for (char c : frase) {
        if (c == ' ')
            contador++;
    }

    // 3. Mostrar resultado
    cout << "Cantidad de espacios en blanco: " << contador << endl;

    return 0;
}





