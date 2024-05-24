#include <iostream>
#include "variable.h"

using namespace std;
struct{
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int year;
} person;


int main(int argc, char const *argv[])
{
    cout << "CIF";
    cin >> person.cif;
    cout << "Nombre";
    cin >> person.name;

    cout << person.cif << " . " << person.name << endl;
    return 0;
}