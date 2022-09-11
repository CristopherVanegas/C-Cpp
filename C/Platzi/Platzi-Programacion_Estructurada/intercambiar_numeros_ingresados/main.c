#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_1;
    int number_2;
    int changeVar;


    printf("Ingrese el valor de number_1: ");
    scanf(" %i", number_1);
    printf("Ingrese el valor de number_2: ");
    scanf(" %i", number_2);
    printf("\n\n");


    printf("Los valores ingresador son:\n");
    printf("Number 1: %i", number_1);
    printf("\n");
    printf("Number 2: %i", number_2);
    printf("\n\n");


    changeVar = number_1;   // guardo el valor de la variable 1 en change var.
    number_1 = number_2;     // intercambio valor 1 con valor 2
    number_2 = changeVar;    // intercambio el valor 2 por valor 1 pero guardado en change var.

    printf("Los valores invertidos son:\n");
    printf(" - Valor 1: %i", number_1);
    printf("\n");
    printf(" - Valor 2: %i", number_2);
    printf("\n");

    return 0;
}
