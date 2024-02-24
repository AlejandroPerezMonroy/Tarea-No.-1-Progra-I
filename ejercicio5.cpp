#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entre 10 y 30: ";
    cin >> n;
    if (n < 10 || n > 30) {
        cout << "El numero no es valido" << endl;
        return 0;
    }
    cout << "Los numeros impares desde 1 hasta " << n << " son:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Si i es impar
            cout << i << " "; // Mostrar i
        }
    }
    cout << endl;
    return 0;
}
