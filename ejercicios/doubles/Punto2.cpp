// Punto 2 taller: promedio ponderado
#include <iostream>
using namespace std;

int main() {
    int n;
    double nota, peso, sumaNotas = 0, sumaPesos = 0;
    cout << "¿Cuántas notas va a ingresar?: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        cout << "Ingrese el peso de la nota " << i << ": ";
        cin >> peso;
        sumaNotas += nota * peso;  // acumulamos nota * peso
        sumaPesos += peso;         // acumulamos pesos
    }
    double promedio = sumaNotas / sumaPesos;
    cout << "El promedio ponderado es: " << promedio << endl;
    return 0;
}
