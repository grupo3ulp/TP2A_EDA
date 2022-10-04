#include <iostream>

using namespace std;

//Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el - 1 1 2 3 5 8
//13...hasta n

int main() {
    int num, fib=1, a = 0, b = 1;
    cout << "Ingrese un numero que equivalga a un maximo en la serie fibonacci" << endl;
    cin >> num;
    cout << "Los numeros en la serie fibonacci hasta " << num << " son: " << endl;
    while(fib<=num){
        cout << fib << endl;
        fib = a + b;
        a = b;
        b = fib;
    }
    return 0;
}
