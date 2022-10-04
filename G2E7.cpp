/*
* Ejercicio 7: A-Escriba un programa que calcule usando un while, el valor de: 1+2+3+...+n.
* B-Escriba un programa que calcule usando un for, el valor de: 1+3+5+...+2n-1
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n, n1, i, r, r1;
    i = 1;
    r = 0;
    r1 = 0;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;

    while (i <= n){
        r += i;
        i++;
        cout << r << endl;
    }

    cout << "La suma de los números hasta el valor " << n << " es igual a: " << r << endl;
    cout << "___________________________________________________________________" << endl;

    cout << "Ingrese el valor de n" << endl;
    cin >> n1;
    int nn = ((2*n1)-1);

    for (i = 0; i <= nn; i++){
        if (i % 2 != 0){
            r1 += i;
            cout << r1 << endl;
        }
        
    }

    cout << "La suma de los números impares hasta el valor (2*n-1) = " << nn << " es igual a: " << r1 << endl;

	return 0;
}
