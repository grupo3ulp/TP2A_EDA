/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n, r= 0;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;

    for (int i = 1; i <=n; i++)    {
        if (i%2 != 0)        {
            r += i;
        } else       {
            r -=i;
        }   
        
    }

    cout << "El resultado de la siguiente expresión: 1-2+3-4+5-6...n es: " << r << endl;
       

	return 0;
}