#include <iostream>
#include <cmath>

using namespace std;

//Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

int main() {
    int num;
    double sum = 0;
    cout << "Ingrese un numero para hacer una sumatoria de potencias" << endl;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        sum = sum + (pow(2, i+1));
    }
    cout << "La sumatoria de potencias " << num << " veces da " << sum << endl;
    return 0;
}
