/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100*/
#include <iostream>
#include <math.h>

using namespace std;

void sumar()
{
    int suma = 0;

    for (int w = 1; w <= 100; w++)
    {
        suma += pow(w, 2);
    }
    cout << suma;
}

int main()
{
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << endl;
    sumar();
    return 0;
}