#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 5 arreglos: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor
//elemento del vector


int main() {
    srand (time(0));
    int vector[10], alto = 0;
    cout << "Llenamos el vector y lo mostramos" << endl;
    for (int i = 0; i < 10; ++i) {
        vector[i] = rand() % 20;
        cout << vector[i] << " ";
        if (vector[i]> alto){
            alto = vector[i];
        }
    }
    cout << endl;
    cout << "El valor mas alto en el vector es " << alto << endl;
    return 0;
}
