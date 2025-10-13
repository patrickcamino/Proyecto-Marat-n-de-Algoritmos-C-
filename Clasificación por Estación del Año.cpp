#include <iostream>
using namespace std;

int main() {
    int mes;

    // 1. Pedir el número de mes
    cout << "Ingresa el número del mes (1-12): ";
    cin >> mes;

    // 2. Validar rango
    if (mes < 1 || mes > 12) {
        cout << "Error: El número debe estar entre 1 y 12." << endl;
        return 1;
    }

    // 3. Determinar la estación
    if (mes == 12 || mes == 1 || mes == 2)
        cout << "Estación: Invierno" << endl;
    else if (mes >= 3 && mes <= 5)
        cout << "Estación: Primavera" << endl;
    else if (mes >= 6 && mes <= 8)
        cout << "Estación: Verano" << endl;
    else
        cout << "Estación: Otoño" << endl;

    return 0;
}
