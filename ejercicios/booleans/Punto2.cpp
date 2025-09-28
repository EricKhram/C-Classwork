// Punto 2 taller: Verificar si un año es bisiesto
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un año: ";
    cin >> n;
    bool esBisiesto = (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
    cout << "¿Es bisiesto? " << (esBisiesto ? "Sí" : "No") << endl;
    return 0;
}