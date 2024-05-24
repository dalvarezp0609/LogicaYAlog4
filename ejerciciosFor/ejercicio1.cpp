/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento*/
#include <iostream>

using namespace std;

void sumar(int n)
{
    int suma = 0;
    if (n < 0)
    {
        cout << "Error. El numero ingresado no es un numero natural";
    }
    else
    {
        for (int i; i <= n; i++)
        {
            suma += i;
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
