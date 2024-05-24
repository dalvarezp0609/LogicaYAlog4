#include <iostream>

using namespace std;

void calcularSumaCuadrados()
{
    int suma = 0;

    for (int i = 1; i <= 100; i++)
    {
        suma += i * i;
    }
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;
}

int main()
{
    calcularSumaCuadrados();
    return 0;
}