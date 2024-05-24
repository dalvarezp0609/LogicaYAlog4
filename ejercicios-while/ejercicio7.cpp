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
    int w = 0;
    int num1, num2;
    while (w < MAX)
    {
        cout << "Ingresar numero " << w + 1 << " a vector 1: ";
        cin >> num1;
        vector1[w] = num1;
        cout << "Ingresar numero " << w + 1 << " a vector 2: ";
        cin >> num2;
        vector2[w] = num2;
        w++;
    }
}

void sumar()
{
    int w = 0;
    while (w < MAX)
    {
        sumadevectores[w] = vector1[w] + vector2[w];
        w++;
    }
}

void mostrar() {
    int w = 0;
    cout << "\nLa suma de vectores es: {";
    while (w < MAX)
    {
        if (w == MAX - 1)
        {
            cout << sumadevectores[w] << "}" << endl;
        }
        else
        {
            cout << sumadevectores[w] << ", ";
        }

        w++;
    }
}

int main()
{
    int opcion;
    cout << "\n1. Ingresar numeros a vectores" << endl;
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
        mostrar();
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