#include <iostream>
using namespace std;

int main() {
    char caracter;

    // 1. Pedir un carácter
    cout << "Ingresa un carácter: ";
    cin >> caracter;

    // 2. Clasificar carácter
    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z'))
        cout << "El carácter es una letra." << endl;
    else if (caracter >= '0' && caracter <= '9')
        cout << "El carácter es un número." << endl;
    else
        cout << "El carácter es un símbolo." << endl;

    return 0;
}
