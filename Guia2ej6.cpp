#include <iostream>

using namespace std;

// Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.

int main() {
    float x, y, pot = 1;
    cout <<"Ingrese primero un valor inicial y despues a que numero lo quiere elevar (ambos deben ser numero enteros positivos)"<< endl;
    cin >> x;
    cin >> y;
    if (y == 0){
        pot = 1;
    }else{
        for (int i = 0; i < y; ++i) {
            pot = pot * x;
        }
    }
    cout << x << " elevado a la " << y << " es " << pot << endl;
    return 0;
}
