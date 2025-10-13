#include <iostream>
using namespace std;

int main() {
    double precio, precioFinal;
    char genero;

    // 1. Pedir precio y género
    cout << "Ingresa el precio de la entrada: ";
    cin >> precio;
    cout << "Ingresa tu género (M/F): ";
    cin >> genero;

    // 2. Aplicar descuento si es femenino
    if (genero == 'F' || genero == 'f')
        precioFinal = precio * 0.9; // 10% de descuento
    else
        precioFinal = precio;

    // 3. Mostrar precio final
    cout << "El precio final es: $" << precioFinal << endl;

    return 0;
}




