#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 8 matrices: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3

int main() {
    srand (time(0));
    int matrizA[3][3], matrizB[3][3], matrizC[3][3], a = 0;
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizA[i][j] = rand() % 4;
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la segunda matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizB[i][j] = rand() % 4;
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se multiplican las dos primeras matrices y se crea una nueva" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizC[i][j] = ((matrizA[i][a] * matrizB[a][j]) + (matrizA[i][a+1] * matrizB[a+1][j]) + (matrizA[i][a + 2] * matrizB[a+2][j]));
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
