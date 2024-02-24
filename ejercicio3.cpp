#include <iostream>
using namespace std;

int main() {
    // Declarar una variable para almacenar el número del usuario
    int num;

    // Pedir al usuario que ingrese un número entero
    cout << "Por favor, ingrese un número entero: ";
    cin >> num;

    // Verificar si el número es divisible por 2 usando el operador %
    if (num % 2 == 0) {
        // Si el número es par, mostrar un mensaje
        cout << "El número es par.\n";
    }
    else {
        // Si el número es impar, mostrar otro mensaje
        cout << "El número es impar.\n";
    }

    return 0;
}
