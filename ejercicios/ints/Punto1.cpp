// Punto 1 taller: potencia de un numero
#include <iostream>
using namespace std;

int main() {
    int base, exponente, resultado = 1;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;
    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }
    cout << base << " ^ " << exponente << " = " << resultado << endl;
    return 0;
}
