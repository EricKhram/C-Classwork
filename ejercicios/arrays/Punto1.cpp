// Punto 1 taller: numero menor y mayor de un arreglo
#include <iostream>
using namespace std;
int main() {
    int arr[5], mayor, menor;
    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    mayor = menor = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > mayor) {
            mayor = arr[i];
        }
        if(arr[i] < menor) {
            menor = arr[i];
        }
    }
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    return 0;
}