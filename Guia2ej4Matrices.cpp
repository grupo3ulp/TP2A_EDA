#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números
//aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.

int main() {
    srand (time(0));
    int a, b;
    cout << "Ingrese de cuantas filas y cuantas columnas quiere la matriz" << endl;
    cin >> a;
    cin >> b;
    int matrizA[a][b], matrizB[a][b];
    cout << "Se forma la primera matriz y se muestra" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            matrizA[i][j] = rand() % 10;
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Se forma la segunda matriz y se muestra" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            matrizB[i][j] = matrizA[i][j];
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
