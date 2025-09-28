// Punto 2 taller: arreglo invertido
#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "arreglo invertido :" << endl;
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << endl;
    }
    return 0;
}