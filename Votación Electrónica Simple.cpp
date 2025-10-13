#include <iostream>
#include <cctype> // Para convertir a mayúscula
using namespace std;

int main() {
    char voto;

    // 1. Pedir el voto
    cout << "Ingrese su voto (A, B o C): ";
    cin >> voto;

    // 2. Convertir a mayúscula
    voto = toupper(voto);

    // 3. Evaluar voto
    if (voto == 'A') {
        cout << "Has votado por el candidato A." << endl;
    } else if (voto == 'B') {
        cout << "Has votado por el candidato B." << endl;
    } else if (voto == 'C') {
        cout << "Has votado por el candidato C." << endl;
    } else {
        cout << "Voto inválido. Por favor ingrese A, B o C." << endl;
    }

    return 0;
}
