/*Funciones*/
#include <iostream>

/*Saludar*/
void showMessage();

void showMessage(){
    printf("\tUniversidad Americana \n");
    printf(" \t\tUAM \n ");
}

void sumar(){
    int num1, num2;
    printf("\nIngresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    int suma = num1 + num2;
    printf("La suma es: %d", suma);
}
   