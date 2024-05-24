/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100*/
#include <iostream>

using namespace std;

void decadencia()
{
    int w = 100;
    while (w >= 0)
    {
        if (w % 2 != 0)
        {
            cout << w << endl;
        }
        w--;
    }
}

int main()
{
    cout << "Numeros impares del 100 al 1:" << endl;
    decadencia();

    return 0;
}