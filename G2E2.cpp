/*
Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int n,c;
    c = 0;

	do	{
	cout << "Ingrese un numero entero. Para finalizar el programa ingrese '0'." << endl;
	cin >> n;
	if (n != 0){
        cout << "Numero ingresado correctamente." << endl;
		cout << "_________________________________" << endl;
        if (n > 0){
            c++;
        }
        
	}else{
		cout << "Finalizando el programa" << endl;
        cout << "_________________________________" << endl;
	}
	} while (n!=0);

    cout << "Se han ingresado " << c << " números mayores a cero." << endl;
	
	return 0;
}
