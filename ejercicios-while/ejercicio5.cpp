/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>

using namespace std;

void promedio()
{
    int alumnos = 8;
    float sumanota = 0, promedio = 0, nota;

    int i = 1;
    while (i <= alumnos)
    {
        cout << "Ingrese la nota del estudiante" << i << endl;
        cin >> nota;
        if (nota >= 70)
        {
            cout << "El estudiante esta aprobado." << endl;
        }
        else
        {
            cout << "El estudiante esta reprobado." << endl;
        }
        sumanota += nota;
        promedio = sumanota / alumnos;
        i++;
    }
    cout << "El promedio general del curso es: " << promedio;
}

int main()
{
    cout << "El promedio general del salon es de: " << endl;
    promedio();

    return 0;
}