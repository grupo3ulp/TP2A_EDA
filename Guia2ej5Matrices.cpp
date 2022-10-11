#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 5 matrices: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
//La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

int main() {
    srand (time(0));
    int matriz[3][3], matrizT[3][3];
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = rand() % 10;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la matriz transpuesta y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizT[i][j] = matriz[j][i];
            cout << matrizT[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
