#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 6 matrices: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

int main() {
    srand (time(0));
    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizA[i][j] = rand() % 10;
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la segunda matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizB[i][j] = rand() % 10;
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se suman las dos primeras matrices y se crea una nueva" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizC[i][j] = (matrizA[i][j] + matrizB[i][j]);
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
