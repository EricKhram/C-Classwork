// Punto 2 taller: numero invertido
#include <iostream>
using namespace std;

int main() {
    int num, invertido = 0;
    cout << "Ingresa un numero: ";
    cin >> num;
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    cout << "Numero invertido: " << invertido << endl;
    return 0;
}
