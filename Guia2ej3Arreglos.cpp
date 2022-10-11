#include <iostream>

using namespace std;

//Ejercicio 3 arreglos: Escribe un programa que lea de la entrada estándar un vector de números de tamaño 100, pero que
//cargue por teclado n números, y los muestre en la salida estándar los números del vector con sus índices
//asociados.

int main() {
    int vector[100], num, n, c;
    cout << "Ingrese cuantos numeros aleatorios desea ingresar en el vector (maximo 100)" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese un numero en el vector" << endl;
        cin >> num;
        vector[i] = num;
    }
    for (int i = 0; i < n; ++i) {
        cout << "El numero en el espacio " << i << " del vector es " << vector[i] << endl;
    }
    cout << "El vector tiene " << 100 - n << " espacios vacios " << endl;
    return 0;
}
