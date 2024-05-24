#include <iostream>

using namespace std;

void sumarPares()
{
    int suma = 0;
    for (int i = 100; i <= 200; i += 2)
    {
        suma += i;
    }
    cout << "La suma de los numeros pares entre 100 y 200: " << suma << endl;
}

int main()
{
    sumarPares();
    return 0;
}