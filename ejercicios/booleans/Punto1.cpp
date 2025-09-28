// Punto 1 taller: Verificar si un número es par o
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    bool esPar = n % 2 == 0;
    cout << "¿Es par? " << (esPar ? "Sí" : "No") << endl;
    return 0;
}