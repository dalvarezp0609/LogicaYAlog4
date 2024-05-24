#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Leer un numero y mostrar su tabla de multiplicar */
    int num;
    int i;
    cout << "Ingresa un numero: ";
    cin >> num;

    while (i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    return 0;
}
