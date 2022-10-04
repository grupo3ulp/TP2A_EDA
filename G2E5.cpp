/*
Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. 
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n, c;
    c = 0;

    do{
        cout << "Ingrese un número entero" << endl;
        cin >> n;
        if (n > 0 && (n<20 || n>30)){
            c += n;
        }
        
    } while (n!=0 && (n<20 || n>30));
    
    cout << "La suma de los números ingresados mayores a cero es igual a: " << c << endl;

	
	return 0;
}