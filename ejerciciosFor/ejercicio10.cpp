/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>
using namespace std;
#define MAX_X 5
#define MAX_Y 5

int matriz[MAX_X][MAX_Y];
int transpuesta[MAX_X][MAX_Y];
int filas, columnas;

void ingresar(int filas, int columnas)
{
    int temp;
    cout << endl;
    for (int w = 0; w < filas; w++)
    {
        for (int k = 0; k < columnas; k++)
        {
            cout << "Ingrese numero en fila " << w + 1 << ", columa " << k + 1 << ": ";
            cin >> temp;
            matriz[w][k] = temp;
        }
    }
}

void transponer()
{
    for (int w = 0; w < filas; w++)
    {
        for (int k = 0; k < columnas; k++)
        {
            transpuesta[k][w] = matriz[w][k];
        }
    }

    cout << "La transposicion de la matriz es: { ";
    for (int w = 0; w < columnas; w++)
    {
        cout << "[";
        for (int k = 0; k < filas; k++)
        {
            if (k == filas - 1)
            {
                cout << transpuesta[w][k] << "], ";
            }
            else if ((k == filas - 1) && (w == columnas - 1))
            {
                cout << transpuesta[w][k] << "] }" << endl;
            }
            else
            {
                cout << transpuesta[w][k] << ", ";
            }
        }
    }
}

main()
{
    int opcion;
    cout << "1. Ingresar datos de matriz" << endl;
    cout << "2. Transponer matriz" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese la cantidad de filas: ";
        cin >> filas;
        cout << "Ingrese la cantidad de columnas: ";
        cin >> columnas;
        ingresar(filas, columnas);
        break;
    case 2:
        transponer();
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