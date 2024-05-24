#include <iostream>

using namespace std;

void imprimirImpares()
{
    for (int i = 99; i >= 1; i -= 2)
    {
        cout << i << endl;
    }
}

int main()
{
    cout << "Numeros impares del 100 al 1:" << endl;
    imprimirImpares();
    return 0;
}