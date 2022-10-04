/*Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/


#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    float n, suma= 0, fact = 1;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;

    for (int i = 1; i <=n; i++)    {
        fact*= i;
        suma += fact;
    }

    cout << "La suma de los factoriales hasta el número " << n << " es igual a: " << suma << endl;
       

	return 0;
}
