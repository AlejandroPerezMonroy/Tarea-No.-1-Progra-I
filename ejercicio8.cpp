#include <iostream>
using namespace std;

// Funciones para los ejercicios anteriores
void factorial() {
    int n, factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    int i = n; // Variable auxiliar para el bucle
    while (i > 0) {
        factorial = factorial * i; // Multiplicar el factorial por i
        i--; // Decrementar i en uno
    }
    cout << "El factorial de " << n << " es " << factorial << endl;
}

void impares_for() {
    int n;
    cout << "Ingrese un numero entre 10 y 30: ";
    cin >> n;
    if (n < 10 || n > 30) {
        cout << "El numero no es valido" << endl;
        return;
    }
    cout << "Los numeros impares desde 1 hasta " << n << " son:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Si i es impar
            cout << i << " "; // Mostrar i
        }
    }
    cout << endl;
}

void impares_while() {
    int n;
    cout << "Ingrese un numero entre 10 y 30: ";
    cin >> n;
    if (n < 10 || n > 30) {
        cout << "El numero no es valido" << endl;
        return;
    }
    cout << "Los numeros impares desde 1 hasta " << n << " son:" << endl;
    int i = 1; // Variable auxiliar para el bucle
    while (i <= n) {
        if (i % 2 != 0) { // Si i es impar
            cout << i << " "; // Mostrar i
        }
        i++; // Incrementar i en uno
    }
    cout << endl;
}

void dia_semana() {
    int n;
    cout << "Ingrese un numero del 1 al 5: ";
    cin >> n;
    switch (n) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        default:
            cout << "El numero no es valido" << endl;
            break;
    }
}

int main() {
    int opcion;
    cout << "Seleccione el ejercicio que desea ejecutar:" << endl;
    cout << "1. Factorial de un numero" << endl;
    cout << "2. Numeros impares con for" << endl;
    cout << "3. Numeros impares con while" << endl;
    cout << "4. Dia de la semana con switch" << endl;
    cout << "5. Salir" << endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            factorial();
            break;
        case 2:
            impares_for();
            break;
        case 3:
            impares_while();
            break;
        case 4:
            dia_semana();
            break;
        case 5:
            cout << "Adios" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}
