// Punto 1 taller: Tablas de multiplicar
#include <iostream>
using namespace std;
int main() {
    int contador = 1, n, resultado;
    cout << "de que numero quieres ver la tabla de multiplicar: " << endl;
    cin >> n;
    while(contador <= 10) {
        resultado = (contador*n);
        cout << contador << " X " << n << " = " << resultado << endl;
        contador++;
    }
    return 0;
}
