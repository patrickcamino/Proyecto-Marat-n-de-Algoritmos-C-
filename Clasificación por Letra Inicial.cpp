#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    char letra = toupper(nombre[0]);

    if(letra >= 'A' && letra <= 'F')
        cout << "Categoría: A-F" << endl;
    else if(letra >= 'G' && letra <= 'L')
        cout << "Categoría: G-L" << endl;
    else if(letra >= 'M' && letra <= 'R')
        cout << "Categoría: M-R" << endl;
    else
        cout << "Categoría: S-Z" << endl;

    return 0;
}


