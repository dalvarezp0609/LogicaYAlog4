#include <iostream>

using namespace std;

void calcularPromedio()
{
    int numEstudiantes = 10;
    float sumaNotas = 0, nota;

    for (int i = 1; i <= numEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ":" << endl;
        cin >> nota;
        sumaNotas += nota;
    }
    float promedio = sumaNotas / numEstudiantes;
    cout << "El promedio general del curso es: " << promedio << endl;
}

int main()
{
    calcularPromedio();
    return 0;
}