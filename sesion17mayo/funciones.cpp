#include <iostream>
#include "variables.h"
// modulizacion se llama al usar varios archivos
using namespace std;

int menu();
void start();
void addGrade();
void showGrades();
void showHigherGrade();
void showLowerGrade();
void showAverage();

int menu()
{
    int opcion;
    system("cls||clear");
    cout << "1. Ingresar notas." << endl;
    cout << "2. Mostrar notas." << endl;
    cout << "3. Nota mas alta." << endl;
    cout << "4. Nota mas baja." << endl;
    cout << "5. Promedio." << endl;
    cout << "6. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;
}

void start()
{
    int opcion;
    while (opcion != 6)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            cout << "Seleccionaste la opcion 1: Ingresar notas. " << endl;
            addGrade();
            system("pause");
            break;
        case 2:
            cout << "Seleccionaste la opcion 2: Mostrar notas." << endl;
            showGrades();
            system("pause");
            break;
        case 3:
            cout << "Seleccionaste la opcion 3: Mostrar la nota mas alta." << endl;
            showHigherGrade();
            system("pause");
            break;
        case 4:
            cout << "Seleccionaste la opcion 4: Mostrar la nota mas baja." << endl;
            showLowerGrade();
            system("pause");
            break;
        case 5:
            cout << "Seleccionaste la opcion 5: Mostrar promedio." << endl;
            showAverage();
            system("pause");
            break;
        case 6:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            system("pause");
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas." << endl;
    }
}

void showGrades()
{
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] << endl;
    }
} // se puede poner aqui el system("pause"); en lugar de tenerlo en el switch.

void showHigherGrade()
{
    int higherGrade = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > higherGrade)
        {
            higherGrade = grades[i];
        }
    }
    cout << "La nota mas alta es: " << higherGrade << endl;
}

void showLowerGrade()
{
    int lowerGrade = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] < lowerGrade)
        {
            lowerGrade = grades[i];
        }
    }
    cout << "La nota mas baja es: " << lowerGrade << endl;
}

void showAverage()
{
    int suma = 0;
    for (int i = 0; i < position; i++)
    {
        suma += grades[i];
    }
     cout << "El promedio es: " << suma / position << endl;
}