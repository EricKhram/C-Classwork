// Punto 2 taller: Indice de masa corporal
#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;
    cout << "Ingresa tu peso en kg: ";
    cin >> peso;
    cout << "Ingresa tu altura en metros: ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "Tu IMC es: " << imc << endl;
    if (imc < 18.5)
        cout << "Estado: Bajo peso" << endl;
    else if (imc < 25)
        cout << "Estado: Normal" << endl;
    else if (imc < 30)
        cout << "Estado: Sobrepeso" << endl;
    else
        cout << "Estado: Obesidad" << endl;
    return 0;
}
