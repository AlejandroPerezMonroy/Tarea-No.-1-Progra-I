#include <iostream>
using namespace std;

int main() {
    // Declarar una variable para almacenar la edad del usuario
    int edad;

    // Pedir al usuario que ingrese su edad
    cout << "Por favor, ingrese su edad: ";
    cin >> edad;

    // Verificar si la edad es mayor o igual a 18
    if (edad >= 18) {
        // Si es mayor de edad, mostrar un mensaje
        cout << "Usted es mayor de edad.\n";
    }
    else {
        // Si no es mayor de edad, mostrar otro mensaje
        cout << "Usted es menor de edad.\n";
    }

    return 0;
}
