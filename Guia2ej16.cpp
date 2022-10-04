#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 16: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los números negativos
//y en un vector B todos los positivos o iguales a cero

int main() {
    srand (time(0));
    int vectorV[20], vectorA[20], vectorB[20] , a = 0, b = 0;
    cout << "Se llena el primer vector con numeros al azar entre -10 y 10 y lo mostramos" << endl;
    cout << "Tambien vamos llenando los otros vectores" << endl;
    for (int i = 0; i < 20; ++i) {
        vectorV[i] = rand() % 10 - rand() % 10;
        cout << vectorV[i] << " ";
        if (vectorV[i]<0){
            vectorA[a]=vectorV[i];
            a++;
        }else{
            vectorB[b]=vectorV[i];
            b++;
        }
    }
    cout << endl;
    cout << "Vector con numeros negativos" << endl;
    for (int i = 0; i < a; ++i) {
        cout << vectorA[i] << " ";
    }
    cout << endl;
    cout << "Vector con numeros positivos" << endl;
    for (int i = 0; i < b; ++i) {
        cout << vectorB[i] << " ";
    }
    cout << endl;
    return 0;
}
