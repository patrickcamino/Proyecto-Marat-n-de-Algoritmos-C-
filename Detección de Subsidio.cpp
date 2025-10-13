#include <iostream>
using namespace std;

int main() {
    double ingresos;
    int hijos;

    // 1. Pedir los datos
    cout << "Ingresa tus ingresos mensuales: ";
    cin >> ingresos;
    cout << "Ingresa el número de hijos: ";
    cin >> hijos;

    // 2. Evaluar condiciones de subsidio
    if (ingresos < 500 || hijos >= 3)
        cout << "La persona recibe subsidio." << endl;
    else
        cout << "La persona NO recibe subsidio." << endl;

    return 0;
}
