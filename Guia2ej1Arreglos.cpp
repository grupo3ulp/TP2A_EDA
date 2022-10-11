#include <iostream>
#include <conio.h>

using namespace std;

//Ejercicio 1 arreglos : Escribe un programa que con While, defina un vector de números y calcule la suma de sus elementos.
//Use la librería conio.h, y la función getch().

int main() {
    int num, c = 0, vector[10], sum = 0;
    cout << "Ingrese numeros (del 1 al 9) para llenar el vector" << endl;
    while (c<10){
        num = getch()-'0';
        //getch(); En Clion (el programa que uso) no funciona correctamente el getch, sigue requiriendo el enter)
        vector[c] = num;
        sum = sum + vector[c];
        c++;
    }
    cout << "La suma de los elementos del vector es " << sum << endl;
    return 0;
}
