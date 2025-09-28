// Punto 1 taller: vocales en una palabra
#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int vocales = 0;
    cout << "Ingresa una palabra o frase: ";
    getline(cin, texto);
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
    }
    cout << "Cantidad de vocales: " << vocales << endl;
    return 0;
}
