#include <iostream>
using namespace std;

int main() {
    double bytes, kilobytes, megabytes, gigabytes;

    // 1. Pedir la cantidad de bytes
    cout << "Ingresa la cantidad de bytes: ";
    cin >> bytes;

    // 2. Validar que sea positivo
    if (bytes < 0) {
        cout << "Error: La cantidad de bytes debe ser positiva." << endl;
        return 1;
    }

    // 3. Calcular conversiones
    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;

    // 4. Mostrar resultados
    cout << bytes << " bytes equivalen a:" << endl;
    cout << kilobytes << " KB" << endl;
    cout << megabytes << " MB" << endl;
    cout << gigabytes << " GB" << endl;

    return 0;
}

