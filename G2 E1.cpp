/*
Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
su tabla de multiplicar.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){

	int n;
	bool flag = true;

	do	{
	cout << "Ingrese un numero entero entre 1 y 10" << endl;
	cin >> n;
	if (n <= 0 || n > 10){
		cout << "El número ingresado no es válido." << endl;
		cout << "_________________________________" << endl;
	}else{
		for (int i = 1; i < 11; ++i){
			cout << n << " * " << i << " = " << n * i << endl;
			flag = false;
		}
	}
	} while (flag);

	return 0;
}
