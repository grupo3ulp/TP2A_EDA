#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 6 arreglos: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
//cuyo valor equivale a la suma del resto de números del vector.


int main() {
    srand (time(0));
    int num, vector[5];
    bool flag = true;
    cout << "Llenamos el vector" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        vector[i] = num;
    }
    if (vector[0]== vector[1]+vector[2]+vector[3]+vector[4]){
        cout << "El valor en el indice 0 es igual a la suma del resto de los valores" << endl;
        flag = false;
    }
    if (vector[1]== vector[0]+vector[2]+vector[3]+vector[4]){
        cout << "El valor en el indice 0 es igual a la suma del resto de los valores" << endl;
        flag = false;
    }
    if (vector[2]== vector[1]+vector[0]+vector[3]+vector[4]){
        cout << "El valor en el indice 0 es igual a la suma del resto de los valores" << endl;
        flag = false;
    }
    if (vector[3]== vector[1]+vector[2]+vector[0]+vector[4]){
        cout << "El valor en el indice 0 es igual a la suma del resto de los valores" << endl;
        flag = false;
    }
    if (vector[4]== vector[1]+vector[2]+vector[3]+vector[0]){
        cout << "El valor en el indice 0 es igual a la suma del resto de los valores" << endl;
        flag = false;
    }
    if (flag){
        cout << "Ningun el valor es igual a la suma del resto de los valores" << endl;
    }
    return 0;
}
