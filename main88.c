#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "El término " << n << " de Fibonacci es: " << fibonacci(n) << endl;
    return 0;
}
