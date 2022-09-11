#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerA;
    float floatA;
    char caracterA;

    printf("Ingresar valor del entero A: ");
    scanf("%i", &integerA);

    printf("Ingresar valor del float A: ");
    scanf("%f", &floatA);

    printf("Ingresar valor del caracter: ");
    scanf(" %c", &caracterA);

    printf("\n\n");

    printf("El entero A es: %i\n", integerA);
    printf("El flotante A es: %f\n", floatA);
    printf("El caracter es: %c\n", caracterA);

    return 0;
}

