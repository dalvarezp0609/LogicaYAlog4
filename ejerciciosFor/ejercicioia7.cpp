#include <iostream>
using namespace std;

const int MAX = 2;

void ingresar(int vector1[], int vector2[])
{
    for (int i = 0; i < MAX; i++)
    {
        cout << "Ingresar numero " << i + 1 << " a vector 1: ";
        cin >> vector1[i];
        cout << "Ingresar numero " << i + 1 << " a vector 2: ";
        cin >> vector2[i];
    }
}

void sumar(int vector1[], int vector2[], int sumadevectores[])
{
    for (int i = 0; i < MAX; i++)
    {
        sumadevectores[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de vectores es: {";
    for (int i = 0; i < MAX; i++)
    {
        if (i == MAX - 1)
        {
            cout << sumadevectores[i] << "}";
        }
        else
        {
            cout << sumadevectores[i] << ", ";
        }
    }
    cout << endl;
}

int main()
{
    int vector1[MAX];
    int vector2[MAX];
    int sumadevectores[MAX];

    int opcion;
    while (true)
    {
        cout << "1. Ingresar numeros a vectores" << endl;
        cout << "2. Sumar vectores" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ingresar(vector1, vector2);
            break;
        case 2:
            sumar(vector1, vector2, sumadevectores);
            break;
        case 3:
            return 0;
            break;
        default:
            cout << "Opcion invalida..." << endl;
            break;
        }
    }

    return 0;
}