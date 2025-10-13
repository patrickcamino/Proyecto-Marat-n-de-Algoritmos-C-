#include <iostream>
using namespace std;

int main() {
    int base, altura;

    // 1. Pedir dimensiones
    cout << "Ingresa la base del rectángulo: ";
    cin >> base;
    cout << "Ingresa la altura del rectángulo: ";
    cin >> altura;

    // 2. Dibujar rectángulo hueco
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= base; ++j) {
            if (i == 1 || i == altura || j == 1 || j == base)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}


