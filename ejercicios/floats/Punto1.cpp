// Punto 1 taller: convertir de km a millas
#include <iostream>
using namespace std;

int main() {
    float km, millas;
    cout << "Ingresa la distancia en kilometros: ";
    cin >> km;
    millas = km * 0.621371f;
    cout << km << " km equivalen a " << millas << " millas." << endl;
    return 0;
}
