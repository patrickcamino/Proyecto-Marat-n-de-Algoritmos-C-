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
    for (int i = 0; i < frase.length(); ++i) {
        if (frase[i] == ' ')
            contador++;
    }

    // 3. Mostrar resultado
    cout << "La frase tiene " << contador << " espacios en blanco." << endl;

    return 0;
}


