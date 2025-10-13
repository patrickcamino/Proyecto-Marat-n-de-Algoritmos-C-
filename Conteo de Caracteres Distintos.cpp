#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    string letrasUsadas = "";
    int contador = 0;

    // 1. Pedir palabra
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // 2. Contar caracteres distintos
    for (int i = 0; i < palabra.length(); ++i) {
        if (letrasUsadas.find(palabra[i]) == string::npos) { // No encontrada
            contador++;
            letrasUsadas += palabra[i];
        }
    }

    // 3. Mostrar resultado
    cout << "La palabra tiene " << contador << " caracteres distintos." << endl;

    return 0;
}
