#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 7 arreglos: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos
//vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos
//del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.


int main() {
    srand (time(0));
    int vectorA[5], vectorB[5], vectorC[10], a=0, b=0;
    cout << "Llenamos el primer vector y lo mostramos" << endl;
    for (int i = 0; i < 5; ++i) {
        vectorA[i] = rand() % 10;
        cout << vectorA[i] << " ";
    }
    cout << endl;
    cout << "Llenamos el segundo vector y lo mostramos" << endl;
    for (int i = 0; i < 5; ++i) {
        vectorB[i] = rand() % 10;
        cout << vectorB[i] << " ";
    }
    cout << endl;
    cout << "Unimos los dos vectores en uno nuevo y lo mostramos" << endl;
    for (int i = 0; i < 10; ++i) {
        if (i < 5){
            vectorC[i] = vectorA[a];
            a++;
        }else{
            vectorC[i] = vectorB[b];
            b++;
        }
        cout << vectorC[i] << " ";
    }
    cout << endl;
    return 0;
}
