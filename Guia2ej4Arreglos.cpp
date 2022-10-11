#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en
//orden inverso—del último al primer elemento.


int main() {
    srand (time(0));
    int vector[10];
    for (int i = 0; i < 10; ++i) {
        vector[i] = rand() % 10;
    }
    cout << "Primero mostramos el vector en orden" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "Ahora mostramos el vector en orden inverso" << endl;
    for (int i = 9; i > -1; --i) {
        cout << vector[i] << " ";
    }
    cout << endl;
    return 0;
}
