/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100*/
#include <iostream>
#include <math.h>

using namespace std;

void sumar()
{
    int suma = 0;
    int w = 1;
    while (w <= 100)
    {
        suma += pow(w, 2);
        w++;
    }
    cout << suma;
}

int main()
{
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << endl;
    sumar();
    return 0;
}