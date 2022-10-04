/*
Ejercicio 8: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: a)
Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c) Alumnos que
aprobaron únicamente el último examen.*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    bool flag = true;
    int n1, n2, n3, c1, c2, c3;
    c1 = 0;
    c2 = 0;
    c3 = 0;

    for (int i = 0; i < 5; i++)    {
        
        do        {
            cout << "Ingrese la nota del primer examen del alumno #" << i + 1 << endl;
            cin >> n1;
            cout << "Ingrese la nota del segundo examen del alumno #" << i + 1 << endl;
            cin >> n2;
            cout << "Ingrese la nota del tercer examen del alumno #" << i + 1 << endl;
            cin >> n3;

            //Suponemos que un alumno aprueba con una nota de 7

            if (n1 > 0 && n1 < 11 && n2 > 0 && n2 < 11 && n3 > 0 && n3 < 11)            {
                // Sumamos +1 al contador si el alumno aprobó todos los exámenes
                if (n1 > 6 && n2 > 6 && n3 > 6){
                    c1++;
                }
                // Sumamos +1 al contador si el alumno aprobó al menos un examen
                if (n1 > 6 || n2 > 6 || n3 > 6){
                    c2++;
                }
                // Sumamos +1 al contador si el alumno aprobó solo el último examen
                if (n1 < 7 && n2 < 7 && n3 >= 7){
                    c3++;
                }
                flag = false;
            } else {
                cout << "Alguno de los valores es incorrecto. Ingrese un número válido (1-10)" << endl;
            }

        } while (flag);
        flag = true;
        cout << "________________________________________________________________________" << endl;
    }

    cout << "La cantidad de alumnos que aprobaron todos los exámenes es igual a: " << c1 << endl;
    cout << "La cantidad de alumnos que aprobaron al menos un examen es igual a: " << c2 << endl;
    cout << "La cantidad de alumnos que aprobaron solo el último examen es igual a: " << c3 << endl;

    return 0;
}
