#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingresa un número entero positivo: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        long long factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}

