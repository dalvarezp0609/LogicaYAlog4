/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial*/
#include <iostream>

using namespace std;

int main()
{
    /* Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial. haz uso de while */
    int num, w, factorial = 1;
    cout << "Ingrese un numero entero no negativo: ";
    cin >> num;
    w = num;
    while (w > 0)
    {
        w -= 1;

        factorial = factorial * w;
    }

    return 0;
}
