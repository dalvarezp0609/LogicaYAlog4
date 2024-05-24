/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;
#define FILAS 5
#define COLUMNAS 5

int matriz1[FILAS][COLUMNAS];
int matriz2[FILAS][COLUMNAS];
int producto[FILAS][COLUMNAS];
int filas1, filas2, columnas1, columnas2;

void ingresar(int numdematriz)
{
    int num;
    if (numdematriz == 1)
    {
        cout << "\ningresar cantidad de filas: ";
        cin >> filas1;
        cout << "ingresar cantidad de columnas: ";
        cin >> columnas1;
        cout << endl;

        int w = 0;
        while (w < filas1)
        {
            int j = 0;
            while (j < columnas1)
            {
                cout << "MATRIZ 1: ingresar numero en fila " << w + 1 << ", columna " << j + 1 << ": ";
                cin >> num;
                matriz1[w][j] = num;
                j++;
            }
            w++;
        }
    }
    else if (numdematriz == 2)
    {
        cout << "Ingrese la cantidad de filas: ";
        cin >> filas2;
        cout << "Ingrese la cantidad de columnas: ";
        cin >> columnas2;
        cout << endl;

        int w = 0;
        while (w < filas2)
        {
            int j = 0;
            while (j < columnas2)
            {
                cout << "Matirz 2: ingrese numero en fila " << w + 1 << ", columna " << j + 1 << ": ";
                cin >> num;
                matriz2[w][j] = num;
                j++;
            }
            w++;
        }
    }
}

void multiplicar()
{
    if (columnas1 == filas2)
    {
        int w = 0;
        while (w < filas1)
        {
            int j = 0;
            while (j < columnas2)
            {
                producto[w][j] = 0;

                int m = 0;
                while (m < columnas1)
                {
                    producto[w][j] += matriz1[w][m] * matriz2[m][j];
                    m++;
                }
                j++;
            }
            w++;
        }
    }
    else
    {
        cout << "Las matrices no son compatibles" << endl;
    }
}

void mostrar()
{
    cout << "Matriz 1:" << endl;
    int w = 0;
    while (w < filas1)
    {
        cout << "[";
        int j = 0;
        while (j < columnas1)
        {
            if (j == columnas1 - 1)
            {
                cout << matriz1[w][j] << "]" << endl;
            }
            else
            {
                cout << matriz1[w][j] << ", ";
            }
            j++;
        }
        w++;
    }

    cout << "Matriz 2:" << endl;
    while (w < filas2)
    {
        cout << "[";
        int j = 0;
        while (j < columnas2)
        {
            if (j == columnas2 - 1)
            {
                cout << matriz2[w][j] << "]" << endl;
            }
            else
            {
                cout << matriz2[w][j] << ", ";
            }
            j++;
        }
        w++;
    }

    cout << "Poducto de las matrices:" << endl;
    while (w < filas1)
    {
        cout << "[";
        int j = 0;
        while (j < columnas2)
        {
            if (j == filas1 - 1)
            {
                cout << producto[w][j] << "]" << endl;
            }
            else
            {
                cout << producto[w][j] << ", ";
            }
            j++;
        }
        w++;
    }
}

int main()
{
    int opcion, num;
    cout << "1. Ingresar datos de matriz" << endl;
    cout << "2. Multiplicar matrices" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "A que matriz desea ingresar datos? ";
        cin >> num;
        ingresar(num);
        break;
    case 2:
        multiplicar();
        mostrar();
        break;
    case 3:
        break;
    default:
        cout << "Opcion invalida..." << endl;
    }
    if (opcion!= 3)
    {
        main();
    }
}
