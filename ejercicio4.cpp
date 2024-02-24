#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    int i = n; // Variable auxiliar para el bucle
    while (i > 0) {
        factorial = factorial * i; // Multiplicar el factorial por i
        i--; // Decrementar i en uno
    }
    cout << "El factorial de " << n << " es " << factorial << endl;
    return 0;
}
