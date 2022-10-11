#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 7 matrices: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es
//simétrica si es cuadrada y si es igual a su matriz transpuesta.

int main() {
    srand (time(0));
    int matriz[2][2], matrizT[2][2], c = 0;
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matriz[i][j] = rand() % 2;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la matriz transpuesta y se muestra" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrizT[i][j] = matriz[j][i];
            cout << matrizT[i][j] << " ";
            if(matrizT[i][j] == matriz[i][j]){
                c++;
            }
        }
        cout << endl;
    }
    if(c==4){
        cout << "La matriz es simetrica" << endl;
    }else{
        cout << "La matriz no es simetrica" << endl;
    }
    return 0;
}
