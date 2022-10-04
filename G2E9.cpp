/*Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */


#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n, r;
    r = 1;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;

  for (int i = 1; i <= n; i++)  {
    r = r*i;
  }

    cout << n << "! = " << r << endl; 
    cout << "Eso significa que la multiplicación de los números hasta el valor " << n << " es igual a: " << r << endl;

    cout << "___________________________________________________________________" << endl;

    
	return 0;
}