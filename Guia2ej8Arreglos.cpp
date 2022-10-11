#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y
//muestre el segundo arreglo.


int main() {
    srand (time(0));
    int vectorA[5], vectorB[5];
    cout << "Llenamos el primer vector y lo mostramos" << endl;
    for (int i = 0; i < 5; ++i) {
        vectorA[i] = rand() % 10;
        cout << vectorA[i] << " ";
    }
    cout << endl;
    cout << "Llenamos el segundo vector y lo mostramos" << endl;
    for (int i = 0; i < 5; ++i) {
        vectorB[i] = (vectorA[i] * 2);
        cout << vectorB[i] << " ";
    }
    cout << endl;
    return 0;
}
