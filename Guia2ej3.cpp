#include <iostream>
using namespace std;

//Ejercicio 3: Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10
//primeros enteros mayores que cero.


int main() {
    for (int i = 1; i < 11; ++i) {
         cout <<"El cuadrado de " << i << " es " << i*i << endl;
    }
    return 0;
}
