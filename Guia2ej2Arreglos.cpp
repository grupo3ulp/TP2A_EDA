#include <iostream>
#include <conio.h>

using namespace std;

//Ejercicio 2 arreglos: Escribe un programa usando un for, que defina un vector de números y calcule la multiplicación
//acumulada de sus elementos. Use la librería conio.h, y la función getch()

int main() {
    double num, vector[4], mul = 1;
    cout << "Ingrese numeros (del 1 al 9) para llenar el vector" << endl;
    for (int i = 0; i < 4; ++i) {
        num = getch()-'0';
        //getch(); En Clion (el programa que uso) no funciona correctamente el getch, sigue requiriendo el enter)
        vector[i] = num;
        mul = mul * num;
    }
    cout << "La multiplicacion de todos los elementos en el vector es " << mul << endl;
    return 0;
}
