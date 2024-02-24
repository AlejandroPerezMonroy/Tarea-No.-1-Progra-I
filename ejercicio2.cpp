#include <iostream>
using namespace std;

int main() {
    // Declarar dos variables para almacenar los números del usuario
    int num1, num2;

    // Pedir al usuario que ingrese dos números
    cout << "Por favor, ingrese dos números: ";
    cin >> num1 >> num2;

    // Comparar los números usando el operador >
    if (num1 > num2) {
        // Si el primer número es mayor que el segundo, mostrar un mensaje
        cout << "El mayor de los dos números es " << num1 << ".\n";
    }
    else if (num1 < num2) {
        // Si el primer número es menor que el segundo, mostrar otro mensaje
        cout << "El mayor de los dos números es " << num2 << ".\n";
    }
    else {
        // Si los números son iguales, mostrar otro mensaje
        cout << "Los dos números son iguales.\n";
    }

    return 0;
}
