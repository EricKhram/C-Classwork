// Punto 2 taller: Verificar si un numero es primo
#include <iostream>
using namespace std;
int main() {
    int numero, i = 2;
    bool esPrimo = true;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero <= 1) {
        esPrimo = false;
    } else {
        do {
            if (numero % i == 0) {
                esPrimo = false;
                break; 
            }
            i++;
        } while (i < numero);
    }
    if (esPrimo) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }

    return 0;
}