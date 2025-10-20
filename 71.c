#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Ingrese la coordenada X: ";
    cin >> x;
    cout << "Ingrese la coordenada Y: ";
    cin >> y;

    if(x > 0 && y > 0)
        cout << "El punto está en el Cuadrante I." << endl;
    else if(x < 0 && y > 0)
        cout << "El punto está en el Cuadrante II." << endl;
    else if(x < 0 && y < 0)
        cout << "El punto está en el Cuadrante III." << endl;
    else if(x > 0 && y < 0)
        cout << "El punto está en el Cuadrante IV." << endl;
    else
        cout << "El punto está sobre los ejes." << endl;

    return 0;
}
