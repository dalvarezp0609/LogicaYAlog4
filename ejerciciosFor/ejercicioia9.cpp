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
        cout << "Ingrese la cantidad de filas de la matriz 1: ";
        cin >> filas1;
        cout << "Ingrese la cantidad de columnas de la matriz 1: ";
        cin >> columnas1;
        cout << endl;

        for (int w = 0; w < filas1; w++)
        {
            for (int j = 0; j < columnas1; j++)
            {
                cout << "Ingrese el valor en la posicion [" << w + 1 << "][" << j + 1 << "] de la matriz 1: ";
                cin >> num;
                matriz1[w][j] = num;
            }
        }
    }
    else if (numdematriz == 2)
    {
        cout << "Ingrese la cantidad de filas de la matriz 2: ";
        cin >> filas2;
        cout << "Ingrese la cantidad de columnas de la matriz 2: ";
        cin >> columnas2;
        cout << endl;

        for (int w = 0; w < filas2; w++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                cout << "Ingrese el valor en la posicion [" << w + 1 << "][" << j + 1 << "] de la matriz 2: ";
                cin >> num;
                matriz2[w][j] = num;
            }
        }
    }
}

void multiplicar()
{
    if (columnas1 == filas2)
    {
        for (int w = 0; w < filas1; w++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                producto[w][j] = 0;

                for (int m = 0; m < columnas1; m++)
                {
                    producto[w][j] += matriz1[w][m] * matriz2[m][j];
                }
            }
        }
    }
    else
    {
        cout << "Las matrices no son compatibles para la multiplicacion." << endl;
    }
}

void mostrar()
{
    cout << "Matriz 1: " << endl;
    for (int w = 0; w < filas1; w++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            cout << matriz1[w][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz 2: " << endl;
    for (int w = 0; w < filas2; w++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            cout << matriz2[w][j] << " ";
        }
        cout << endl;
    }

    cout << "Producto de las matrices: " << endl;
    for (int w = 0; w < filas1; w++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            cout << producto[w][j] << " ";
        }
        cout << endl;
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
        break;
    }

    return 0;
}