#include <iostream>

using namespace std;

void calcularPromedio()
{
    int numEstudiantes = 8;
    int aprobados = 0, reprobados = 0;
    float sumaNotas = 0, nota;

    for (int i = 1; i <= numEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ":" << endl;
        cin >> nota;
        if (nota >= 70)
        {
            aprobados++;
            cout << "El estudiante esta aprobado." << endl;
        }
        else
        {
            reprobados++;
            cout << "El estudiante esta reprobado." << endl;
        }
        sumaNotas += nota;
    }
    float promedio = sumaNotas / numEstudiantes;
    cout << "El promedio general del curso es: " << promedio << endl;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
}

int main()
{
    calcularPromedio();
    return 0;
}