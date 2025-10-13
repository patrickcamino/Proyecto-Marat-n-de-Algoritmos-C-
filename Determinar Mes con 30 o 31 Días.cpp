#include <iostream>
using namespace std;

int main() {
    int mes;

    // 1. Pedir número de mes
    cout << "Ingresa el número del mes (1-12): ";
    cin >> mes;

    // 2. Determinar días
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        cout << "El mes tiene 30 días." << endl;
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        cout << "El mes tiene 31 días." << endl;
    else
        cout << "Número de mes inválido." << endl;

    return 0;
}

