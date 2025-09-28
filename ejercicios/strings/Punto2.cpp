// Punto 2 taller: cuantas veces aparece una letra dada por el usuario
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char letra;
    int contador = 0;
    cout << "Ingresa un texto: ";
    getline(cin, texto);
    cout << "Ingresa la letra a buscar: ";
    cin >> letra;
    for (char c : texto) {
        if (tolower(c) == tolower(letra)) {
            contador++;
        }
    }
    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;
    return 0;
}
