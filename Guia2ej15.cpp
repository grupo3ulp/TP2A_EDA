#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Ejercicio 15: Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba SI, si el vector esta
//ordenado ascendentemente, o NO si el vector no está ordenado

int main() {
    srand (time(0));
    int vector[100], op;
    bool  desord = false;
    cout << "Llenar el vector:" << endl;
    cout << "1: Del 1 al 100 en orden ascendente" << endl;
    cout << "2: Numeros aleatorios del 1 al 100" << endl;
    cin >> op;
    switch (op) {
        case 1:
            for (int i = 0; i < 100; ++i) {
                vector[i] = i + 1;
            }
            break;
        case 2:
            for (int i = 0; i < 100; ++i) {
                vector[i] = rand() % 100 + 1;
            }
            break;
        default:
            cout << "No ingreso una opcion valida el vector se va a llenar con ceros (y por lo tanto va a estar ordenado)" << endl;
            for (int i = 0; i < 100; ++i) {
                vector[i] = 0;
            }
            break;
    }
    for (int i = 0; i < 99; ++i) {
        if (vector[i]>vector[i+1]){
            desord = true;
        }
    }
    if (desord){
        cout << "NO" << endl;
    }else{
        cout << "SI" << endl;
    }
    return 0;
}
