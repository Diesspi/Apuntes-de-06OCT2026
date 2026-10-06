#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    float prc, iva, subt, tot;
    int cantidad;
    
    cout <<"Precio del producto: $"; cin >> prc;
    cout <<"Cantidad del producto: "; cin >> cantidad;
    
    subtotal = precio * cantidad; 
    iva= subtotal * 0.16;
    total = subtotal + iva;
    
    
    cout <<"subtotal: " << fixed << setprecision(2) << subtotal << endl;
    cout << "iva: "  << fixed << setprecision(2) << iva << endl;
    cout << "total: "  << fixed << setprecision(2) << total << endl;
}