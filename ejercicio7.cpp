#include <iostream>
using namespace std;

int main() {
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
    return 0;
}
