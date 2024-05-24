/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores.
El resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;
#define MAX 2
int vector1[MAX];
int vector2[MAX];
int sumadevectores[MAX];

void ingresar()
{
    int num1, num2;
    for (int w = 0; w < MAX; w++)
    {
        cout << "Ingresar numero " << w + 1 << " a vector 1: ";
        cin >> num1;
        vector1[w] = num1;
        cout << "Ingresar numero " << w + 1 << " a vector 2: ";
        cin >> num2;
        vector2[w] = num2;
    }
}

void sumar()
{
    for (int w = 0; w < MAX; w++)
    {
        sumadevectores[w] = vector1[w] + vector2[w];
    }

    cout << "\nLa suma de vectores es: ";
    for (int w = 0; w < MAX; w++)
    {
        if (w == MAX - 1)
        {
            cout << sumadevectores[w] << "}" << endl;
        }
        else
        {
            cout << sumadevectores[w] << ", ";
        }
    }
}

main()
{
    int opcion;
    cout << "1. Ingresar numeros a vectores" << endl;
    cout << "2. Sumar vectores" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        ingresar();
        break;
    case 2:
        sumar();
        break;
    case 3:
    
        break;
    default:
        cout << "Opcion invalida..." << endl;
        break;
    }

    if (opcion != 3)
    {
        main();
    }
}