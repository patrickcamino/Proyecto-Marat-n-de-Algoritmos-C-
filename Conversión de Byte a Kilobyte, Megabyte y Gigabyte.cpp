#include <iostream>
#include <iomanip> // Para controlar los decimales
using namespace std;

int main() {
    double bytes;

    // 1. Pedir al usuario la cantidad de bytes
    cout << "Ingresa la cantidad de bytes: ";
    cin >> bytes;

    // 2. Validar que sea positivo
    if (bytes < 0) {
        cout << "Error: La cantidad de bytes debe ser positiva." << endl;
        return 1;
    }

    // 3. Calcular conversiones
    double kilobytes = bytes / 1024;
    double megabytes = kilobytes / 1024;
    double gigabytes = megabytes / 1024;

    // 4. Mostrar resultados
    cout << fixed << setprecision(4); // Mostrar 4 decimales
    cout << "Equivalencias:" << endl;
    cout << "Kilobytes (KB): " << kilobytes << endl;
    cout << "Megabytes (MB): " << megabytes << endl;
    cout << "Gigabytes (GB): " << gigabytes << endl;

    return 0;
}
