#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 3 matrices: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el contenido de
//M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo.

int main() {
    srand (time(0));
    int matrizA[2][2], matrizB[2][2];
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrizA[i][j] = rand() % 10;
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la segunda matriz y se muestra" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrizB[i][j] = (matrizA[i][j] + 1);
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
