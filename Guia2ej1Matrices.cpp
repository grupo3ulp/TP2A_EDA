#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 1 arreglos: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
//Posteriormente mostrar la matriz en pantalla.

int main() {
    srand (time(0));
    int a, b;
    cout << "Ingrese de cuantas filas y cuantas columnas quiere la matriz" << endl;
    cin >> a;
    cin >> b;
    int matriz[a][b];
    cout << "Se forma la matriz y se muestra" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            matriz[i][j] = rand() % 10;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
