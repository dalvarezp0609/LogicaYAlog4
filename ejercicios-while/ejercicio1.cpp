/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento, usando while*/

#include <iostream>

using namespace std;

void sumar(int n)
{
    int suma = 0;
    int i = 1;
    if (n < 0)
    {
        cout << "ERROR. El numero ingresado no es un numero natural";
    }
    else
    {
        while (i <= n)
        {
            suma += i;
            i++;
        }
    }
    cout << "La suma es: " << suma;
}

int main()
{
    int w;
    cout << "Hasta que numero deseas sumar?" << endl;
    cin >> w;
    sumar(w);
    

    return 0;
}