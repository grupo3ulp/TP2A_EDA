#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 14: Hacer un algoritmo que imprima los valores de la diagonal de una matriz D de 5x5

int main() {
    // Esto es para que no salga siempre lña misma secuencia de numeros aleatorios
    srand (time(0));
    int matriz[5][5];
    cout << "Llenamos la matriz con numeros aleatorios del 1 al 10 y la mostramos" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = rand() % 10 + 1;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ahora mostramos solo los valores de la diagonal principal" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i==j){
                cout << matriz[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
