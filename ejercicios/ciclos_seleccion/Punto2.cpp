// Punto 2 taller: descuento en compras
#include <iostream>
#include <iomanip> 

using namespace std;
int main() {
    double precio, descuento;
    cout << fixed << setprecision(2);
    cout << "Ingresa el precio de tu producto para saber que descuento tienes: ";
    cin >> precio;
    if (precio <= 100000) {
        cout << "Tu producto no aplica para descuento" << endl;
        descuento = precio; 
        cout << "Precio final: " << descuento;
    }else if (precio <= 300000) {
        cout << "tu producto aplica para 10'%' de descuento" << endl;
        descuento = precio*0.10;
        precio = precio - (precio*0.10); 
        cout << "descuento: " << descuento << endl;
        cout << "Precio final: " << precio << endl;
    }else if (precio <= 500000) {
        cout << "tu producto aplica para 15'%' de descuento" << endl;
        descuento = precio*0.15;
        precio = precio - (precio*0.15); 
        cout << "descuento: " << descuento << endl;
        cout << "Precio final: " << precio << endl;
    }else if (precio <= 2000000) {
        cout << "tu producto aplica para 20'%' de descuento" << endl;
        descuento = precio*0.20;
        precio = precio - (precio*0.20); 
        cout << "descuento: " << descuento << endl;
        cout << "Precio final: " << precio << endl;
    }else if (precio > 2000000) {
        cout << "tu producto aplica para 25'%' de descuento" << endl;
        descuento = precio*0.25;
        precio = precio - (precio*0.25); 
        cout << "descuento: " << descuento << endl;
        cout << "Precio final: " << precio << endl;
    }
    return 0;
}
