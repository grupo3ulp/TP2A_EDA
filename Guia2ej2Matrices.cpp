#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 2 matrices: Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal
//principal de la matriz.

int main() {
    srand (time(0));
    int matriz[3][3];
    cout << "Se forma la matriz y se muestra" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = rand() % 10;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ahora mostramos la diagonal principal" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == j){
                cout << matriz[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
