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
        for (int i = 1; i <= n; i++)
        {
            suma += i;
        }
    }
    cout << "La suma es: " << suma << endl;
}

int main()
{
    int w;
    cout << "Hasta que numero deseas sumar?" << endl;
    cin >> w;
    sumar(w);
    return 0;
}