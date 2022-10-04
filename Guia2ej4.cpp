#include <iostream>
using namespace std;

//Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24
//horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja

int main() {
    float temp, media = 0, alta = -100, baja = 100;
    int hora = 0;
    for (int i = 0; i < 6; ++i) {
        cout <<"Ingrese la temperatura actual" << endl;
        cin >> temp;
        cout <<"A las " << hora << " horas hacian " << temp << " grados" << endl;
        hora = hora + 4;
        media = media + temp;
        if (temp > alta){
            alta = temp;
        }
        if (temp < baja){
            baja = temp;
        }
    }
    cout <<"La temperatura media es " << media/6 << " grados" << endl;
    cout <<"La temperatura mas alta registrada es " << alta << " grados" << endl;
    cout <<"La temperatura mas baja registrada es " << baja << " grados" << endl;
    return 0;
}
